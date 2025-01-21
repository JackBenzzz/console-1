#pragma once
#include <iostream>
using namespace std;

//key word inline, embedded function

inline int Sum(int a, int b)
{
	return a + b;
}

void run()
{
	cout << Sum(5, 6) << endl;
}
