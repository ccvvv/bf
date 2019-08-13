//P80 4.5
#include<stdio.h>
#include<limits.h>
#include<float.h>
int main(void)
{
	printf("Some number limits for this system:\n");
	printf("Biggest int: %d\n", INT_MAX);
	printf("Smallest long long: %lld\n", LLONG_MIN);
	printf("One byte = %d bits on this system.\n", CHAR_BIT);
	printf("Biggest char: %d\n", CHAR_MAX);
	printf("Smallest char: %d\n", CHAR_MIN);
	printf("Largest double: %e\n", DBL_MAX);
	printf("Smallest normal float: %e\n", FLT_MIN);
	printf("float precision = %d gigits\n", FLT_DIG);
	printf("float epsilon = %e\n", FLT_EPSILON);


	return 0;
}



