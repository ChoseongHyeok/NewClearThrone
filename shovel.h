#pragma once
#include "weapon.h"
class shovel : public weapon
{
public:
	virtual HRESULT init(POINT pt);
	virtual void render(HDC hdc);
	virtual void update();
	virtual void fire();
};

