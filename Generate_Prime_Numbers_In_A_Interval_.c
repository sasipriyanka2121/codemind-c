#include<stdio.h>
int main(){
    int number1,number2,i,j,flag;
    
    
    scanf("%d %d",&number1,&number2);
    
    
    for(i=number1+1;i<number2;i++){
        
        
        flag=0;
        for(j=2;j<=i/2;++j){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0)
        printf("%d
",i);
    }
    return 0;
}