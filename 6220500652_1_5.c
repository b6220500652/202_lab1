#include<stdio.h>
int main()
{
	int N,i,j,max,n;
	scanf("%d",&N);
	int x[N];
	for(i=0;i<N;i++)
	{
		scanf("%d",&x[i]);
	}
	max=x[n];
	for(j=1;j<N;j++)
	{
	if(max<x[j])
		{
			n=j;
			max=x[j];
			
		}	
	}
	printf("%d %d",n+1,max);
}
