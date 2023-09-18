#include<stdio.h>
void main(void)
{
	int PanTA, PanTL, x1, y1, x2, y2;
	float px, py, pEA, pEL;

	scanf_s("%i", &PanTA);
	scanf_s("%i", &PanTL);
	scanf_s("%f", &px);
	scanf_s("%f", &py);
	scanf_s("%f", &pEA);
	scanf_s("%f", &pEL);

	x1 = PanTA * px;
	y1 = PanTL * py;
	x2 = (PanTA * pEA) + x1;
	y2 = (PanTL * pEL) + y1;

	printf("%i ", PanTA);
	printf("%i", PanTL);
	printf("%6.2f", px);
	printf("%6.2f", py);
	printf("%6.2f", pEA);
	printf("%6.2f", pEL);
	printf("%i ", x1);
	printf("%i ", y1);
	printf("%i ", x2);
	printf("%i", y2);
}