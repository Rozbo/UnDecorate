// UnDecorate.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h> //�����������ͷ�ļ�������DbgHelp.hʱ����������﷨����
#include <DbgHelp.h>
#include <tchar.h>
#include <iostream>
#pragma comment(lib,"dbghelp.lib") //����������ʹ����������

int _tmain(int argc, _TCHAR* argv[])
{
	WCHAR szUndecorateName[256];
	memset(szUndecorateName, 0, 256);
	if (2 == argc)
	{
		::UnDecorateSymbolNameW(argv[1], szUndecorateName, 256, 0);
		std::wcout << szUndecorateName << std::endl;
	}
    return 0;
}

