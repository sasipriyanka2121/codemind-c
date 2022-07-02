# include<stdio.h>
int main()
{
    int min,n,m,lcm,i;
    scanf("%d%d",&n,&m);
    min=m>n?n:m;
    for(i=min;;i+=min)
    {
        if(i%m==0&&i%n==0)
        {
            lcm=i;
            break;
        }
    }
    printf("%d",lcm);
    return 0;
}