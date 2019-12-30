//本项目用显式链接的方式调用dll
#include <iostream>

#include "windows.h"

using namespace std;

typedef int (*SINT)(const char* str1, const char* str2);
int main()
{
	//使用LoadLibrary函数装载动态库
	HMODULE hDLL = LoadLibrary(L"StrDll.dll");
	if (hDLL == NULL) {
		cout << "获取动态链接库失败！";
		return 0;
	}
	//使用GetProcAddress获取动态库中的函数
	SINT MyStrcmp = (SINT)GetProcAddress(hDLL, "MyStrcmp");
	char str3[40] = "Class";

	//调用动态库中的strcmp函数，将str3分别与字符串"Classes"和"Class"进行比较，并分别输出结果
	int result1 = MyStrcmp("Class", str3);
	int result2 = MyStrcmp("Classes", str3);
	cout << result1 << endl;
	cout << result2 << endl;
	//使用FreeLibrary释放动态链接库
	FreeLibrary(hDLL);
	return 0;
}