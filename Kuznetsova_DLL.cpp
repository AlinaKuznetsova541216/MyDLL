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
	cout << "Alina ";
}

void __stdcall GetSurname()
{
	cout << "Kuznetsova ";
}

void __stdcall GetGroup()
{
	cout << "\nGROUP - RI-541216" << endl;
}

void __stdcall GetStudentID()
{
	cout << "\nStudent ID is 940665455502" << endl;

}

void __stdcall GetSpeciality()
{
	cout << "\nInformation Security of TCS" << endl;
}

void __stdcall GetPeriod()
{
	cout << "\nThe year of start education is 2014";
	cout << "\nThe year of end education is 2020" << endl;
}



