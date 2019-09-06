#include<stdio.h>
int main()
{
int a[10][10];int i,j,m;
printf("enter the matrix order");
scanf("%d",&m);
printf("enter matrix elements\n");

for(i=0;i<m;i++)
for(j=0;j<m;j++)
scanf("%d",&a[i][j]);
printf("\nthe diagonal elements are \n");
for(i=0;i<m;i++)
{
for(j=0;j<m;j++)
{
if(i==j||i+j==(m-1))
printf("%3d",a[i][j]);
else
printf(" ");
}
printf("\n");
}

}
