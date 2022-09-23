#include<stdio.h>
int findFactorial(int,int *);
int main()
{
	int i,factorial,num;
	printf("Enter a number: ");
	scanf("%d",&num);
	findFactorial(num,&factorial);
	printf("Factorial of %d is: %d",num,factorial);
	return 0;
}
int findFactorial(int num,int *factorial)
{
	int i;
	*factorial =1;
	for(i=1;i<=num;i++)
	*factorial=*factorial*i;
	return *factorial;
}


