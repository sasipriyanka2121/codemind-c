#include<stdio.h>
int main()
{
    int v,k=0,r;
    scanf("%d",&v);
    while(v)
    {
        r=v%10;
        k=k*10+r;
        v=v/10;
    }
    printf("%d",k);
    return 0;
}