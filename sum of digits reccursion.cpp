#include <stdio.h>
int sum (int n)
{
	if (n==0)
	{
		return 0;
	}
	else
	
		return (n%10)+sum(n/10);
	
}
int main ()
{
	int num;
	scanf ("%d",&num);
	int s=sum (num);
	printf ("%d",s);
}
