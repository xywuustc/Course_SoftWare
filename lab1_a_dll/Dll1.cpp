// Dll1.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "Dll1.h"
#include "string.h"

//extern "C" _declspec(dllexport) int Add(int x, int y);

int Add(int x, int y)
{
	return x + y;


	string str();
}

string str()
{
	return "helloworld";
}
bool Get_string(char *str)
{
	strcpy(str, "helloworld!");
	return true;

}
bool Put_Get_string(char *str_out, char*str_in)
{
	strcpy(str_out, str_in);
	return true;
}




