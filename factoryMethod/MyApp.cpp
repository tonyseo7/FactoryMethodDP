#include "stdafx.h"
#include "MyApp.h"


void MyApp::InitInstance()
{
	cout << "MyApp ÃÊ±âÈ­" << endl;
	EHApp::InitInstance();
}

EHView *MyApp::MakeView()
{
	return new MyView();
}