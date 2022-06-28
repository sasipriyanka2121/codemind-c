#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,arr[100],k,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++)
    {
        k=k+arr[i];
    }
      for(i=0;i<n;i++)
      {
          sum=sum+arr[i];
      }
      k=abs(sum-k*2);
      printf("%d",k);
}