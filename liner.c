#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    int i,n;
    printf("enter a number to find \n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        if(n==a[i])
        {
           return printf("\nnumber is found\n");
            
        }
    }    
             printf("\nnot found");
             return 0;
    
}