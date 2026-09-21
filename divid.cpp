#include <stdio.h>
int main()
{
	int m,n;
	scanf("%d/%d",&m,&n);
	int a=m;
	int b=n;
	while(a%b!=0)
	{
		int t;
		t=b;
		b=a%b;
		a=t;
	}
	printf("%d/%d",m/b,n/b);
	return 0;
}