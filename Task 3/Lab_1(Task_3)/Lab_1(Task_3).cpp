#include <iostream>
#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)
/*Написать свой аналог стандартной функции обработки строк из файла cstring, в
соответствии с вариантом. В функции main на тестовых данных продемонстрировать
результат работы как стандартной функции, так и собственной версии. Ввод-вывод
данных организовать средствами cstdio.
 Функция strncat.
Формат char* strncat(char* dest, const char* src, size_t maxlen).
Функция приписывает maxlen символов строки src к строке dest.*/

int main(void)
{
	// Массивы в которые добавляется строка
	char src1[10] = "000";
	char src2[10] = "000";
	// Добавляемая строка
	char app[10] = "12345";

	// Вывод добавляемой строки
	printf("app: % s\n", app);

	// Добавление строки app в строку src1, но не более трех символов
	strncat(src1, app, 3);
	// Вывод результата
	printf("src1: % s\n", src1);

	// Добавление строки app в строку src2, но не более семи символов
	strncat(src2, app, 7);
	// Вывод результата
	printf("src2: % s\n", src2);

	return 0;
}
char* strcat(char* dest, char* src, size_t maxlen)
{
	size_t i = 0;
	for (; dest[i]; i++)
		;
	for (size_t j = 0; src[j] && j < maxlen; j++)
		dest[i++] = src[j];
	dest[i] = 0;
	return dest;
}
