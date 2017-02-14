#include<stdio.h>


int add(int a,int b)
{
	return a+b;
}

int sub(int a,int b)
{
	return a-b;
}

int main()
{
	int a=10,b=20;
	printf("%d\n",add(a,b));
	printf("%d\n",sub(a,b));
	return 1;
}
