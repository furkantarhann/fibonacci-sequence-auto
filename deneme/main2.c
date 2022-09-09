#include <stdio.h>
#include <stdlib.h>


int main() {

int n,i,a,b,c;

printf("How many numbers do you want in the Fibonacci sequence? ");
scanf("%d",&n);

a=1;
b=1;
if(n>=1)
{
printf("%d ",a);
if(n>=2)
{
printf("%d ",b);
if(n>=3)
{
for(i=3;i<=n;i++)
{
c=a+b;
printf("%d ",c);
a=b;
b=c;
}
}
}
}
	return 0;
}
