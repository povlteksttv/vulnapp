#ifndef _EXTRAS_H
#define _EXTRAS_H

extern "C"
{
	__declspec(dllexport) void copy(char src[]);
	__declspec(dllexport) void ExtrasFunc1();
	__declspec(dllexport) void ExtrasFunc2();
	__declspec(dllexport) void ExtrasFunc3();
	__declspec(dllexport) void ExtrasFunc4();
	__declspec(dllexport) void ExtrasFunc5();
}

#endif