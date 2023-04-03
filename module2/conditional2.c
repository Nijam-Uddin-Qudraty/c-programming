#include<stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if(tk >= 100)
    {
        printf("burger khabo");
    
    }
    else if (tk >= 50)
    {
        printf("fuchka khabo");
    }
    else if (tk >= 20 )
    {
        printf("ice cream khabo");
    }
    else
    {
        printf("kichu kabo na");
    }
    return 0;

}