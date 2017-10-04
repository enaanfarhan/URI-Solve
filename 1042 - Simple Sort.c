#include <stdio.h>

int main()
{
    int x, y, z, a, b, c, temp;
    scanf("%d%d%d", &x, &y, &z);
    a = x;
    b = y;
    c = z;
    if(a<b){
        temp = a;
        a = b;
        b = temp;
    }
    if(b<c){
        temp = b;
        b = c;
        c = temp;
    }
   if(a<b){
        temp = a;
        a = b;
        b = temp;
    }

    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", c, b, a, x, y, z);
    return 0;
}
