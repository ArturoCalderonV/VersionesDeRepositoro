#include <stdio.h>
int main()
{

	float base, altura;

	float area;

	printf("Base: "); scanf_s("%f", &base);

	printf("Altura: "); scanf_s("%f", &altura);

	area = (base * altura) / 2.0;

	printf("Area: %10.2f", area);
}