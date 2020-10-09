// Lab_1(++)(Task_2).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/*
Преобразование: 2D → 1D. Двумерный массив 5х3 вещественных чисел необходимо
выложить в один ряд по элементам слева направо и снизу вверх.
Инициализация: заполнить массив числами x[i][j] = sin(i–j) + cos(i+j).
Вывод на экран: на каждый элемент массива отвести 14 позиций.
*/

#include <iostream>
#include <ctime>
#include <iomanip>
#include<Math.h>

using namespace std;
int main(int argc, char* argv[])
{
	// Создаем двумерный массив и память под него
	int n = 5;
	int m = 3;
	double** array = new double* [n];
	for (int i = 0; i < n; i++)
		array[i] = new double[m];
	cout << "Array:\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			array[i][j] = (sin(i - j) + cos(i + j));
			cout << setw(4) << array[i][j];
		}
		cout << endl;
	}

	// переводим его в одномерный
	double* arr_1d = new double[n * m];
	int k = 0;
	cout << endl << "1D Array: ";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr_1d[k] = array[i][j];
			cout << arr_1d[k] << " ";
			k++;
		}
	}
	return 0;
}
