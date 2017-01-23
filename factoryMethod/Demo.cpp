#include "stdafx.h"
#include "MyApp.h"

void main()
{
	MyApp *app = new MyApp();
	app->InitInstance();
	app->Run();
	app->ExitInstance();

	delete app;
}