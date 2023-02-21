#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,t1=0,t2=1;
	printf("enter the no of terms:");
	scanf("%d",&n);
	int nextterm=t1+t2;
	printf("fibonnaci series:%d,%d,",t1,t2);
	for(i=3;i<=n;++i)
	{
		printf("%d,",nextterm);
		t1=t2;
		t2=nextterm;
		nextterm=t1+t2;
	}
	getch();
}
