#include<math.h>
#include<stdio.h>

void main()
{
  float a, b, c, x1, x2;

	printf("A: "); scanf_s("%f", &a); 

	printf("B: "); scanf_s("%f", &b); 

	printf("C: "); scanf_s("%f", &c);  
	
	x1 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
	x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

	printf("Raiz 1 %f\n Raiz 2 %f" ,x1,x2);
}