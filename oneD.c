#include<stdio.h>
#include<conio.h>
void  oneD(int a,int b,int index){
 int address=a+(b * index);
 printf("address is %d ",address);

}
void main(){
int a,w,i;
clrscr();
printf("enter the base address");
scanf("%d",&a);
printf("enter the byte size");
scanf("%d",&w);
printf("enter the index number");
scanf("%d",&i);
oneD(a,w,i);
 getch();
 }
