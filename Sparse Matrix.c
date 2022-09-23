#include<stdio.h>

int main()
{
int ar [10][10], sr [10][3], i, j, a = 1, r, c;
printf("Enter number of rows : ");
scanf("%d",&r);
printf("Enter number of columns : ");
scanf("%d",&c);
printf("Enter the elements of the matrix\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&ar[i][j]);
}
}
printf("Entered matrix is : \n\t\t");
for(i=0;i<r;i++)
{
printf("\n");
for(j=0;j<c;j++)
{
printf("\t");
printf("%d",ar[i][j]);
}
}
sr[0][0] = r;
sr[0][1] = c;
for(i=0;i<r;i++)
{

for(j=0;j<c;j++)
{
if (ar[i][j]!=0)
{
sr[a][0]=i;
sr[a][1]=j;
sr[a][2]=ar[i][j];
a++;
}
}
}
a=a-1;
sr[0][2]=a;
printf("\n\nSparse matrix is : \n\t\t");
for(i=0;i<=a;i++)
{
printf("\n");
for(j=0;j<3;j++)
{
printf("\t");
printf("%d",sr[i][j]);
}
}
return 0;
}