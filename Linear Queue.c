#include <stdio.h>
#include<stdlib.h>
#define MAX 50
void insert(),delete(),print();
int a[MAX],rear=-1,front=-1;
main()
{
int c;
while (1)
{
printf("1.Insert an element into the queue \n");
printf("2.Delete an element from the queue \n");
printf("3.Print the elements the queue \n");
printf("4.Exit \n");
printf("Enter your choice : ");
scanf("%d", &c);
switch (c)

{
case 1:
insert();
break;
case 2:
delete();
break;
case 3:
print();
break;
case 4:
exit(1);
default:
printf("Wrong input.Enter the choice number \n");
}
}
}
void insert()
{
int item;
if (rear == MAX - 1)
printf("Queue Overflow \n");
else
{
if (front == - 1)

front = 0;
printf("Enter the element : ");
scanf("%d",&item);
rear = rear + 1;
a[rear]=item;
}
}
void delete()
{
if (front == - 1 || front > rear)
{
printf("Queue is empty \n");
return ;
}
else
{
printf("Element deleted from queue is : %d\n", a[front]);
front = front + 1;
}
}
void print()
{
int i;
if (front == - 1)
printf("Queue is empty \n");

else
{
printf("Elements are : \n");
for (i = front; i <= rear; i++)
printf("%d ", a[i]);
printf("\n");
}
}