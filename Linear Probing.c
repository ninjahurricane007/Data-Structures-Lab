#include <stdio.h>
int main()
{
int a[10]={0,0,0,0,0,0,0,0,0,0},i,index,e,j;
for(i=0;i<10;i++)
{
printf("Enter the element %d \t",i+1);
scanf("%d",&e);
index=e%11;
if(index<=9)
j=index;
else
j=0;
{
for(j;j<10;j++)
{
if(a[j]==0)
{
a[j]=e;
break;
}
}
}
}
printf("Elements in the hashtable are:\n");
for(j=0;j<10;j++)
{
printf("%d\t",a[j]);
}
return 0;

}