#include <stdio.h>
int main()
{
	int s,n,a,b,c,d,e,f;
	c=1;

	for (s=1;s<=7;s++)
	{
		if(s%2==0)
		{continue;}
		
		for(d=c;d<=5;d++)
		{
			
			printf(" ");
		}

		for (n=1;n<=s;n++)
		{
			
			
			printf("%c",'*');
		}
		printf("\n\n");
		c=c+1;
	}
	e=3;

	for (a=5;a>=1;a--)
	{
		if (a%2==0)
			
		{continue;}
		for(f=e;f<=5;f++)
		{printf(" ");}
		for (b=1;b<=a;b++)
		{

			printf("%c",'*');
		}
		printf("\n\n");
		e=e-1;
	}
	
	
	return 0;
}
