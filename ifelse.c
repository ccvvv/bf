#include<stdio.h>
int main(void)
{
	int num;
	while(num !='q'){
		scanf("%d",&num);
		if(num >8&& num<10)
			printf("yes\n");
		else if(num >10 && num <20)
			printf("Good\n");
		else if(num >20)
			printf("Very good\n");
		else
			printf("no\n");
	}
	return 0;
}

