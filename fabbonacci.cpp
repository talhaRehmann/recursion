#include <stdio.h>
int fibnocci (int n)
{
	if (n<=1)
	{
		return 1;
	}
	else 
	{
		return fibnocci (n-1)+ fibnocci (n-2); 
	}
}

int main ()
{
	int n;
	scanf ("%d",&n);
	for (int i=1;i<=n;i++)
	{
		printf ("%d",fibnocci(n));
	}
}
