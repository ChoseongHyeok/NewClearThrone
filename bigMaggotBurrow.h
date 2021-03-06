#pragma once
#include "bigMaggotState.h"
class bigMaggotBurrow :
	public bigMaggotState
{
private:
	animation* bigmaggotburrowright;
	animation* bigmaggotburrowleft;
	animation* bigmaggotinvisible;
public:
	virtual HRESULT init(enemyinfo info);
	virtual void update(enemyinfo &info);

	static void immune(void* obj);

	image* getImage() { return _img; }
	void setImage(image* img) { _img = img; }

	animation* getMotion() { return _motion; }
	void setteMotion(animation* ani) { _motion = ani; }

};

