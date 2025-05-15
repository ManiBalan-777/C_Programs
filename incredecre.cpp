#include<stdio.h>
int main()
{
	int a=5,b;
//	a=a++ + a++;

b=++a + a++;
	printf("b=%d",b);
	printf("a=%d",a);
	return 0;
}
