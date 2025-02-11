#include<stdio.h>
int main()
{
	int n,count=0;
	int r,num;
	printf("enter number");
	scanf("%d",&n);
	num=n;
	while(n>0)
	{
		r=n%10;
		if(num%r==0)
		{
			count++;
		}
		n=n/10;
	}
	printf("%d",count);
}
