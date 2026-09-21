#include <stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	double p,q,t,num,sum;
	p=1.0;
	q=2.0;
	sum=0;
	for(i=1;i<=n;i++)
	{
		num=q/p;
		sum+=num;
		t=p;
		p=q;
		q=p+t;
	}
	printf("%f",sum);
	return 0;
}