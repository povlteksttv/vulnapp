#include <iostream>
#include "extras.h"

int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("Usage: %s <String>",argv[0]);
		exit(1);
	}
	copy(argv[1]);

    return 0;
}

//  All securities off for the DLL (no_security)
//	cl /EHsc /c .\src\*.cpp /GS- /I .\include /Fo".\no_security\obj\\"
//	link /DLL /OUT:.\no_security\extras.dll /DYNAMICBASE:NO /BASE:0x62500000 /NXCOMPAT:NO /SAFESEH:NO .\no_security\obj\*.obj
//	cl /EHsc main.cpp /Fe".\no_security\copy.exe" /I .\include /link .\no_security\*.lib /NXCOMPAT:NO


// gs enabled 
//	cl /EHsc /c .\src\*.cpp /I .\include /Fo".\gs\obj\\"
//	link /DLL /OUT:.\gs\extras.dll /DYNAMICBASE:NO /BASE:0x62500000 /NXCOMPAT:NO /SAFESEH:NO .\gs\obj\*.obj
//	cl /EHsc main.cpp /Fe".\gs\copy.exe" /I .\include /link .\gs\*.lib /NXCOMPAT:NO

// gs enabled and SafeSEH enabled 
//	cl /EHsc /c .\src\*.cpp /I .\include /Fo".\gs_safeseh\obj\\"
//	link /DLL /OUT:.\gs_safeseh\extras.dll /DYNAMICBASE:NO /BASE:0x62500000 /NXCOMPAT:NO .\gs_safeseh\obj\*.obj
//	cl /EHsc main.cpp /Fe".\gs_safeseh\copy.exe" /I .\include /link .\gs_safeseh\*.lib /NXCOMPAT:NO

//  gs enabled and SafeSEH enabled and ASLR enabled 
//	cl /EHsc /c .\src\*.cpp /I .\include /Fo".\gs_safeseh_aslr\obj\\"
//	link /DLL /OUT:.\gs_safeseh_aslr\extras.dll /BASE:0x62500000 /NXCOMPAT:NO .\gs_safeseh_aslr\obj\*.obj
//	cl /EHsc main.cpp /Fe".\gs_safeseh_aslr\copy.exe" /I .\include /link .\gs_safeseh_aslr\*.lib /NXCOMPAT:NO