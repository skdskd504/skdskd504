#include<stdio.h>

int add(int x, int y)
{
	return(x+y);
}
int main(void){

	printf("Hello World\n");
	
	int a=3;, b=2;
	int c= add(3,2);
	printf("a+b=%d\n",c);

	return 0;
}

