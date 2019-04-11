#include <stdio.h>
#include <string.h>
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
	char a[1000]={"8097v09768956dgsfaxvb5b33i"};
	char b[1000]; 
	merge_sort(a,0,strlen(a),b);
	printf("%s\n",a);
	return 0;
}

