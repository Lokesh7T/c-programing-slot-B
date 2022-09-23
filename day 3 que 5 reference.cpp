#include<stdio.h>
add(int *x,int *y)
{
    int z;
    z=*x+*y;
    return(z);
}
int main()
{
    int a,b,c;
    printf("Enter Two Values: ");
    scanf("%d %d",&a,&b);
    c=add(&a,&b);
    printf("The Sum is: %d",c);
    return 0;
}

