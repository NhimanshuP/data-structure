

//*****************************************
********************************//
//*********************	SINGLELINEARLINKEDLIST	***********************//
//*****************************************
********************************//

#include<stdio.h>
#include<alloc.h>
#include<conio.h>
#include<process.h>

//*********************	DECLARATIONOFSTRUCTURE	************************//
//*****************************************
********************************//

typedefstructsimplelink
{
intdata;
structsimplelink*next;
}node;

//*********************	FUNOFCREATEFIRSTNODE	************************//
//*****************************************
********************************//

node*create(node*p)
{
p=(node*)malloc(sizeof(node));
 


{
inta;
printf("\n\n");node*brr[25];intarr[25];
a=O;
while(p!=NULL)
{
//printf("\n\n[%d,%u]-->",p->data,p->next);arr[a]=p->data;
brr[a]=p->next;p=p->next;
a++;
}
//printf("NULL");
for(inti=(a-l);i>=O;i--)
printf("[%d,%u]<--",arr[i],brr[i]);printf("HEAD");
printf("\n\n\npressanykeyto
conti.nue..........") ;getch();
}

//*********************	FUNOFINSERTATBEGINING	***********************//
//*****************************************
********************************//

node*insert_begin(node*p)
{
node*temp;
 


temp=(node*)malloc(sizeof(node));printf("\nEntertheinserteddata:");scanf("%d",&temp->data);
temp->next=p;p=temp;
return(p);
}

//***********************	FUNOFINSERT ATEND	**************************//
//*****************************************
********************************//

node*insertend(node*p)
{
node*temp,*q;q=p;
temp=(node*)malloc(sizeof(node));printf("\nEntertheinserteddata:");scanf("%d",&temp->data);
while(p->next!=NULL)
{
p=p->next;
}
p->next=temp;
temp->next=(node*)NULL;return(q);
}

//********************	FUNOFINSERTAFTERELEMENT	**********************//
 


//*****************************************
********************************//

node*insertafter(node*p)
{
node*temp,*q;intx;
q=p;
printf("\nEnterthedata(afterwhichyouenterdata):");
scanf("%d",&x);while(p->data!=x)
{
p=p->next;
}
temp=(node*)malloc(sizeof(node));printf("\nEntertheinserteddata:");scanf("%d",&temp->data);
temp->next=p->next;p->next=temp;
return(q);
}

//********************	FUNOFCOUNTTHE
NO.OFNODES	********************//
//*****************************************
********************************//

intcount(node*p)
{
inti=O;
 


while(p!=NULL)
{
p=p->next;i++;
}
return(i);
}

//*****************		FUNOFINSERTATSPECIFICPOSITION	******************//
//*****************************************
********************************//

node*insertatspe_pos(node*p)
{
node*temp,*q,*r; intx,a,i=l; a=count(p);
q=p;
printf("\nEntertheposition(atwhichyouwanttoenterdata):");
scanf("%d",&x); if(x>(a+l))
{
printf("Notabletoinsertnodeatsuchposition	:");
getch();
}
else
{
if(x==l)
 
ternp=(node*)rnalloc(sizeof(node)); printf("\nEntertheinserteddata:");scanf("%d",&temp->data);
ternp->next=p;q=ternp;
}
else
{
while(i!=x)
{
r=p;
p=p->next; i++;
}
ternp=(node*)rnalloc(sizeof(node));printf("\nEntertheinserteddata:");scanf("%d",&temp->data);
ternp->next=p;r->next=temp;
}
}
return(q);
}

//**********************	FUNOFDELETE LASTNODE	************************//
//*****************************************
********************************//node*delend(node*p)
 
node*q,*r;r=p;
q=p;
if(p->next==NULL)
{
r=(node*)NULL;
}
else
{
while(p->next!=NULL)
{
q=p;
p=p->next;
}
q->next=(node*)NULL;
}
free(p);return(r);
}

//*******************	FUNOFDELETESPECIFICELEMENT	********************//
//*****************************************
********************************//


node*delspeci	ele(node	*p)
{		
node*q,*r;		
intx;q=p;		
 


intx,a,i=l;	
a=count(p);			
q=p;			
printf("\nEnter	theposition(at	which	you
wanttoremovedata):");scanf("%d",&x);
if(x>(a))
{
printf("Notabletoremovenodeatsuchposition	:");
getch();
}
else
{
if(x==l)
{
q=q->next;free(p);
}
else
{
while(i!=x)
{
r=p;
p=p->next;i++;
}
r->next=p->next;free(p);
}
}


return(q);
}

//**********************	FUNOFREVERSE THELIST	************************//
//*****************************************
********************************//

node*reverse(node*p)
{
node*q,*r;
q=(node*)NULL;while(p!=NULL)
{
r=q;q=p;
p=p->next;
q->next=r;
}
return(q);

}

//*************************	FUNOFMAINSCREEN	**************************//
//*****************************************
********************************//

voidscreen(node*head)
{
clrscr();
 


printf("\n---------------------------------

----");
switch(ch)
{
case0:
 

case1:
 
exit(O);

head=create(head);
 
II	display(head);
break;
 
case2:


case3:
 

head=insert-break;
 

begin(head);
 


case4:


case5:


case6:


case7:


case8:
 
head=insertend(head);break;

head=insertafter(head);break;

head=insertatspe-pos(head);break;

head=delend(head);break;

head=delbegin(head);break;

head=deleteafter(head);
 


 

case9:
 
break;

head=delspeciele(head);break;
 
case10:
head=deleteatspe_pos(head);break;
case11:
display(head);break;
case12:
revdisplay(head); break;
case13:
 


%d",a);
 
a=count(head);
printf("Theno.ofnodeinlist-:

printf("\n\n\npressanykeyto
 
conti.nue..........") ;
getch();break;
case14:
head=reverse(head);break;
default:
printf("\n\n\nPleaseenterthe
 
ri.ght


}
 
ch01.ce.......");
getch();break;
 
screen(head);
 


}

//************************	DECLARATIONOFMAIN	**************************//
//*****************************************
********************************//

voidmain()
{
clrscr();node*head;
//inta,ch;  head=(node*)NULL;screen(head);getche();
}
 


printf("Enterthedata:");scanf("%d",&p->data);
p->next=(node*)NULL;return(p);
}

//*********************	FUNOFTRAVERSEINORDER	************************//
//*****************************************
********************************//

voiddisplay(node*p)
{
printf("\n\n");while(p!=NULL)
{
printf("[%d,%u]-->",p->data,p->next); p=p->next;
}
printf("NULL");
printf("\n\n\npressanykeyto
 
conti'
 
nue..........")  ;
 
getch();
}

//****************	FUNOFTRAVERSEINREVERSEORDER	********************//
//*****************************************
********************************//voidrevdisplay(node*p)
 


 
intch,a;printf("\t\t\tLIST");
 

SINGLELINEARLINKED
 
printf("\n\t\t\t***************************
********");
printf("\n\n	OPTIONSARE--:");
pr	ntf("\n,..,,,..,,,..,,,..,,"',..,,,..,,,..,,,..,,,..,,"'"',..,,,..,,"'"'"'");
printf("\n\n0-Exit");
printf("\n\n1-Createfirstnode");printf("\n\n2-Insertatbegining");printf("\n3-Insertatend");
printf("\n4-Insertafterelement");
printf("\n5-Insertatspecificposition");printf("\n\n6-Deleteatend");
printf("\n7-Deleteatbegining");printf("\n8-Deleteafterelement");printf("\n9-Deletespecificelement");
printf("\nlO-Deleteelementfromspecific position");
printf("\n\nll-Traverseinorder(Display)");
printf("\n12-Traverseinreverseorder(Display)");
printf("\n\n13-Countno.ofnode");printf("\n\n14-Reversedlinkedlist");
printf("\n---------------------------------

----");
printf("\n\nEnterthechoice:");
//printf("\n");
scanf("%d",&ch);
 


r=q;
printf("\nEnterthe	
data	
to	
remove:");
scanf("%d",&x);while(q->data!=x)			
{			
r=q;			
q=q->next;
}			
if(q==r)			
p=p->next;else			
r->next=q->next;free(q);
return(p);			
}			

//**********************	FUNOFDELETEFIRSTNODE	***********************//
//*****************************************
********************************//

node*delbegin(node*p)
{
node*q; q=p;
p=p->next;free(q);return(p);
}
 


//******************	FUNOFDELETENODEAFTERELEMENT	*******************//
//*****************************************
********************************//

node*deleteafter(node*p)
{
node*temp,*q;intx;
q=p;
printf("\nEnterthedata(afterwhichyouwanttodelete):");
scanf("%d",&x);while(p->data!=x)
{
p=p->next;
}
temp=p->next;
p->next=temp->next;free(temp);
return(q);
}

//**************	FUNOFDELETENODEAT SPECIFICPOSITION		****************//
//*****************************************
********************************//

node*deleteatspe_pos(node*p)
{
node*temp,*q,*r;
