#include<stdio.h>
int main()
{
    int a = 1000000000;
    long long int lla = 10000000000;
    float f = 10.1234567; 
    double df = 10.123456789012345;
    printf("%d %lld %f %0.15lf", a, lla, f, df );
    return 0;
}
// int takes 9 digit.
// long long int takes 18 digit.
// float takes 8
// double/ long float takes 16 digit