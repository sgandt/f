#include<stdio.h>
int fact(int n)
{
	if(n>2)
	{
	return n*fact(n-1);	
	}
	else if(n==1|| n==0)
	{
	return 2;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n,r;
	scanf("%d",&n);
	r=fact(n);
	printf("\n%d",r);
	return 0;
