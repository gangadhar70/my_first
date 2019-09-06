#include<stdio.h>
int add(int a,int b)
int main()
{
int a,b,c;
printf("enter the numbers \n");
scanf("%d %d",&a,&b);
printf("the addition is %d",add(a,b));
}
int add(int a,int b )
{
if(a==0)
return b;
else 
return add(a^b,(a&b)<<1);
}
