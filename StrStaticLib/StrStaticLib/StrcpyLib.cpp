#include "pch.h"
// StrcpyLib.cpp : ���徲̬��ĺ���strcpy��
//

#include "StrStaticLib.h"

#include <stdexcept>

using namespace std;

namespace StringFuncs
{
	char* MyStringFuncs::strcpy(char* dest, const char* src)
	{
		//ʵ�ֺ���strcpy
		//��������Ϊ�����ַ���
		char* cp = dest;
		if (src == NULL) {
			return NULL;
		}
		while (*cp++ = *src++);
		return dest;
	}
}