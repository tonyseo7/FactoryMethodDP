#pragma once
#include "EHView.h"

class EHApp
{
	EHView *view;
	
public:
	virtual void InitInstance();
	virtual void Run();
	virtual void ExitInstance();

protected:
	virtual EHView *MakeView() = 0;
	

};