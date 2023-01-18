#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//缺省参数
/*
//全缺省：所有参数都有缺省值
void Func(int a = 10, int b = 20, int c = 30 )
{
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	cout << "c= " << c << endl << endl;
}
int main()
{
	Func();//没有参数，则使用缺省值
	Func(1);//传入参数则使用参数，由左→右赋值
	Func(1,10);
	return 0;
}*/

/*
//半缺省:缺省部分参数，规定从右往左缺省，必须连续缺省
//void Func_1(int a, int b = 20, int c) 无法通过
void Func_1(int a, int b = 20, int c = 30)
{
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	cout << "c= " << c << endl << endl;
}
int main()
{
	Func_1(1);//
	Func_1(1, 10);
	return 0;
}*/

//函数重载：统一作用域内，存在功能类似的同名函数，这些函数的参数不同（包括类型和个数等）
//返回值不同，不可以作为重载。  重载与返回值无关系，主要是看参数
/*
// 1、参数类型不同
int Add(int left, int right)
{
	cout << "int Add(int left, int right)" << endl;
	return left + right;
}
double Add(double left, double right)
{
	cout << "double Add(double left, double right)" << endl;
	return left + right;
}

// 2、参数个数不同
void f()
{
	cout << "f()" << endl;
}
void f(int a)
{
cout << "f(int a)" << endl;
}

// 3、参数类型顺序不同
void f(int a, char b)
{
	cout << "f(int a,char b)" << endl;
}
void f(char b, int a)
{
	cout << "f(char b, int a)" << endl;
}


//1.缺省值不同，不可以作为重载。
void f()
{
	cout << "f()" << endl;
}
void f(int a = 0)
{
	cout << "f(int a)" << endl;
}

//2.构成重载，但是使用会出现问题
void f()
{
	cout << "f()" << endl;
}
void f(int a = 0)
{
	cout << "f(int a)" << endl;
}
//当无参数时，调用会出现歧义
*/

/*
函数重载的原理
首先：为什么C语言不支持重载，而C++支持？C++是如何支持重载的
回顾编译器编译程序的过程(func.h  func.c  test.c)
1.预处理 - > 头文件展开、宏替换、条件编译、去掉注释
	生成func.i test.i
2.编译 - > 检查语法，生成汇编语言
	生成func.s test.s
3.汇编 - > 汇编代码转换成二进制的机器码
	生成func.o test.o
4.链接
	生成a.out

为什么C不支持，是因为在生成.o文件的时候，C语言对函数名字的处理是简单的处理
	call f(地址) -> call f(0x31313131)
	当重载时，因为编译的时候两个函数重名，在func.o符号表中存在歧义和冲突，
	f : 0x31313131	f : 0x31313131，但是调用的是两个函数，这里就导致了冲突，链接不上。
C++如何支持重载
	C++的目标符号表 不是直接用函数名来标识和查找，
	1.函数名修饰规则：不同编译器下，有不同的规则
	2.有了函数名修饰规则，只要参数不同，func.o符号表里面的重载函数就不存在冲突
*/


