#include<stdio.h>
int main()
{
    int x, yr, mo, dy;
    scanf("%d", &x);
    yr = x/365;
    mo = x%365/30;
    dy = x%365%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", yr, mo, dy);
    return 0;
}
