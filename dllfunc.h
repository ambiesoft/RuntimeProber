

#pragma once

extern "C" {
#ifdef ISEXE
	_declspec(dllimport) void dllfunc();
#else
	_declspec(dllexport) void dllfunc();
#endif
}