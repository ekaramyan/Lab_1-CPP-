#include <iostream>
#include <cstdio>
using namespace std;
void printArray(double* arr, size_t size)//Функция вывода массива 
{
	for (int i = 0; i < size; i++) {
		printf("%.2f\t", arr[i]);
	}
	cout << " " << endl << endl;
}
/*
Объявить массив из n=20 целых чисел, проинициализировать нулями. Функция
process_array() должна заполнить массив случайными числами от 1 до 10, вычислить
и вернуть наиболее часто встречающееся значение в массиве (если таких несколько,
вернуть наименьшее) и сформировать выходной массив из всех элементов, которые
встречаются как минимум 2 раза во входном массиве. Вывести на экран массивы.
*/
const size_t N = 20;//Задаем размер массива

double processArray(double a[], double b[], size_t n) {
	for (size_t i = 0; i < n; ++i) {//Заполнение массива случайными числами от 1 до 10.0
		a[i] = (double)(rand() % 10) + 1;
	}

	printArray(a, N);//Выводим девственный массив a

	//Находим максимальное по модулю число
	double max = 0;
	size_t pos = 0;
	for (size_t i = 0; i < n; ++i)
	{
		if (abs(a[i]) > max)
		{
			max = a[i];
			pos = i;
		}
	}
	int maxcount(1), nn(-1);
	//перебираем все элементы массива
	for (int i = 0; i < N; i++)
	{
		int count(0);
		//перебираем все элементы от i до конца
		for (int j = i; j < N; j++)
			//если элемент i совпадает с одним из последующих (j), то увеличиваем число
			if (a[i] == a[j])
				count++;

		//если число больше ранее сохраненного - перезаписываем
		if (maxcount < count)
		{
			maxcount = count;
			nn = i;
		}
	}

	//выводим
	if (nn > -1)
		//значение
		cout << endl << a[nn] << endl;
	else
		//или то, что повторяющихся элементов нет
		cout << endl << "No repeating elements" << endl;

	return 0;
}

int main()
{
	double a[N] = { 0.0 };//Создаем входной массив из N элементов
	double b[N] = { 0.0 };//Создаем выходной массив из N элементов
	srand(0);//Инициализируем рандомайзер 

	processArray(a, b, N);
}