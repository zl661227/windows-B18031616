#include "pch.h"
// StrcatLib.cpp : 定义静态库的函数strcat
//

#include "StrStaticLib.h"

#include <stdexcept>

using namespace std;

namespace StringFuncs
{
	char* MyStringFuncs::strcat(char* dest, const char* src)
	{
		//实现函数strcat
		//函数功能为拼接字符串
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