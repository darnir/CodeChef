#include<stdio.h>

int test();
int maintest();

/* Out the input till input val not equal to 42 */
int test()
{
    maintest();
    return 0;
}

int maintest()
{
    int val=0;
    while(scanf("%d",&val)>0 && val !=42)
    {
        printf("%d\n",val);
    }

    return 0;
}
