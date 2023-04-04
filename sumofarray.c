#include<stdio.h>
#include<conio.h>
void main()
{
    int a[]={1,2,3,4,5};
    int i,sum=0;
    for(i=0;i<=4;i++)
    {
        sum=sum+a[i];
    }
    printf("addition is %d",sum);
}