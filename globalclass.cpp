#include <Windows.h>

#include <stdio.h>
#include <stdlib.h>

#include "showmodule.h"
#include "globalclass.h"

GlobalClass::GlobalClass()
{
	showmodule(L"GlobalClass::ctor");
}
GlobalClass::~GlobalClass()
{
	showmodule(L"GlobalClass::dtor");
}

GlobalClass globalClass;