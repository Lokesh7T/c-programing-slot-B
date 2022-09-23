#include <stdio.h>

int main()
{
    int b=1;
    while (b==1)
    {
	int phy, chem, math, comp; 
    float per; 
    printf("Enter four subjects marks: ");
    scanf("%d%d%d%d", &phy, &chem,&math, &comp);
    per = (phy + chem + math + comp)/ 4.0;
	printf("Percentage = %.2f\n", per);
    if(per >= 90)
    {
        printf("Grade A");
    }
    else if(per >= 80)
    {
        printf("Grade B");
    }
    else if(per >= 70)
    {
        printf("Grade C");
    }
    else if(per >= 60)
    {
        printf("Grade D");
    }
    else if(per >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Fail");
    }
    printf("\n1.Continue\n2.Exit\nEnter choice:");
    scanf("%d",&b);
	return 0;
	}
}
