#include<stdio.h>
int is_prime(int num)
{
    int i,p=0;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            p++;
        }
    }
    if(p==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,i,arr[100],k=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]<=k)
        {
            if(is_prime(arr[i]))
            {
                c++;
            }
        }
    }
    printf("%d",c);
}