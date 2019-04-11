#include <stdio.h>
#include <string.h>
#define maxn 10000
int main ()
{
	char A[maxn],B[maxn];
	int a[maxn],b[maxn];
	int sum[maxn];
	int i,j,k;
	
	while (scanf("%s %s",A,B)!=EOF)
	{
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		memset(sum,0,sizeof(sum));
        //×Ö·û´®×ªint£¬²¢ÇÒµ¹ÖÃ 
		for(i=strlen(A)-1,k=0;i>=0;i--,k++)
		{
			a[k]=A[i]-'0';
		}
		for(j=strlen(B)-1,k=0;j>=0;j--,k++)
		{
			b[k]=B[j]-'0';
		}
		
		for(k=0;k<maxn;k++)
		{
			sum[k]=a[k]+b[k];
			//printf("%d",sum[k]); 
		}
		for(k=0;k<maxn-1;k++)//ÅÐ¶Ï½øÎ» 
		{
			if(sum[k]>=10)
			{
				sum[k]=sum[k]%10;
				sum[k+1]=sum[k+1]+1;
			}
		}
		for(k=maxn-1;k>0;k--)//Ñ°ÕÒÆðÊ¼Î»ÖÃ 
		{
			if(sum[k]!=0) 
			break;
		}
		
		for(;k>=0;k--)
		{
			printf("%d",sum[k]);
		}
		printf("\n");
	} 
	return 0;
 } 
