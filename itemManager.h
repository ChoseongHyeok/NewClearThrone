#pragma once
#include "singletonBase.h"
#include <vector>
#include "itemBox.h"
#include"bulletBox.h"
#include"weaponBox.h"
#include"medkitBox.h"
#include "assultRifle.h"
#include "grenadeLauncher.h"
#include "machineGun.h"
#include "pistol.h"
#include "razerRifle.h"
#include "shotGun.h"
#include "item.h"
#include "bulletitem.h"
#include "medkititem.h"


class itemManager : public singletonBase<itemManager>
{
private:
	typedef vector<itemBox*> vItembox;
	typedef vector<itemBox*>::iterator viItembox;

	typedef vector<weapon*> vWeapon;
	typedef vector<weapon*>::iterator viWeapon;

	typedef vector<item*> vItem;
	typedef vector<item*>::iterator viItem;

	vItembox _vItembox;
	viItembox _viItembox;

	vWeapon _vWeapon;
	viWeapon _viWeapon;

	vItem _vItem;
	viItem _viItem;

	weaponType _weaponType;

public:
	virtual HRESULT init();
	virtual void release();
	virtual void update();
	virtual void render(HDC hdc);
	virtual void setimage();
	virtual void setItembox();
	virtual void collsion();
	void createWeapon(POINT pt);

};

