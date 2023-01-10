#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	printf("print all the odd numbers until:");
	scanf("%d",&n);
	printf("print all the odd numbers between 1 to %d are:\n",n);
	for(i=1;i<=n;i+=2)
	{
		printf("%d\n",i);
	}
	return 0;
	
}
