#include<stdio.h>
#include<math.h>
int main()
{
    float x1, x2, y1, y2, p1, p2, result;
    scanf("%f%f", &x1, &y1);
    scanf("%f%f", &x2, &y2);
    p1 = x2-x1;
    p2 = y2-y1;
    result = sqrt((p1*p1)+(p2*p2));
    printf("%.4f\n", result);
    return 0;
}
