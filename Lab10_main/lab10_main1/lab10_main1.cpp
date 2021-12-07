﻿#include <iostream>
#include <time.h>
#include <iomanip>
#include <cstdlib>
using namespace std;

double fun(int arr[], const int size, int row)
{
	setlocale(0, "rus");
	const int N = 100, M = 100;
	int arr2[N][M];
	int length = sqrt(row);
	//с 2-мерного перевод в одномерный
	for (int i = 0, k = 0; i < length; i++)
	{
		for (int j = 0; j < length; j++)
		{
			arr2[i][j] = arr[k];
			k++;
		}
	}

	//распечатка 2-мерного
	cout << endl << "Второй массив" << endl;
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length; j++)
		{

			cout << setw(4) << arr2[i][j];
		}
		cout << endl;
	}
	cout << endl; 
	int f;
	double result;
	for (int i = 0; i < N; i++)
	{
		f = 4;
		for (int j = 0; j < M; j++)
		{
			arr2[i][j] = arr2[i][j] * f;
			cout << endl << "Второй переделанный массив" << endl;
			for (int i = 0; i < length; i++)
			{
				for (int j = 0; j < length; j++)
				{

					cout << setw(4) <<arr2[i][j];
				}
				cout << endl;
			}
			cout << endl;
		}
	}
	return 0;
}

int main()
{
	setlocale(0, "rus");
	srand(time(NULL));
	int const SIZE = 100;
	int arr[SIZE];
	int row;
	double result;

	row = rand() % 4 + 2;
	row = row * row;

	for (int i = 0; i < row; i++) //задаеться первый массив
	{
		arr[i] = rand() % 10;
	}

	cout << "Первый массив" << endl; //распечатка
	for (int i = 0; i < row; i++)
	{
		cout << setw(4) << arr[i];
	}

	cout << endl;
	result = fun(arr, SIZE, row);

	cout << "Первый переделанный массив" << endl;

	for (int i = 0; i < row; i++)
	{
		cout << setw(4) << arr[i];
	}
	cout << endl << endl << endl;
}