#include<stdio.h>
int main()
{
	int n,num,i,sum=0;
	printf("enter n value");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		sum=sum+i;
	}
	if(sum==n)
	printf("%d isperfect",n);
	else
	printf("%d is not perfect",n);
return 0;
}

