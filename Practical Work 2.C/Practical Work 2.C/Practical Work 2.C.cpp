#include <iostream>
#include <math.h>
#include <stdio.h>

int main()
{
	double a = 1, S = 0, x;
	int n = 0, N;

	printf("Enter x and N: \t");
	
	scanf_s("%lf", &x);
	scanf_s("%u", &N);

	double y = sinh(x);
	while (n < N)
	{
		S += a;
		double q = sqrt(pow(2 * x, 2 * n)) / (2 & (n + 1) * (2 * n + 1));
		a *= q;
		n++;
	}
	printf("y = %.5f\n ", y);
	printf("S = %.5f\n ", S);
	return 0;
}