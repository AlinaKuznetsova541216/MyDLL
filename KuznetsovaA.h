#pragma once


#include <iostream>
#include <stdio.h>
#include <windows.h>
#define DLL_EXPORT extern "C" __declspec(dllexport)
DLL_EXPORT void __stdcall GetName();
DLL_EXPORT void __stdcall GetGroup();
DLL_EXPORT void __stdcall GetStudentID();

