//二分查找 logN
#include <stdio.h>
#include <string.h>
int bsearch (char*A,int x,int y,char v)//二分法下标 （不确定具体找到哪个的下标） 和二分法的具体过程有关 
{
	char m;
	while(x<y)
	{
		m=x+(y-x)/2;
		if(A[m]==v) return m;
		else if(A[m]>v) y=m;
		else x=m+1;
	}
	return -1;
}
int lower_bound(char*A,int x,int y,char v)//下界 
{
	char m;
	while(x<y)
	{
		m=x+(y-x)/2;
		if(A[m]>=v) y=m;
		else x=m+1;
	}
	return x;
}
int upper_bound(char*A,int x,int y,char v)//上界+1 
{
	char m;
	while(x<y)
	{
		m=x+(y-x)/2;
		if(A[m]<=v) x=m+1;
		else y=m;
	}
	return x;
}
void merge_sort(char *A, int x, int y, char* T)//O(N*logN)//只需要改类型 
{
	if(y-x>1)
	{
		int m=x+(y-x)/2;
		int p=x,q=m,i=x;
		merge_sort(A,x,m,T);
		merge_sort(A,m,y,T);
		while (p<m||q<y)
		{
			if(q>=y||(p<m&&A[p]<=A[q])) T[i++]=A[p++];
			else T[i++]=A[q++];
		}
		for (i=x;i<y;i++) A[i]=T[i]; 
	}
}
int main()
{
	char a[1000]={"856999999999999956dgsfa5666xvb55b9999hyuk3i"};
	char b[1000]; 
	merge_sort(a,0,strlen(a),b);
	printf("%s\n",a);
	printf("%d\n",bsearch(a,0,strlen(a),'5'));
	printf("%d\n",lower_bound(a,0,strlen(a),'5'));
	printf("%d\n",upper_bound(a,0,strlen(a),'5'));
	return 0;
} 
