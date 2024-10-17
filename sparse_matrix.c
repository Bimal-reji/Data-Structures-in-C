#include<stdio.h>
int main()
{
int r,c;
printf("Enter the row size of the matrix");
scanf("%d",&r);
printf("Enter the column size of the matrix");
scanf("%d",&c);
int sp[10][10],tr[10][10];
for(int i=0;i<r;i++)
{
   for(int j=0;j<c;j++)
{
printf("enter the elements[%d][%d]",i,j);
scanf("%d",&sp[i][j]);
}
}
int k=1;
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
if(sp[i][j] !=0)
{
       tr[k][0]=i;
       tr[k][1]=j;
       tr[k][2]=sp[i][j];
       k++;
     }
    }
   }
   tr[0][0]=r;
   tr[0][1]=c;
   tr[0][2]=k-1;
  printf("sparse matrix \n");
  for(int i=0;i<r;i++)
  {
  for(int j=0;j<c;j++)
  {
printf("%d",sp[i][j]);
}
printf("\n");
}
printf("Triplet representation of sparse matrix \n");
printf("Rows | column | values \n");
for(int i=0;i<k;i++)
{
printf("%d|%d|%d \n",tr[i][0],tr[i][1],tr[i][2]);
}
return 0;
}
