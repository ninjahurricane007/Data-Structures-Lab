#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *prev;
struct node *next;
};
struct node *head, *temp, *last, *start ;
void insert();
void delete();
void display();
int main()
{

int choice;
printf("1. Insert node\n2.Delete node\n3.Display DLL\n4.Exit\n");
printf("Enter your choice : ");
scanf("%d",&choice);
switch (choice)
{
case 1:
{
insert();
main();
break;
}
case 2:
{
delete();
main();
break;
}
case 3:
{
display();
main();
break;
}
case 4:
{
exit(0);

break;
}
default:
{
printf("\nInvalid choice");
}
main();
}
}
void insert()
{
int ch;
head = (struct node *)malloc(sizeof(struct node));
printf("Enter data : ");
scanf("%d", &head -> data);
head -> next = NULL;
head -> prev = NULL;
printf("\n1. Insert at beginning ");
printf("\n2. Insert at end ");
printf("\n3. Insert at a position ");
printf("\nEnter your choice : ");
scanf("%d", &ch);
switch(ch)
{
case 1:
{
if(start == NULL)

{
start = last = head;
}
else
{
head -> next = start;
start -> prev = head;
start = head;
}
break;
}
case 2:
{
if(start == NULL)
{
start = last = head;
break;
}
else
{
last -> next = head;
head -> prev = last;
last = head;
}
}
break;
case 3:

{
int i=1, pos;
printf("Enter a position to insert : ");
scanf("%d",&pos);
temp = start;
while (i!=pos && temp!=NULL)
{
temp = temp -> next;
i++;
}
if (temp==NULL)
{
printf("\nPosition not available");
}
else
{
head -> next = temp;
head -> prev = temp -> prev;
temp -> prev -> next = head;
temp -> prev = head;
}
}
break;
default:
{
printf("Invalid choice");
}

}
display();
}
void delete()
{
int ch;
printf("\n1. Deletion at beginning ");
printf("\n2. Deletion at end ");
printf("\n3. Deletion at a position ");
printf("\nEnter your choice : ");
scanf("%d", &ch);
switch(ch)
{
case 1:
{
if(start == NULL)
{
printf("Deletion not possible");
}
else
{
temp = start;
start = start -> next;
free(temp);
start -> prev = NULL;
}
}

break;
case 2:
{
if(last == NULL)
{
printf("Deletion not possible");
}
else
{
temp = last;
last = last -> prev;
free(temp);
last -> next = NULL;
}
}
break;
case 3:
{
int i=1, pos;
temp = start;
printf("\nEnter position : ");
scanf("%d",&pos);
while (i!=pos && temp!=NULL)
{
temp = temp -> next;
i++;
}

if (temp==NULL)
{
printf("Invalid position");
}
else
{
printf("Data deleted = %d",temp->data);
if (temp -> next == NULL)
{
temp -> prev -> next = NULL;
last = last -> prev;
free(temp);
}
else if(temp -> prev == NULL)
{
temp -> next -> prev = NULL;
start = start -> next;
free(temp);
}
else
{
temp -> prev -> next = temp -> next;
temp -> next -> prev = temp -> prev;
free(temp);
}
}
}

break;
default:
{
printf("Invalid choice");
}
}
display();
}
void display()
{
if(start==NULL)
{
printf("\nList is empty");
}
else
{
temp = start;
printf("\nThe current list is : \n");
while(temp != NULL)
{
printf("%d ",temp -> data);
temp = temp -> next;
}
}
main();
}