#include <Windows.h>

#include <stdio.h>
#include <stdlib.h>

#include "dllfunc.h"
#include "showmodule.h"

void waitInput()
{
	getchar();
}
int main(int argc, const char* argv[])
{
	showmodule(L"main");
	dllfunc();
	return 0;
}