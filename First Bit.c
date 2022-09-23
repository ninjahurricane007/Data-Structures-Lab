#include<stdio.h>

#include<stdlib.h>
struct node
{
int sizeofblock;
int sizeofprocess;
struct node *link;
};
struct node *head=NULL,*start=NULL;
int n;
void insert()
{
struct node *temp;
if(head==NULL)
head=start;
else
{
temp=head;
while(temp->link!=NULL)
{
temp=temp->link;
}
temp->link=start;
}
}
void createNode()
{
for(int i=0;i<n;i++)

{
struct node *newnode =(struct node*)malloc(sizeof(struct node));
newnode->link = NULL;
printf("\nEnter the size of memory block %d : ",i+1);
scanf("%d",&newnode->sizeofblock);
newnode->sizeofprocess=-1;
start=newnode;
insert();
}
}
void firstFit(int size)
{
struct node *temp=head;
int flag=0;
while(temp!=NULL)
{
if(temp->sizeofprocess==-1)
{
if(temp->sizeofblock >= size)
{
temp->sizeofprocess=size;
flag=1;
break;
}
}
temp=temp->link;
}

if(flag==0)
{
printf("\n Process size - |%d| exceeds largest node size\n",size);
}
}
void display()
{
struct node *temp=head;
printf("\n\tMemory\tProcess\n");
while(temp->link!=NULL)
{
printf("\t%d\t%d\n",temp->sizeofblock,temp->sizeofprocess);
temp=temp->link;
}
printf("\t%d\t%d",temp->sizeofblock,temp->sizeofprocess);
}
int main()
{
int size;
printf("Enter the no. of memory blocks : ");
scanf("%d",&n);
createNode();
for(int i=0;i<n;i++)
{
printf("\nEnter the process size-%d : ",i+1);
scanf("%d",&size);
firstFit(size);

}
display();
return 0;
}