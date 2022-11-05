#include<stdio.h>
int fact(int);
int main()
{
	int num,f=1;
	printf("enter no:\n");
	scanf("%d",&num);
	f=fact(num);

	printf("factorial =%d",f);

}

int fact(int n)
{
	if(n==0)
	return 1;
	else
	return n*fact(n-1);

}