#include "extras.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

extern "C"
{
	__declspec(dllexport) void copy(char src[])
	{
		char dest[1024];
		strcpy (dest,src);
		printf("You wrote: %s\n",dest);
	}
	__declspec(dllexport) void memprotect() 
	{
		int *p, var=101;
		p = &var;
		PDWORD lpflOldProtect = NULL;
		BOOL test = VirtualProtect(p,0x40, PAGE_EXECUTE_READWRITE, lpflOldProtect); 
	}
	__declspec(dllexport) void ExtrasFunc1() {
		__asm{
		   jmp esp
		   jmp eax
		   pop eax
		   pop eax
		   ret
		};
	}
	__declspec(dllexport) void ExtrasFunc2() {
		__asm{
		   jmp esp
		   jmp edi
		   pop edi
		   pop edi
		   ret
		};
	}
	__declspec(dllexport) void ExtrasFunc3() {
		__asm{
		   jmp esp
		   jmp edi
		   pop ebx
		   pop edi
		   pushad
		   ret
		};
	}
	__declspec(dllexport) void ExtrasFunc4() {
		__asm{
		   jmp esp
		   leave
		   ret
		};
	}
	__declspec(dllexport) void ExtrasFunc5() {
		__asm{
		   jmp esp
		   jmp ecx
		   pop ecx
		   pop ebx
		   ret
		};
	}	
}