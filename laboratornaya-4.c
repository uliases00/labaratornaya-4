#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>

void Task1()
{
	char c = "!";
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;

	printf("---------ЗАДАНИЕ 1---------\n");
	printf("ИСХОДНЫЕ ЗНАЧЕНИЯ:\n");
	printf("char c = %c\n", c);
	printf("int a = %d\n", i);
	printf("float f = %f\n", f);
	printf("double d = %le\n", d);

	printf("\nВведите: символ\n");
	scanf("%c", &c);

	printf("\nВведите: целое число\n");
	scanf("%i", &i);

	printf("\nВведите: вещественное число float\n");
	scanf("%f", &f);

	printf("\nВведите: вещественное число double:\n");
	scanf("%d", &d);

	printf("\nНОВЫЕ ЗНАЧЕНИЯ: %c, %i, %f, %d\n", c, i, f, d);

	printf("\nЗАДАНИЕ 1А:\n");
	int a = (int)f;
	float b = f - a;
	printf("\nЦелая часть: %d\n Дробная часть: %f\n", a, b);

	printf("\nЗАДАНИЕ 1Б:\n");
	printf("Символ '%c'\n Десятичный код = %d\n Шестнадцатеричный код = %x\n", c, c, c);

	printf("\nЗАДАНИЕ 1В:\n");
	printf("1/%d=%f\n", i, 1.0/f);
}

void Task2()
{
	printf("---------ЗАДАНИЕ 2---------\n");

	int a = 11;
	int b = 3;
	int x; //объявление целой переменной
	float y; //объявление вещественной переменной
	double z; //объявление вещественной переменной двойной точности

	x = a / b;
	y = a / b; //выполняется целочисленное / и результат преобразуется к float
	z = a / b; //выполняется целочисленное / и результат преобразуется к double

	printf("x = a / b = %d\n", x);
	printf("y = a / b = %f\n", y);
	printf("z = a / b = %lf\n", z);

	float f1 = (float)a / b; //приводим а к float и делим на b, получим вещественный результат
	double d1 = (double)a / b;

	printf("Явное преобразование:\n");
	printf("(float)a / b = %f\n", f1);
	printf("(double)a / b = %lf\n", d1);

	float f2 = (float)(a / b);
	double d2 = (double)(a / b);

	printf("Со скобками:\n");
	printf("(float)(a / b) = %f\n", f2);
	printf("(double)(a / b) = %lf\n", d2);
}

void Task3()
{
	printf("---------ЗАДАНИЕ 3---------\n");
	int n;
	printf("Введите целое треззначное число:\n");
	scanf("%d", &n);

	int last = n % 10;
	int first = n / 100;
	int middle = (n / 10) % 10;
	int sum = first + middle + last;
	int reversed = last * 100 + middle * 10 + first;

	printf("Последняя цифра: %d\n", last);
	printf("Первая цифра: %d\n", first);
	printf("Сумма цифр: %d\n", sum);
	printf("Число наоборот: %d\n", reversed);
}

int main()
{
	setlocale(LC_CTYPE, ".UTF-8");
	
	Task1();
	Task2();
	Task3();
	
}