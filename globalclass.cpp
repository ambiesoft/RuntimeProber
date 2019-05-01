#include <Windows.h>

#include <stdio.h>
#include <stdlib.h>

#include "globalclass.h"

GlobalClass::GlobalClass()
{
	printf("ctor of GlobalClass. GetModuleHandle(nullptr)=%d\n", (int)GetModuleHandle(nullptr));
}
GlobalClass::~GlobalClass()
{
	printf("dtor of GlobalClass. GetModuleHandle(nullptr)=%d\n", (int)GetModuleHandle(nullptr));
}

GlobalClass globalClass;