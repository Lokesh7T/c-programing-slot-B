#include <stdio.h>
int main()
{
	int op;
	printf("If Integer Give 1\nIf float give 2:\n");
	scanf("%d",&op);
	if (op==1)
	{
	int temp;
	int a[10],n,i;
	printf("Enter num of elements ");
	scanf("%d",&n);
	printf("\nEnter elements ");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n/2;i++)
	{
        temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
 
	printf("\nThe elements:\n");
	for (i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}
}
else
{
	int  n;
    float temp;
    
    float arr[]={1.6, 1.8, 2.7, 1.6, 2.3, 2.1, 0.19};
    n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i = 0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    printf("reveresed array: ");
    for(int i = 0; i < n; i++){
        printf("%0.2f ", arr[i]);
    }
}

}

