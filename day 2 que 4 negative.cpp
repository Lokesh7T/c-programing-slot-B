#include<stdio.h>
#include <stdlib.h> 
int main()
{
	int op;
	printf("If Integer Give 1\nIf float give 2:\n");
	scanf("%d",&op);
	if (op==1)
	{
	
 int Size, i, a[10],c=0;
 
 printf("\n Please Enter the Size of an Array :  ");
 scanf("%d", &Size);
 
 printf("\n Please Enter the Array Elements  :  ");
 for(i = 0; i < Size; i++)
 {
      scanf("%d", &a[i]);
 }
 
 printf("\n Negative Num:  "); 
 for(i = 0; i < Size; i ++)
 {
   if(a[i] < 0)
   {
	   	printf("%d  ", a[i]);
	   	c++;
   }
 }
 printf("\ncount %d",c);
 return 0;}
 else if (op==2)
 {
 	int i,c;
    float a[]={1.6, 1.8, 2.7, -1.6, 2.3,-2.1, 0.19};

    
    printf("\n List of Negative Numbers in this Array  :  "); 
 for(i = 0; i < 20; i ++)
 {
   if(a[i] < 0)
   {
	   	printf("%0.1f ", a[i]);
	   	c++;
   }
 }
 printf("\ncount %d",c);
 }
 return 0;
}
