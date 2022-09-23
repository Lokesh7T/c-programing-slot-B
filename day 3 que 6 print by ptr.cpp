#include<stdio.h>
#include<conio.h>
int main()
{
int arr[10],n,i;


int *ptr=arr;
printf("Enter the number of elements you want to use(<=10): ");
scanf("%d",&n);
printf("\nEnter %d Elements:",n);
for (i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("You entered: \n");


for (i=0;i<n;i++)
printf("%d\n",*(ptr+i));
}
