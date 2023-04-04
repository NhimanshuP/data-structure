#include<stdio.h>
#include<conio.h>
void main()
{
    int a[]={15,2,3,4,5};
    int i,min;
min=a[0];
for(i=0;i<=4;i++)
{
    if(min>a[i]){
        min=a[i];
    }
}
printf("minimum value of array = %d",min);
}