#include <stdio.h>  
  
int main()  
{  
    int n,m=1;  
    scanf("%d",&n);  
  
   for(int i=n;i>=1;i--)  
   {  
       for(int j=1;j<m;j++)  
       {  
           printf(" ");  
       }  
       for(int k=1;k<=2*i-1;k++)  
       {  
           printf("*");  
       }  
       m++;  
     
      printf("\n");  
    }
    m=n;  
   for(int i=2;i<=n;i++)  
   {  
       for(int j=2;j<=m-1;j++)  
       {  
           printf(" ");  
       }  
       for(int k=1;k<=2*i-1;k++)  
       {  
         printf("*");  
       }  
       m--;  
     
      printf("\n");  
    }  
    return 0;  
}   