#include<stdio.h>

int mainhs08test(void);

int mainhs08test(void)
{
    float bal;
    int trans;
    scanf("%d %f",&trans,&bal);
    if (trans % 5 != 0)
    {
        printf("%.2f",bal);
    }
    else if(((bal - trans)-0.5) <= 0)
    {
        printf("%.2f",bal);
    }
    else
    {
        printf("%.2f",bal-trans-0.5);
    }
    return 0;
}
