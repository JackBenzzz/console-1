#pragma once
#include <iostream>
using namespace std;

//Stack + Recursion

int Foo(int a)
{
	if (a < 1)
		return 0;

	a--;
	cout << a << endl;
	
	return Foo(a);
	

}

void run()
{
	Foo(5);
}