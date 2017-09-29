#include<stdio.h>
#include<math.h>
int main()
{
    int x, sec, min, hr;
    scanf("%d", &x);
    hr = x/3600;
    min = x%3600/60;
    sec = x%60;

    printf("%d:%d:%d\n", hr, min, sec);
    return 0;
}
