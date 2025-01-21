#pragma once
#include <iostream>
using namespace std;

//function's overload

int Sum(int a, int b, int c)
{
	return a + b + c;
}

int Sum(int a, int b)
{
	a++;
	cout << "Test" << endl;
	return a + b;
}

double Sum(double a, double b)
{
	return a + b;
}


void run()
{
	cout << Sum(1, 2) << endl;
	cout << Sum(4.1, 2.2) << endl;
	cout << Sum(1, 2, 3) << endl;
}
