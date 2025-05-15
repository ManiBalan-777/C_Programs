#include<stdio.h>
int main()
{
	union uni
	{
		int a;
		char ch[2];
		
	};
	union uni u;
	u.ch[0]=2;
	u.ch[1]=3;
	u.ch[2]=1;
	printf("%d :",u.a);
	return 0;
}
