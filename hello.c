#include<stdio.h>

void swap(int *x, int *y);
{
	int temp = *x;
	*x = *y;
	*y = temp;
	
	return;
}
int main(void){

	printf("Hello World\n");
	return 0;
}

