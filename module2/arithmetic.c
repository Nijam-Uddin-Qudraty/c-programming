#include<stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    int c = 3;
    int sum = a+b;
    int mns = a-b;
    int mlt = a*b;
    int dvd = b/a;
    int mod = b%a;
    //for float value of division have to multiple any 1 int with 1.0
    float divd = b*1.0/c;
    printf("%d\n%d\n%d\n%d\n%d\n%f",sum,mns,mlt,dvd,mod,divd);
    return 0;
}