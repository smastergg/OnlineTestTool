#pragma once
// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� DLLONE_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// DLLONE_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef DLLONE_EXPORTS
#define DLLONE_API __declspec(dllexport)
#else
#define DLLONE_API __declspec(dllimport)
#endif

DLLONE_API LRESULT  CALLBACK  KeyboardProc(int nCode, WPARAM wParam, LPARAM lParam);


// �����Ǵ� dllOne.dll ������
class DLLONE_API CdllOne{
public:
	CdllOne(void);
	// TODO:  �ڴ�������ķ�����
	virtual ~CdllOne();
public:
	BOOL startHook();
	BOOL stopHook();
};


