#include<stdio.h>
int main()
{
    int n,a,b,sum,r,s,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=0;
        scanf("%d",&a);
        b=a;
        while(a>0)
        {
            r=a%10;
            sum=sum*10+r;
            a=a/10;
        }
        if(sum==b)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}