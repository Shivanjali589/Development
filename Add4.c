#include<stdio.h>

int Addition(int ivalue1,int ivalue2)
{
int ians = 0;

ians = ivalue1 + ivalue2;

return ians;
}

int main()
{

int ino1 = 0;

int ino2 = 0;

int ino3 = 0;

printf("enter the first number : \n");
scanf("%d",&ino1);

printf("enter the second number : \n");
scanf("%d",&ino2);

ino3 = Addition(ino1,ino2);

printf("Addition is : %d\n",ino3);

return 0;
}
