#include<stdio.h>
void main()
{
int i,n,o,a[50],num=0,flag=0,low,high,mid;
printf("SELECT TYPE OF SEARCH\n1.Linear Search\n2.Binary Search\nSelect the option
number\n");
scanf("%d",&o);
printf("Enter no. of elements in the array\n");
scanf("%d",&n);
printf("Enter array elements.(Enter sorted array for binary search)\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);

}
printf("Enter the element to search\n");
scanf("%d",&num);
if(o==1)
{
for(i=0;i<n;i++)
{
if(a[i]==num)
{
flag++;
printf("Number found at %d position\n",i+1]);
}
}
if(flag==0)
{
printf("Element not found\n");
}
}
if(o==2)
{
for(low=0;high=n-1;low<=high)
{
mid=(high+low)/2;
if(a[mid]==num)
{
printf("Element found at %d",mid+1);
flag++;
break;
}
else if(num<a[mid])
high=mid-1;
else
low=mid+1;
}
if(flag==0)

{
printf("Element not found");
}
}
}