#include<stdio.h>
int main()
{
    int x, y;
    float z;
    scanf("%d%d", &x, &y);
    if(x==1){
        z=4;
    }
    else if(x==2){
        z=4.50;
    }
    else if(x==3){
        z=5;
    }
     else if(x==4){
        z=2;
    }
     else if(x==5){
        z=1.50;
    }
    printf("Total: R$ %.2f\n", z*y);
    return 0;
}
