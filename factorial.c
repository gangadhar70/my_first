#include<stdio.h>

int fact();

void main()
{
int a,b;
printf("Enter he number\n");
scanf("%d", &a);

printf("the value of factorial is %d", fact(a));
}
int fact(int a)
{
int c=1,i;
for(i=a;i>=1;i--)
c=c*i;
return c;
}
