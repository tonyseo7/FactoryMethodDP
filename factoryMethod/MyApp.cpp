#include "stdafx.h"
#include "MyApp.h"


void MyApp::InitInstance()
{
	cout << "MyApp �ʱ�ȭ" << endl;
	EHApp::InitInstance();
}

EHView *MyApp::MakeView()
{
	return new MyView();
}