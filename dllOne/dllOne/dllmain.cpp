// dllmain.cpp : ���� DLL Ӧ�ó������ڵ㡣
#include "stdafx.h"

DLLONE_API int ndllOne = 0;
DLLONE_API HHOOK glhHook = NULL;
DLLONE_API HINSTANCE glhInstance = NULL;
DLLONE_API std::string data;
DLLONE_API bool ctrldown = false;
BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
	glhInstance = hModule;//���뱣��DLLʵ�����
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

