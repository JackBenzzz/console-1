#pragma once
#include <iostream>
using namespace std;

//function's templates

template <typename T1, typename T2> //��� ����� ����� ���������� ������� ��� ������, ������ ��� �� ���������� ������� ��� �2, � �������� b ��� ��� ������ �������
T2 Sum(T1 a, T2 b)
{
	return a + b;
}

void run()
{
	cout << Sum(5, 10.4) << endl;
}

//��������� ������� ����� void

/*
template <typename T1, typename T2>
void Sum(T1 a, T2 b)
{
	cout << a << endl;
	cout << b << endl;
}

void run()
{
	Sum(8, "test");
}

*/