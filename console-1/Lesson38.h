#pragma once
#include <iostream>
using namespace std;

//default arguments (options)

void foo(int a=7, int q = 5, double b = 0.5)
{
	for (int i = 0; i < a; i++)
	{
		cout << "#" << endl;
	}
		cout << q << endl;
}

void run()
{
	foo(3); //��� �� �������� �������� ��� q, �������� � ����, ��� ����� ������, ��� ������ q ���� ���������
	//��� ��������? ������ ��� ������ � q ��� �� �������� � ������� foo? //�����: ���, ��� ������ ������������� �������� ������� ���������
}
