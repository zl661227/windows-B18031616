#include "pch.h"
// StrcatLib.cpp : ���徲̬��ĺ���strcat
//

#include "StrStaticLib.h"

#include <stdexcept>

using namespace std;

namespace StringFuncs
{
	char* MyStringFuncs::strcat(char* dest, const char* src)
	{
		//ʵ�ֺ���strcat
		//��������Ϊƴ���ַ���
		if (src == NULL) 
		{
			return NULL;
		}
		char* cp = dest;
		while (*cp)
			cp++; 
		while (*cp++ = *src++);
		return dest;
	
	}
}