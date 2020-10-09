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
using namespace std;
int main(int argc, char* argv[])
{
	// Создаем двумерный массив и память под него
	cout << "Enter strings count";
	int n, m;
	cin >> n; cout << "Enter colums count"; cin >> m;
	double** mass = new double* [n];
	for (int i = 0; i < n; i++)
		mass[i] = new double[m];
	cout << "Array:\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			mass[i][j] = 1 + rand() % 100;
			cout << setw(4) << mass[i][j];
		}
		cout << endl;
	}

	// переводим его в одномерный
	double* mass_odnom = new double[n * m];
	int k = 0;
	cout << endl << "1D Array: ";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			mass_odnom[k] = mass[i][j];
			cout << mass_odnom[k] << " ";
			k++;
		}
	}
	return 0;
}
