#include <stdio.h>
int IsPrime (int x)
{
	int i=0;
	int count=0;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		{
			return 0;
			break;
		}
	}
	if(i==x)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int IsSuperprime(int x)
{
	int a,b,c;
	a=x/100;
	x=x%100;
	b=x/10;
	c=x%10;
	if(IsPrime(a+b+c)==1&&IsPrime(a*b*c)==1&&IsPrime(x)==1&&IsPrime(a*a+b*b+c*c)==1)
	{
		return 1;
	}
	else
	{
		return 0;
	} 
}
int main ()
{
	int i,j=0;
	int sps[900]={0};
	int max,sum,num;
	for(i=100;i<1000;i++)
	{
		if(IsSuperprime(i)==1)
		{
			sps[j]=i;
			j++;
		}
	}
	max=sps[j-1];
	num=j;
	for(i=0;i<j;i++)
	{
		//printf("%d\n",sps[i]);//for test
		sum+=sps[i];
	}
	printf("num=%d\nmax=%d\nsum=%d\n",num,max,sum);
	return 0;
 } 
