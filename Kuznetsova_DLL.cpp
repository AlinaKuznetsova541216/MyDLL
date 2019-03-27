// Kuznetsova_DLL.cpp: определяет экспортированные функции для приложения DLL.
//

#include "stdafx.h"
#include <utility>
#include <limits.h>
#include <windows.h>
#include "KuznetsovaA.h"
#include <iostream>


using namespace std;

void __stdcall GetName()
{
	cout << "Kuznetsova Alina";
}

void __stdcall GetGroup()
{
	cout << "\nGROUP - RI-541216" << endl;
}





