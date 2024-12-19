#pragma once
#include <iostream>
#include <ctime>
using namespace std;

//rand/srand
//�������: ������� ������ �� 10 �����, �������� ����� �� 0 �� 20, ����� �� ������ ����������� � ����� � ������� ����� ��������� �������� � ������� ��� �� �����

void run()
{
	setlocale(LC_ALL, "Rus");

	srand(time(NULL)); /* ���������� ������� ����� � ��������, ������� � 1 ������ 1970 ����(��� ���������� UNIX - �����).
						��� �������� ������������ ��� ���������� "seed", ����� ��������� ����� ������ ��� ���������� � ����� ������������������.*/
	int const SIZE = 10;
	int arr[SIZE];

	bool alreadyThere;

	for (int i = 0; i < SIZE; )
	{
		alreadyThere = false;
		int newRandomValue = rand() % 20;

		for (int j = 0; j < i; j++)

		{
			if (arr[j] == newRandomValue)
			{
				alreadyThere = true;
				break;
			}
		}

		if (!alreadyThere)
		{
			arr[i] = newRandomValue;
			i++;
		}


	}



	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}


	int min = arr[0]; // ����� ������ ������� �����������

	for (int i = 1; i < SIZE; i++)	// ���� �� ������� ��������
	{ 
		if (arr[i] < min) {          // ���� ������� ������� ������
			min = arr[i];            // ��������� �������� ������������
		}
	}

	cout << "���������� �����: " << min << endl; // ������� �������


}
