#include<stdio.h>
int main()
{
    int n,scales[10],i,j,f=0,min=9999;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&scales[i]);
    }
    for(i=0;i<n;i++)
    {
        if(min>scales[i])
        {
            min = scales[i];
        }
    }
    for(i=min;i>=1;i--)
    {
        f=0;
        for(j=0;j<n;j++)
        {
            if(scales[j]%i!=0)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            printf("%d",i);
            break;
        }
    }
}