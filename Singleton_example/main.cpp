
#include "Singleton.h"

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	cout << Singleton::Instance().getX() << endl;
	_getch();
	return 0;
}