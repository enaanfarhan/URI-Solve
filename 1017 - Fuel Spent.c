#include<stdio.h>
int main()
{
    int a, b;
    float fuel;
    scanf("%d%d", &a, &b);
    fuel = (a * b) / 12.0;
    printf("%.3f\n", fuel);
    return 0;
}
