
#include<stdio.h>
int main()
{
    int n,a[100],i,v=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        if(a[i]%2!=0)
        {
            v=a[i];
            break;
        }
    }
    printf("%d",v);
}