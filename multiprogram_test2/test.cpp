// multiprogram_test2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include"../mutiprogram_test1/mutiprogram_test1.cpp"
#include<string>
#include"../Dll1/main.h"
#include"../dll_test/dll_test.h"
//#include"dll_test.h"
using namespace std;


int main()
{
	int i;
	cout << add(12 , 12345);
	for (int i = 0; i < 50; i++)
	{
		cout << add(i, i) << endl;
	}
}
