#pragma once
#include <iostream>

__declspec(dllexport)

class Leaver
{
public:
	std::string name;
	__declspec(dllexport) void leave(std::string name);
};