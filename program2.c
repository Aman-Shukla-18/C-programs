// implementation of stack


#include<stdio.h>
#include<conio.h>
int top = 0;
int a,b,c,*p;
void push(int);
int pop();
void display();
int pop()
{ int z=0;
if(top!=0)
{
z=*(p+top-1);
*(p+top-1)=0;
top--;
return z;
}
else
{
printf("Stack Underflow\n");
return 0;
}
}
void push(int x)
{
if(top<a)
{
*(p+top) = x;
top++;
}
else
{
printf("Stack Overflow\n");
}
}
void display()
{ if(top != 0)
{
int i = 0;
printf("Elements of stack are::\n");
for(i=0;i<top;i++)
{
printf("%d \n",*(p+i));
}}
else
{
printf("Stack is empty\n");
}
}
int main()
{
   clrscr();
  printf("Enter the length of stack::");
 scanf("%d",&a);
 p =(int*)calloc(a,2);
 X:
 printf("Enter 1 for insertion \n");
 printf("Enter 2 for deletion \n");
 printf("Press any other number to display\n-->");
 scanf("%d",&b);
 switch(b)
 { case 1: printf("Enter the value of element\n-->");
	   scanf("%d",&c);
	   push(c);
	   goto X;
   case 2: printf("You recently deleted %d from stack\n",pop());
	   goto X;
   default: display();
 };
 getch();
 return 0;
	  }
