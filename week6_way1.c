#include <stdio.h>
int main(){
    int n,x,i,j;
    scanf("%d",&n);
    int max = (2*n)-1;
    for(i=1;i<=max;++i){
        for(j=1;j<=max;++j){
            if(j<n){
                if(((i<=j)||(i>=max-(j-1)))){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            } 
            if(j==n){
                printf("*");
            }
            if(j>n){
                if(((i<=max-(j-1))||(i>=j))){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
return 0;
}