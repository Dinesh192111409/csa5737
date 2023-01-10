#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	printf("print all the even numbers till:");
	scanf("%d",&n);
	printf("print all the even numbers from 1 to %d are:\n",n);
	for(i=2;i<=n;i+=2)
	{
		printf("%d\n",i);
	}
	return 0;
}
