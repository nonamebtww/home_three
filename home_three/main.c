#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "RUS");

	double U, R, I;

	printf("Введите напряжение (U): ");
	scanf_s("%lf", &U);

	printf("Введите сопротивление (R): ");
	scanf_s("%lf", &R);

	I = U / R;

	printf("Напряжение равно (I): %lf Вт. / %lf Ом = %lf А", U, R, I);
}