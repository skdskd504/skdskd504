#include<stdio.h>

int add(int x, int y)
{
	return(x+y);
}

void swap(int *x, int *y);
{
	int temp = *x;
	*x = *y;
	*y = temp;
	
	return;

}

int main(void){

	printf("Hello World\n");

	
	int a=3;, b=2;
	int c= add(3,2);
	printf("a+b=%d\n",c);

	return 0;
}

