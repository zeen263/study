#include<stdio.h>

void recur(int n)
{
	
	if (n==1) { printf("%d\n", n); return;}
	
	if (n%2 == 1)
		recur(3*n+1);
	else
		recur(n/2);
	
	printf("%d\n", n); 
}

int main(void)
{
	int n;
	
	scanf("%d", &n);
	
	recur(n);
}
