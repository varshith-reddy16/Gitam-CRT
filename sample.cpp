#include<stdio.h>
int main()
{
	int x=100,y=200;
	if((x-=200)||(y-=100))
	{
		printf("%d%d",x,y);
	}
	else
	{
		printf("%d%d",x,y);
	}
}
