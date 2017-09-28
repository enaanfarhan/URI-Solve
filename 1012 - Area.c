#include<stdio.h>
int main()
{
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    printf("TRIANGULO: %.3f\n", ((1.0/2)*a*c));
    printf("CIRCULO: %.3f\n", (3.14159 * c*c));
    printf("TRAPEZIO: %.3f\n", (((a+b)/2)*c));
    printf("QUADRADO: %.3f\n", (b*b));
    printf("RETANGULO: %.3f\n", (a*b));
    return 0;
}

printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",
        ((1.0 / 2) * A * C),   (3.14159 * C * C), (((A + B) / 2) * C), (B * B), (A * B));

}
