#pragma once
#include "pch.h"

namespace getprot 
{
	LPVOID GetMainModuleBaseFast_x86();
	LPVOID GetMainModuleBaseSecure();
	LPVOID GetTEB();
	LPVOID GetPPEB();
	LPVOID GetModuleFunc(LPCWSTR sModuleName, LPCSTR sFuncName);
}