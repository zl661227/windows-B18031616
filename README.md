# Windows大作业

## 一、	实验目的和要求
#### 实验目的：

1. 通过对静态库、动态库的编写，熟练掌握静态库和动态库的相关知识；
2. 通过多次对项目内容的提交，熟练掌握代码仓库的使用方式。

#### 实验要求：

1.	回顾本学期所做的实验，能够灵活运用实验内容；
2.	根据提供的代码框架，完成静态库中函数strcpy、strcat以及动态库中函数strcmp的编写；
3.	在项目中调用实验中编写的静态库和动态库，测试其中函数并输出结果；
4.	步骤中每一步都要进行代码仓库的提交工作，根据步骤中的要求填入commit信息（利用githubdesktop），实验**按步得分**。

> 若没有按步提交，则缺少的提交**不得分**

> 实验按步骤截图，以完成实验报告

## 二、	实验内容指导
1、	将本次大作业的代码仓库clone到本地，仓库中有三个文件夹，分别为：

文件夹名  | 文件夹内容
------------- | -------------
StrStaticLib  | 本次实验的静态库代码
StrDll  | 本次实验的动态库代码
StrFuncsExec  | 调用库中函数的控制台代码

2、	打开StrStaticLib项目，在StrcpyLib.cpp文件中，补充实现函数strcpy，函数功能为复制字符串。*完成后，进行代码仓库的提交工作。commit信息：步骤1、补充实现函数strcpy*
![win.pmease.cn/img/windows/windows_2.png](http://win.pmease.cn/img/windows/windows_2.png)

3、	在StrStaticLib项目中编译静态库，编译完成后，打开StrFuncsExec项目，将静态库配置到项目中，保存项目。*完成后，进行代码仓库的提交工作。commit信息：步骤2、将静态库配置到项目中*

4、	在StrFuncsExec项目中，在StrFuncsExec.cpp文件中，按照提示调用静态库中的strcpy函数，将字符串"Windows"复制到str1，并输出str1。*完成后，进行代码仓库的提交工作。commit信息：步骤3、调用静态库中的strcpy函数*

![win.pmease.cn/img/windows/windows_4.png](http://win.pmease.cn/img/windows/windows_4.png)


5、	打开StrStaticLib项目，在StrcatLib.cpp文件中，补充实现函数strcat，函数功能为字符串拼接。*完成后，进行代码仓库的提交工作。commit信息：步骤4、实现函数strcat*

![win.pmease.cn/img/windows/windows_5.png](http://win.pmease.cn/img/windows/windows_5.png)

6、	再次编译静态库，编译完成后，在StrFuncsExec项目的StrFuncsExec.cpp文件中，按照提示调用静态库中的strcat函数，将字符串"World!"拼接到str2后面，并输出str2。*完成后，进行代码仓库的提交工作。commit信息：步骤5、调用函数strcat*

![win.pmease.cn/img/windows/windows_6.png](http://win.pmease.cn/img/windows/windows_6.png)

7、  在StrFuncsExec项目中，在StrFuncsExec.cpp文件中，调用静态库中的strcpy函数，分别将 NULL 和 "" 复制到str2，并输出str2；调用静态库中的strcat函数，分别将 NULL 和 "" 拼接到str2，并输出str2。*完成后，进行代码仓库的提交工作。commit信息：步骤6、测试strcpy和strcat函数*

![win.pmease.cn/img/windows/windows_7.png](http://win.pmease.cn/img/windows/windows_7.png)


8、	打开StrDll项目，在StrDll.cpp文件中，补充实现函数strcmp，函数功能为字符串比较，在StrDll项目中编译动态库。*完成后，进行代码仓库的提交工作。commit信息：步骤7、实现strcmp函数*

![win.pmease.cn/img/windows/windows_8.png](http://win.pmease.cn/img/windows/windows_8.png)

9、	打开StrFuncsExec2项目，将动态库项目的头文件和lib文件配置到项目中，配置项目的post build功能，将dll文件复制到对应的路径下，保存项目。*完成后，进行代码仓库的提交工作。commit信息：步骤8、将头文件、lib文件和dll文件配置到项目中*

![win.pmease.cn/img/windows/windows_9.png](http://win.pmease.cn/img/windows/windows_9.png)

10、在StrFuncsExec2项目中，在StrFuncsExec2.cpp文件中，调用动态库中的strcmp函数，将str3分别与字符串"Classes"和"Class"进行比较，并分别输出结果。*完成后，进行代码仓库的提交工作。commit信息：步骤9、隐式调用dll中的函数*

![win.pmease.cn/img/windows/windows_10.png](http://win.pmease.cn/img/windows/windows_10.png)

11、	在StrFuncsExec3项目中，配置项目的post build功能，将dll文件复制到对应的路径下，保存项目。*完成后，进行代码仓库的提交工作。commit信息：步骤10、将dll文件配置到项目中*

![win.pmease.cn/img/windows/windows_11.png](http://win.pmease.cn/img/windows/windows_11.png)

12、	在StrFuncsExec3项目中，使用函数LoadLibrary、GetProcAddress、FreeLibrary显式使用动态库，按照提示调用动态库中的strcmp函数，将str3分别与字符串"Classes"和"Class"进行比较，并分别输出结果。*完成后，进行代码仓库的提交工作。commit信息：步骤11、显式调用dll*

![win.pmease.cn/img/windows/windows_12.png](http://win.pmease.cn/img/windows/windows_12.png)

13、将本地的仓库利用githubdesktop同步到远程库。

14、将实验内容按步截图并按照QQ作业中的模板完成实验报告，并在QQ作业中提交。