#include<stdio.h>
#include<stdlib.h>
int main()
{
	
	
	int stack[30],size,value,top=-1,temp,i;
	int n;
	do{
	
	printf("The options are:-\n");
	printf("1.PUSH\n");
	printf("2.Pop\n");
	printf("3.Peek\n");
	printf("4.Display\n");
	printf("5.Exit\n");
	printf("Enter your choice:-\n");
	scanf("%d",&n);
	if(n==1)
	{
	printf("Enter the push value:-\n");
	scanf("%d",&value);
	if(top=size-1)
	{
		
		printf("The stack is overflow\n");
		return -1;
	}
	else
	{
	top=top+1;
	stack[top]=value;	
	}
	}
else if (n==2)
	{		
	printf(" the element pop element is:-\n");
	if(top==-1)
	{
		printf("The stack is under flow:-\n");
		return -1;
	}
	else
	{
		stack[top]=temp;
		top= top-1;
		return temp;
	}
	
}

} while(n!=5);
}


