//P74  4.3
#include<stdio.h>
#include<string.h>
#define PRAISE  "You are an extraordinary being." 
int main(void)
{
	char name[40];

	printf("Hi! What's your name?\n");
	scanf("%s",name);
	printf("Hello,%s. %s", name, PRAISE); //pounds 英镑
	printf("Your name of %zd letters occupies %zd memery cells.\n", strlen(name), sizeof(name) );
	printf("The phrase of praise has %zd letters"
		" and occupies %zd memory cells.\n",strlen(PRAISE), sizeof(PRAISE));
	return 0;
}


