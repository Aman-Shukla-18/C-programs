/*
  for n=4             for n=3
     *                       *
    ***                     ***
   *****                   *****
  *******                   ***
   *****                     *
    ***
     *


*/
#include<stdio.h>            // Header file
int main()            // Declaring main function of int retrun type
{
int i,j,n,x=1;        // Declaration of int type varialbes
printf("Enter the value of lines:");
scanf("%d",&n);              // Taking input from user 
for(i=0;i<n;i++)
{                            // First for loop for printing upper part of diamond
	for(j=1;j<n-i;j++)
	{printf(" ");}
	for(j=1;j<=x;j++)
	{printf("*");}
	x+=2;
	printf("\n");
}
x-=4;
for(i=0;i<n-1;i++)       // Second for loop for printing lower part of diamond
{
	for(j=0;j<=i;j++)
	{printf(" ");}
	for(j=1;j<=x;j++)
	{printf("*");}
	x-=2;
	printf("\n");
}
return 0;

}
