#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//ȱʡ����
/*
//ȫȱʡ�����в�������ȱʡֵ
void Func(int a = 10, int b = 20, int c = 30 )
{
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	cout << "c= " << c << endl << endl;
}
int main()
{
	Func();//û�в�������ʹ��ȱʡֵ
	Func(1);//���������ʹ�ò�����������Ҹ�ֵ
	Func(1,10);
	return 0;
}*/

/*
//��ȱʡ:ȱʡ���ֲ������涨��������ȱʡ����������ȱʡ
//void Func_1(int a, int b = 20, int c) �޷�ͨ��
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

//�������أ�ͳһ�������ڣ����ڹ������Ƶ�ͬ����������Щ�����Ĳ�����ͬ���������ͺ͸����ȣ�
//����ֵ��ͬ����������Ϊ���ء�  �����뷵��ֵ�޹�ϵ����Ҫ�ǿ�����
/*
// 1���������Ͳ�ͬ
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

// 2������������ͬ
void f()
{
	cout << "f()" << endl;
}
void f(int a)
{
cout << "f(int a)" << endl;
}

// 3����������˳��ͬ
void f(int a, char b)
{
	cout << "f(int a,char b)" << endl;
}
void f(char b, int a)
{
	cout << "f(char b, int a)" << endl;
}


//1.ȱʡֵ��ͬ����������Ϊ���ء�
void f()
{
	cout << "f()" << endl;
}
void f(int a = 0)
{
	cout << "f(int a)" << endl;
}

//2.�������أ�����ʹ�û��������
void f()
{
	cout << "f()" << endl;
}
void f(int a = 0)
{
	cout << "f(int a)" << endl;
}
//���޲���ʱ�����û��������
*/

/*
�������ص�ԭ��
���ȣ�ΪʲôC���Բ�֧�����أ���C++֧�֣�C++�����֧�����ص�
�ع˱������������Ĺ���(func.h  func.c  test.c)
1.Ԥ���� - > ͷ�ļ�չ�������滻���������롢ȥ��ע��
	����func.i test.i
2.���� - > ����﷨�����ɻ������
	����func.s test.s
3.��� - > ������ת���ɶ����ƵĻ�����
	����func.o test.o
4.����
	����a.out

ΪʲôC��֧�֣�����Ϊ������.o�ļ���ʱ��C���ԶԺ������ֵĴ����Ǽ򵥵Ĵ���
	call f(��ַ) -> call f(0x31313131)
	������ʱ����Ϊ�����ʱ������������������func.o���ű��д�������ͳ�ͻ��
	f : 0x31313131	f : 0x31313131�����ǵ��õ�����������������͵����˳�ͻ�����Ӳ��ϡ�
C++���֧������
	C++��Ŀ����ű� ����ֱ���ú���������ʶ�Ͳ��ң�
	1.���������ι��򣺲�ͬ�������£��в�ͬ�Ĺ���
	2.���˺��������ι���ֻҪ������ͬ��func.o���ű���������غ����Ͳ����ڳ�ͻ
*/


