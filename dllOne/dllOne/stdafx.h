// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // �� Windows ͷ���ų�����ʹ�õ�����
// Windows ͷ�ļ�: 
#include <windows.h>
#include "dllOne.h"
#include <stdlib.h>
#include <stdio.h>


extern DLLONE_API int ndllOne;
extern DLLONE_API HHOOK glhHook;         //��װ����깴�Ӿ�� 
extern DLLONE_API HINSTANCE glhInstance; //DLLʵ�����
extern DLLONE_API std::string data;
extern DLLONE_API bool ctrldown;
// TODO:  �ڴ˴����ó�����Ҫ������ͷ�ļ�
