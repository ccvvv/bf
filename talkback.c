//P72 4.1
#include<stdio.h>
#include<string.h>
#define DENSITY  62.4 //density 密度
int main(void)
{
	float weight, volume; //weight 重量; volume 体积
	int size, letters; //size 大小; letters 字母
	char name[40];

	printf("Hi! What's your first name?\n");
	scanf("%s",name);
	printf("%s, what's your weight in pounds?\n",name); //pounds 英镑
	scanf("%f",&weight);
	size = sizeof(name);
	letters= strlen(name);
    volume = weight/DENSITY;
	printf("Well, %s, your volume is %2.2f cubic feet.\n",name,volume); //cubic feet 立方英寸
	printf("Also,your first name has %d letters,\n",letters);
	printf("and we have %d bytes to store it.\n",size); //store 存储

	return 0;
}


