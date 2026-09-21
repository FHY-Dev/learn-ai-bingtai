#include <stdio.h>
int main()
{
	int min,max,i,cnt,sum;
	cnt=0;
	sum=0;
	scanf("%d",&min);
	scanf("%d",&max);
	if(min==1){
		min=2;
	}
	for(i=min;i<=max;i++)
	{
		int n;
		int k=1;
		for(n=2;n<i;n++)
		{
			if(i%n==0)
			{
				k=0;
				break;
			}

		}
		if(k){
			cnt++;
			sum+=i;
		}
	}
	printf("%d  %d",cnt,sum);
	return 0;
}