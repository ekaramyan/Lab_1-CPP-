#include <iostream>
#include <cmath>
double processArray(double array[15], const int n, int a1, int d);
char* strncat(char* dest, const char* src, size_t maxlen);

double taskOne();
double taskTwo();
double taskThree();

using namespace std;

int main()
{
		//    taskOne();
		//    taskTwo();
		//    taskThree();
		return 0;
	}

#pragma region Task One
	/*Объявить массив из n=15 целых чисел, проинициализируйте нулями. Функция
	processArray() должна заполнить массив членами арифметической прогрессии с
	начальным элементом a1 и шагом d (ввести с клавиатуры), подсчитать и вернуть cnt –
	количество всех двузначных элементов массива, а также сформировать выходной
	массив, который содержит все элементы исходного, кроме тех, сумма цифр которых
	равна 10. Вывести на экран массивы.*/

double taskOne() {
	const int n = 15;
	double a[n] = { 0.0 };
	srand(0);
	int a1, d;
	printf("a1: ");
	scanf("%d", &a1);
	printf("d: ");
	scanf("%d", &d);
	double result = processArray(a, n, a1, d);
	return result;
}
double processArray(double array[], int n, int a1, int d) {
	int cnt = 0;
	--n;
	int smallerArrayLength = 0;
	printf("first array:\n");
	for (int i = 0; i <= n; ++i) {
		array[i] = a1 + d * i;
		printf("%g ", array[i]);
		if (array[i] > 9 && array[i] < 100)
			++cnt;
		int num = (fmod(array[i], 10) + array[i] / 10);
		if (num != 10)
			++smallerArrayLength;
	}
	printf("\ncnt: %i\n", cnt);
	printf("second array:\n");
	int smallerArray[SmallerArrayLength];
	for (int i = 0, j = 0; i <= n; ++i) {
		int num = (fmod(array[i], 10) + array[i] / 10);
		if (num != 10) {
			smallerArray[j] = array[i];
			printf("%i ", smallerArray[j]);
			++j;
		}
	}
	printf("\n%s\n", "end");
}
#pragma endregion
#pragma region Task Two
/*Преобразование: 2D → 1D. Двумерный массив 4х4 вещественных чисел необходимо
        выложить в один ряд по элементам слева направо и снизу вверх.
Инициализация: заполнить массив числами x[i][j] = √(i + j + 1).
Вывод на экран: каждый элемент одномерного массива вывести с точностью четыре
знака после запятой; каждый элемент двумерного массива – с точностью два знака.*/
const int arr_size = 4;
double arrayOfDouble[arr_size][arr_size];
double taskTwo() {
	printf("[");
	for (int i = 0; i < arr_size; i++) {
		for (int j = 0; j < arr_size; j++) {
			arrayOfDouble[i][j] = sqrt(i + j + 1);
			printf(" %.3g", arrayOfDouble[i][j]);
		}
		if (i != arr_size - 1)
			printf("\n");
	}
	printf(" ]");
	printf("\n=>");
	printf("\n[");
	for (int i = arr_size - 1; i >= 0; i--) {
		for (int j = 0; j < arr_size; j++) {
			printf(" %.5g", arrayOfDouble[i][j]);
		}
	}
	printf("]");
	return 0;
}


#pragma endregion