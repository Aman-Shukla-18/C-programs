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

int main()
{
int i,j,n,x=1;
clrscr();
printf("Enter the value of lines:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	for(j=1;j<n-i;j++)
	{printf(" ");}
	for(j=1;j<=x;j++)
	{printf("*");}
	x+=2;
	printf("\n");
}
x-=4;
for(i=0;i<n-1;i++)
{
	for(j=0;j<=i;j++)
	{printf(" ");}
	for(j=1;j<=x;j++)
	{printf("*");}
	x-=2;
	printf("\n");
}

getch();
return 0;

}
