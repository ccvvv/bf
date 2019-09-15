#include<stdio.h>
#define SQUARES 64
int main(void)
{
	double CROP= 2E16;
	double total;
	int count= 1;

	while(count< 64){
		count++;
		total =total*2 +total;
		printf("%13.2e", total);
	}

	return 0;
}
