#include <iostream>
using namespace std;
class SuperPrime 
{
	public:
		SuperPrime(int n);
		void show();//show num
		void addself();// count++
		int IsSuperPrime();
		int IsPrime();
		int add(int x);
		int compare(int x);
	private:
		int num;
		int d1;//to keep three digits (only for [100-999])
		int d2;
		int d3;
};

int main ()
{
	SuperPrime count(0),sum(0),max(0);
	for(int i=100; i<1000; i++)
	{
		SuperPrime sp(i);
		if (sp.IsPrime()==1)
		{
			if(sp.IsSuperPrime()==1)
			{
				max.compare(i);
				count.addself();
				sum.add(i);
			}
			
		}
		//sp.show();
	}

	count.show();
	max.show();
	sum.show();
	return 0;
}


void SuperPrime::addself()
{
	num++;
}
SuperPrime::SuperPrime(int n)
{
	num=n;
}
void SuperPrime::show() 
{
	cout<<num<<endl;
}
int SuperPrime::IsPrime()
{
	int i=0;
	int count=0;
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			return 0;
			break;
		}
	}
	if(i==num)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int SuperPrime::IsSuperPrime()
{
	int x;
	d1=num/100;
	x=num%100;
	d2=x/10;
	d3=x%10;
	//t1\t2 means tempt1 tempt2 in order to use function IsPrime
	SuperPrime t1(d1+d2+d3),t2(d1*d2*d3),t3(d1*d1+d2*d2+d3*d3);
	if(t1.IsPrime()==1&&t2.IsPrime()==1&&t3.IsPrime()==1)
	{
		return 1;
	}
	else
	{
		return 0;
	} 
}
int SuperPrime::add(int x)
{
	num+=x;
}
int SuperPrime::compare(int x)
{
	if(x>num)
	{
		num=x;
	}
}

	










