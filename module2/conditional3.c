#include<stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk>= 5000)
    {
        printf("cox's bazar jabo");
        if (tk>= 10000)
        {
            printf("saint martin jabo");
        }
        else
        {
            printf("fire asbo");
        }
    }
    else 
    {
        printf("kuthao jabo na");
    }
    return 0;
}