#include<stdio.h>
int main()
{
    int a=200,b=100,c=50,d;
    d=(a>b&&a>c)?a:b>c?b:c;
    printf("%d",d);
    return 0;
}
