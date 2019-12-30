#include <iostream>
#include "StrStaticLib.h"
#pragma warning(disable: 4996)
using namespace std;


int main()
{
	char str1[40];
	char str2[40] = "Hello ";
	//调用静态库中的strcpy函数，将字符串"Windows"复制到str1，并输出str1
	StringFuncs::MyStringFuncs::strcpy(str1, "Windows");
	cout << str1<<endl;
	//调用静态库中的strcat函数，将字符串"World!"拼接到str2后面，并输出str2
	StringFuncs::MyStringFuncs::strcat(str2, "World!");
	cout << str2 << endl;
	//调用静态库中的strcpy函数，分别将 NULL 和 "" 复制到str2，并输出str2
	StringFuncs::MyStringFuncs::strcpy(str2, NULL);
	cout << str2 << endl;
	StringFuncs::MyStringFuncs::strcpy(str2, "");
	cout << str2 << endl;
	//调用静态库中的strcat函数，分别将 NULL 和 "" 拼接到str2，并输出str2
	StringFuncs::MyStringFuncs::strcat(str2, NULL);
	cout << str2 << endl;
	StringFuncs::MyStringFuncs::strcat(str2, "");
	cout << str2 << endl;
	return 0;
}