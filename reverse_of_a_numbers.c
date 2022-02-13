#include<stdio.h>
int main()
{
int n,nl,rev=0,rem;


//printf("enter any number:");
scanf("%d",&n);
nl=n;


//logic
while(n>0)
{
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
}
printf("%d",rev);
return 0;
}
