#include<stdio.h>
int main()
{
	int a, b;
	float x, y;
	scanf("%d%d%f", &a, &b, &x);
	y = b * x;
	printf("NUMBER = %d\n", a);
    printf("Salary = %.2f\n", y);
	return 0;
}
