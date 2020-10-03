#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <map>
double processArray(double array[20], const int n, int a1, int d);
char* strncat(char* dest, const char* src, size_t maxlen);

double taskOne();
double taskTwo();
double taskThree();

using namespace std;
//4ВАРИАНТ
int main()
{
	//    taskOne();
	//    taskTwo();
	//    taskThree();
	return 0;
#pragma region Task One
	/*Объявить массив из n=20 целых чисел, проинициализировать нулями. Функция
	process_array() должна заполнить массив случайными числами от 1 до 10, вычислить
	и вернуть наиболее часто встречающееся значение в массиве (если таких несколько,
	вернуть наименьшее) и сформировать выходной массив из всех элементов, которые
	встречаются как минимум 2 раза во входном массиве. Вывести на экран массивы.*/
	const size_t N = 20;
	double a[N] = { 0.0 }; // создаем массив и инициализируем нулями
	bool b[N] = { false }; // булев массив - "false-ми"
	// инициализация генератора случайных чисел
	srand(0);
	// подсчет среднего значения в массиве а, изменение массива b
	double result = processArray(a, N, b);
	// вывод массивов на экран
	printArray(a, N);
	printBoolArray(b, N);
	// ...и среднего значения элементов массива а
	printf("Average: %g\n\n", result);
	return 0;
}
/* В функции processArray() заполняем массив случайными числами, считаем среднее и
формируем массив flags булевых значений.Обратите внимание на сигнатуру : запись
double arr[] эквивалентна записи double* arr(т.е.передаче параметра по указателю).*/
double processArray(double arr[], size_t n, bool flags[])
{
	for (size_t i = 0; i < n; ++i) // заполнение массива случ. числами [-15.0..15.0]
	{
		arr[i] = (double)(rand() % 30) - 15.0;
	}
	double average = 0.0;
	for (size_t i = 0; i < n; ++i) // подсчет среднего значения элементов
	{
		average += arr[i];
	} average /= n;
	for (size_t i = 0; i < n; ++i) // формирование булевого массива (по заданию)
	{
		flags[i] = arr[i] > average;
	}
	return average; // возвращаем среднее
}
//Пример функции вывода на экран всех значений булевого массива :
void printBoolArray(bool* arr, size_t n)
{
	for (size_t i = 0; i < n; ++i)
	{
		(arr[i]) ? printf("T ") : printf("F ");
	}
	printf("\n");
}
void prinArray(int* arr, size_t n)
{
	for (size_t i = 0; i < n; ++i)
	{
		(arr[i]) ? printf("T ") : printf("F ");
	}
	printf("\n");
}

	/*В функции processArray() заполняем массив случайными числами, считаем среднее и
	формируем массив flags булевых значений.Обратите внимание на сигнатуру : запись
	double arr[] эквивалентна записи double* arr(т.е.передаче параметра по указателю).*/

	double processArray(double arr[], size_t n, bool flags[])
	{
		for (size_t i = 0; i < n; ++i) // заполнение массива случ. числами [-15.0..15.0]
		{
			arr[i] = (double)(rand() % 30) - 15.0;
		}
		double average = 0.0;
		for (size_t i = 0; i < n; ++i) // подсчет среднего значения элементов
		{
			average += arr[i];
		} average /= n;
		for (size_t i = 0; i < n; ++i) // формирование булевого массива (по заданию)
		{
			flags[i] = arr[i] > average;
		}
		return average; // возвращаем среднее
	}
	//Пример функции вывода на экран всех значений булевого массива :
	void printBoolArray(bool* arr, size_t n)
	{
		for (size_t i = 0; i < n; ++i)
		{
			(arr[i]) ? printf("T ") : printf("F ");
		}
		printf("\n");
	}
