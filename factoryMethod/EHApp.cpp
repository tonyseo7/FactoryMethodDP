#include "stdafx.h"
#include "EHApp.h"

void EHApp::InitInstance()
{
	view = MakeView();
}

void EHApp::Run()
{
	view->Show();
}

void EHApp::ExitInstance()
{

	delete view;
}