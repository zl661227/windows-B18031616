#include "pch.h"
// StrcpyLib.cpp : 定义静态库的函数strcpy。
//

#include "StrStaticLib.h"

#include <stdexcept>

using namespace std;

namespace StringFuncs
{
	char* MyStringFuncs::strcpy(char* dest, const char* src)
	{
		//实现函数strcpy
		//函数功能为复制字符串
		char* cp = dest;
		if (src == NULL) {
			return NULL;
		}
		while (*cp++ = *src++);
		return dest;
	}
}