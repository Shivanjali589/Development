// dynamic program
#include<stdio.h>

int main()
{
int iNO1 = 0;
int iNO2 = 0;
int iNO3 = 0;
printf("enter the first number :");
scanf("%d",&iNO1);

printf("enter the second number :");
scanf("%d",&iNO2);

// iNO3 = iNO1 + iNO2;
 iNO3 = iNO1 - iNO2;

//printf("Addition is : %d\n",iNO3);
printf("subtraction is : %d\n",iNO3);

return 0;
}

