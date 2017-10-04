#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, area, per, s;
    scanf("%f%f%f", &a, &b, &c);
    per = a + b + c;
    if(a+b>c && b+c>a && a+c>b)
    {

        printf("Perimetro = %.1f\n", per);
    }
    else{
    s = per / 2;
    area = .5*(a+b)*c;
        printf("Area = %.1f\n", area);
    }
    return 0;
}

