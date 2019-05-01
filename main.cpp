#include <Windows.h>

#include <stdio.h>
#include <stdlib.h>

void waitInput()
{
	getchar();
}
int main(int argc, const char* argv[])
{
	printf("Entering main\n");
	for (int i = 0; i < argc; ++i)
	{
		printf("Loading %s...", argv[i]);
		waitInput();
		HMODULE hModule = LoadLibraryA(argv[i]);
		printf("HMODULE=%d\n", (int)hModule);
		
		printf("Freeing...");
		waitInput();
		BOOL bRet = FreeLibrary(hModule);
		printf("ret=%d\n", bRet);
	}
	printf("Exiting main\n");
	return 0;
}