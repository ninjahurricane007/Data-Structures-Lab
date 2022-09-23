#include <stdio.h>
void mergesort(int,int,int [],int);
void merge(int,int,int,int[],int);
void merge_sort()
{
int n,a[25],i,low,high;
printf("Enter the no. of elements in the array:\n");
scanf("%d",&n);
printf("Enter the array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
low=0;
high=n-1;
mergesort(low,high,a,n);
printf("Array after merge sort:\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}
void mergesort(int low,int high,int a[],int n)
{
int mid;
if(low<high)
{
mid=(low+high)/2;
mergesort(low,mid,a,n);
mergesort(mid+1,high,a,n);
merge(low,mid,high,a,n);
}
}

void merge(int low,int mid,int high,int a[],int n)
{
int i=low,j=mid+1,k=low,b[25];
while(i<=mid && j<=high)
{
if(a[i]<a[j])
{
b[k]=a[i];
i=i+1;
k=k+1;
}
else
{
b[k]=a[j];
j=j+1;
k=k+1;
}
}
while(i<=mid)
{
b[k]=a[i];
i=i+1;
k=k+1;
}
while(j<=high)
{
b[k]=a[j];
j=j+1;
k=k+1;
}
i=low;
while(i<=high)
{
a[i]=b[i];
i=i+1;

}
}
void selection_sort()
{
int i,n,a[20],j,temp;
printf("Enter the no. of elements in the array:\n");
scanf("%d",&n);
printf("Enter the array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("Order of elements after Selection Sort:\n");
for(i=0;i<n;i++)
{
printf("%d \t",a[i]);
}
}
int main()
{
int ch;
printf("1.Merge Sort\t2.Selection Sort\nChoose the option number");
scanf("%d",&ch);

switch(ch)
{
case 1:merge_sort();
break;
case 2:selection_sort();
break;
default: printf("Invalid Input");
}
}