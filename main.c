#include <stdio.h>
#include <math.h>

int main ()
{
	printf("Input a, b, c:\n");
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	float d;
	d = b * b - 4 * a * c;
	float x1, x2;
	if (!a)
	{
		printf("\na = 0\n");
		return 1;
	}
	if (d > 0)
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		printf("\nx1 = %.3f, x2 = %.3f\n",x1, x2);
		return 0;
	}
	if (d == 0)
	{
		x1 = x2 = -b / (2 * a);
		printf("x1 = x2 = %.3f\n", x1);
		return 0;
	}
	{
		printf("\nD < 0\n");
		return 1;
	}
}