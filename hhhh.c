#include<stdio.h>
#include<stdlib.h>
/* -----defining structure for a node ----*/
typedef struct nodeType
{
int info;
struct nodeType *next;
}node;
/* --- function prototype ----*/
void createEmptyList(node **head);
void traverseInOrder1(node *head);
void treverseInReverseOreder2(node *head);
node *searchInUnshortidList(node *head, int item);
void auxilliarSearch(node *head, node **ploc,node **loc, int item);
void insertAtBiginning(node **head, int item);
void insertAfterElement(node *head, int item, int after);
void insertAtEnd(node **head, int item);
void deleteFromBeginning(node **head);
void deleteFromEnd(node **head);
void deleteAfterElement(node *head,int after);
void reverseList(node **head);
void deleteList(node **head);
void main()
{
node *head;
int choice, element,after;
createEmptyList(&head);
while(1)
{
printf("operation available\n");
printf("++++++++++++++++++++\n");
printf(" 1. insert at bigning \n");
printf("operation available");
printf("Enter your choice (1-10): ");
scanf("%d", &choice);
switch (choice)
{
case 1: printf("\n enter element :");
scanf("%d", &element);
insertAtBeginning(&head, element);
break;
case 2: printf("\n enter element");
scanf("%d",&element);
insertAtEnd(&head, element);
break;
case 3: printf("\n Enter element  ");
scanf("%d", &after);
insertAfterElement(head, element, after);
break;
case 4:
if (head==NULL)
printf("'\n List is empty");
else traverseInOrder(head);
printf("\n press any kye to continue ");
getch();
break;
case 6:
deleteFromBeginning(&head);
break;
case 7:
deleteFromEnd(&head);
break;





