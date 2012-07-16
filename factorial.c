#include <stdio.h>

int factorial();
int calc(int);
int maint();

int factorial()
{
    maint();
    return 0;
}

int maint()
{
    int nos;
    scanf("%d",&nos);
    int inp[nos];
    int val;
    for(int i=0;i<nos;i++)
    {
        scanf("%d",&val);
        inp[i] = val;
    }
    for(int j=0;j<nos;j++)
    {
        val = calc(inp[j]);
        printf("%d\n",val);
    }
    return 0;
}

int  calc(int num)
{
    int den = 5;
    int n=0;
    while (den < num)
    {
        n += num/den;
        den*=5;
    }
    return n;
}

