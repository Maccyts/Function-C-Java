#include<stdio.h>
int powe(int a,int b)
{
	int i,s=1;
	for(i=1;i<=b;i++)
		s=s*a;
	return (s);
}
int len(int n)
{
int s=0;
	while(n)
	{
	s++;
	n=n/10;
	}
	return (s);
}
void main()
{
	int a,n,t,l,s=0;
	scanf("%d",&n);
	t=n;
	l=len(n);
	while(n)
	{
	a=n%10;
	s=s+powe(a,l);
	n=n/10;
	}
	if(t==s)
		printf("Armstrong");
	else
		printf("Not Armstrong");
}
	
