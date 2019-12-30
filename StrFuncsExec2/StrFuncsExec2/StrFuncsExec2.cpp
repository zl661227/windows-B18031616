//本项目以隐式链接方式调用dll
#include <iostream>
#include "StrDll.h"
using namespace std;

int main()
{
	char str3[40] = "Class";

	//调用动态库中的strcmp函数，将str3分别与字符串"Classes"和"Class"进行比较，并分别输出结果
	int result1 = MyStrcmp("Classes",str3);
	int result2 = MyStrcmp("Class",str3);
	cout << result1 << endl;
	cout << result2 << endl;
	return 0;
}