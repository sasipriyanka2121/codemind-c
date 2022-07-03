#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,l,c=0;
    scanf("%[^
]s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]==' ')
        {
            c++;
        }
    }
    printf("%d",c+1);
}