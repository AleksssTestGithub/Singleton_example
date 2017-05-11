#include "Singleton.h"



int Singleton::getX()
{
	return x;
}

Singleton & Singleton::Instance()
{
	static Singleton s;
	return s;
}

Singleton::Singleton()
{
	x = 5;
}


Singleton::~Singleton()
{
}
