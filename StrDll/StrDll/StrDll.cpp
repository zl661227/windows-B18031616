// StrDll.cpp : Defines the exported functions for the DLL.
#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier

#include "StrDll.h"

int MyStrcmp(const char* str1, const char* str2)
{
	//ʵ�ֺ���strcmp
	//��������Ϊ�ַ����Ƚ�
	int ret = 0;
	while (!(ret = *(unsigned char*)str1 - *(unsigned char*)str2) && *str1)
	{
		str1++;
		str2++;
	}
	if (ret < 0)
	{
		return -1;
	}
	else if (ret > 0)
	{
		return 1;
	}
	return 0;
}
