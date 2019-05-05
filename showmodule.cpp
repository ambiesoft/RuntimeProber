#include <Windows.h>

#include <stdio.h>
#include <stdlib.h>

#include <string>

#include "../lsMisc/stdosd/stdosd.h"

#include "showmodule.h"

using namespace Ambiesoft::stdosd;

void showmodule(LPCWSTR p)
{
	int argc;
	std::unique_ptr<LPWSTR, HLOCAL(WINAPI *)(HLOCAL)>
		arg(::CommandLineToArgvW(GetCommandLineW(), &argc), ::LocalFree);

	std::wstring sout;

	{
		MEMORY_BASIC_INFORMATION buff = {};
		VirtualQuery(showmodule, &buff, sizeof(buff));
		sout += stdGetFileName(stdGetModuleFileName<wchar_t>((HMODULE)buff.AllocationBase));
	}
	sout += L":";
	{
		MEMORY_BASIC_INFORMATION buff = {};
		VirtualQuery(fclose, &buff, sizeof(buff));
		sout += stdGetFileName(stdGetModuleFileName<wchar_t>((HMODULE)buff.AllocationBase));
	}

	wprintf(L"%s:%s:showmodule\n", p, sout.c_str());
	//waitInput();
	//HMODULE hModule = LoadLibraryA(argv[i]);
	//printf("HMODULE=%d\n", (int)hModule);
	//printf("Freeing...");
	//waitInput();
	//BOOL bRet = FreeLibrary(hModule);
}