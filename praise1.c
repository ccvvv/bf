//P73 4.2
#include<stdio.h>
#include<string.h>
#define PRAISE  "You are an extraordinary being." //density 密度
int main(void)
{
	char name[40];

	printf("Hi! What's your name?\n");
	scanf("%s",name);
	printf("Hello,%s. %s", name, PRAISE); //pounds 英镑

	return 0;
}


