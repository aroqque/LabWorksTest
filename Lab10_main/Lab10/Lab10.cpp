// Lab10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
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

	//перевод в 1-мерный из 2-мерного
	/*for (int i = 0; i < length * length; i++)
	{
		for (int j = 0; j < length * length; j++)
		{
			arr[i * length + j] = arr2[i][j] + 1;
		}
		cout << setw(4) << arr[i];
		//return arr;
	}

	cout << endl; */
	//ЗАЛУПА ДЛЯ УМНОЖЕНИЯ 
	int f;
	int result;
	for (int i = 0; i < N; i++)
	{
		f = 4;
		for (int j = 0; j < M; j++)
		{
			arr2[i][j] = arr2[i][j] * f;

			return result = arr2[i][j];
			cout << endl << "Второй переделанный массив" << endl;
			for (int i = 0; i < length; i++)
			{
				for (int j = 0; j < length; j++)
				{

					cout << setw(4) << result;
				}
				cout << endl;
			}
			cout << endl;
		}
	}

	/*cout << endl << "Второй переделанный массив" << endl;
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length; j++)
		{

			cout << setw(4) << arr2[i][j];
		}
		cout << endl;
	}
	cout << endl;*/
	//распечатка 2-мерного переделаного
	/*cout << endl << "Второй переделанный массив" << endl;
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length; j++)
		{

			cout << setw(4) << z[HUI][ZALUPA];
		}
		cout << endl;
	}
	cout << endl;
	*/
}


int main()
{
	setlocale(0, "rus");
	srand(time(NULL));
	int const SIZE = 100;
	int arr[SIZE];
	int row;
	double result;

	row = rand() % 4+2;
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
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
