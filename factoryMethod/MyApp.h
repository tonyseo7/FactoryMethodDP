#pragma once
#include "EHApp.h"
#include "MyView.h"

class MyApp : public EHApp
{
public:
	void InitInstance();
	virtual EHView *MakeView();
};
