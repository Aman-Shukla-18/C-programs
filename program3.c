// queue implementation

#include<stdio.h>
#include<conio.h>
int a, *p, rear = 0;
int main()
{
void push();
void pop();
void display();


int b;
clrscr();

printf("Enter the size of queue \n -->");
scanf("%d",&a);

p = (int*)calloc(a,2);

x:
printf("\n \n Enter\n 1 to push \n 2 to pop\n 3 to display\n 4 to exit\n-->");
scanf("%d",&b);

if(b == 1)
{push();goto x;}
else if(b == 2)
{pop();goto x;}
else if(b == 3)
{display();goto x;}
else if(b == 4)
{goto y;}
else
printf("Invalid Input\n");

y:
free(p);
return 0;
}


void push()
{         int c;
	  if(rear == a)
	  printf("Queue is full !!!!\n");
	  else
	 {printf("Enter the value to be entered\n-->");
	  scanf("%d",&c);
	  *(p+rear) = c;
	  rear++;}

}


void pop()
{
	int c,i;
	c = *p;
	if(rear == 0)
	printf("Queue is empty !!!!\n");
	else
	{
	for(i=1;i<rear;i++)
	{
	*(p+i-1)=*(p+i);
	*(p+i)=0;
	}rear--;
	printf("You just poped %d |\n",c);
	}
}
void display()
{
	int i;
	printf("Elements in the queue are::\n");
	for(i=0;i<rear;i++)
	{
	printf("%d \n",*(p+i));

	}

}
