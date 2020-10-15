#include <iostream>
#include <cstdio>
using namespace std;
/*
Объявить массив из n=20 целых чисел, проинициализировать нулями. Функция
process_array() должна заполнить массив случайными числами от 1 до 10, вычислить
и вернуть наиболее часто встречающееся значение в массиве (если таких несколько,
вернуть наименьшее) и сформировать выходной массив из всех элементов, которые
встречаются как минимум 2 раза во входном массиве. Вывести на экран массивы.

*/
void printArray(int* arr, size_t size)//Функция вывода массива 
{
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

const size_t N = 20;//Задаем размер массива

int processArray(int* a, int* b, size_t n) {
	int count = 0;
	int maxcount = 0;
	int number = 0;
	//перебираем все элементы массива
	for (int i = 0; i < N; i++)
	{
		count = 0;
		//перебираем все элементы от i до конца
		for (int j = i; j < N; j++) {
			if (a[i] == a[j])
				count++;
		}

		if (maxcount == count) {
			if (number > a[i]) {
				number = a[i];
			}
		}
		if (maxcount < count) {
			number = a[i];
			maxcount = count;
		}
	}
	for (int i = 0; i < N; i++) {
		b[a[i] - 1]++;
	}
	return number;
}

int main()
{
	int a[N] = { 2, 10, 3, 5, 8, 7, 3, 3, 7, 10, 5, 2, 4, 5, 4, 3, 2, 2, 5, 1 };//Создаем входной массив из N элементов
	int b[10] = { 0 };//Создаем выходной массив из 10 элементов
	processArray(a, b, 20);
	printf("\n");
	printArray(a, N);
	printf("\n");
	for (int i = 0; i < 10; i++) {
		if (b[i] >= 2)
			printf("%d ", i + 1);
	}
	return 0;
	//srand(0);//Инициализируем рандомайзер 
}