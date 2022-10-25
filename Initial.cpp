#include "Initial.h"

void Leaver::leave(std::string name)
{
	this->name = name;
	std::cout << "До свидания, " << name << " !" << std::endl;
}