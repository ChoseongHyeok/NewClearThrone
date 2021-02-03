#pragma once
#include "bullet16.h"
#include "bullet1.h"

enum weaponState
{
	ONGROUND,
	NOWUSING,
	READYTOUSE
};

enum weaponType
{
	ASSULTRIFLE,
	GRENADELAUNCHER,
	MACHINEGUN,
	PISTOL,
	RAZERRIFLE,
	SHOTGUN,
	SHOVEL,
	SWORD,
	TRIPLEMACHINEGUN,
	WRENCH,
};
class weapon
{
protected:
	image* _img;		// �̹����Դϴ�
	POINT _pt;			// ��ǥ�Դϴ�
	float _imgx, _imgy;	// �̹��� �Ѹ� ��ǥ(�������ư�����)
	weaponState _state;	// �����Դϴ�
	weaponType _type;	// ����Ÿ���Դϴ�
	bullet* _bullet;
	RECT _rc;
	float _radius;	// �̹��� 
	float _angle;		// ���ذ����Դϴ�
	float _meleeAngle;	// �������� ���� �� �� �����Դϴ�
	int _index;			// ���� ���� �����Ǵ� �������ε����Դϴ�
	int _damage;		// �������Դϴ�
	int _coolDown;		// ����ӵ�(�������� ����)
	float _range;		// ���������� �� �ĸ��� �����Դϴ�

public:
	weapon() {};
	~weapon() {};
	virtual HRESULT init(POINT pt);
	virtual void update();
	virtual void fire();
	void release();
	void render(HDC hdc);
	void setFrameIndex(float angle);
	void setAngle(float angle);
	image* getImg() { return _img; };
	bullet* getBullet() { return _bullet; }
	void Position();
};

