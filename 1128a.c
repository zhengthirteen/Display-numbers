#include<stdio.h>
void show(long long x)
{
	int a[20],b=0,d;
	char c[7][200]={0};
	for(int i=0;i<7;i++)
	for(int j=0;j<200;j++)
	c[i][j]=' ';
	while(x>=10)
	{
		a[b++]=x%10;
		x=x/10;
	}
	a[b]=x;
	for(int i=b;i>=0;i--)
	printf("%d",a[i]); 
	printf(":\n"); 
	for(int i=b;i>=0;i--)
	{
		d=b-i;
		switch(a[i])
		{
			case 0:
			{
				for(int j=d*7;j<d*7+5;j++)
				c[0][j]='*';
				for(int j=d*7;j<d*7+5;j++)
				c[6][j]='*';
				for(int k=0;k<7;k++)
				c[k][d*7]='*';
				for(int k=0;k<7;k++)
				c[k][d*7+4]='*';
				break;
			}
			case 1:
			{				
				for(int k=0;k<7;k++)
				c[k][d*7+4]='*';
				break;
			}
			case 2:
			{
				for(int j=d*7;j<d*7+5;j++)
				c[0][j]='*';
				for(int j=d*7;j<d*7+5;j++)
				c[3][j]='*';
				for(int j=d*7;j<d*7+5;j++)
				c[6][j]='*';
				for(int k=0;k<4;k++)
				c[k][d*7+4]='*';
				for(int k=4;k<7;k++)
				c[k][d*7]='*';
				break;
			}
			case 3:
			{
				for(int j=d*7;j<d*7+5;j++)
				c[0][j]='*';
				for(int j=d*7;j<d*7+5;j++)
				c[3][j]='*';
				for(int j=d*7;j<d*7+5;j++)
				c[6][j]='*';
				for(int k=0;k<4;k++)
				c[k][d*7+4]='*';
				for(int k=4;k<7;k++)
				c[k][d*7+4]='*';
				break;
			}
			case 4:
			{
				for(int j=d*7;j<d*7+5;j++)
				c[3][j]='*';				
				for(int k=0;k<7;k++)
				c[k][d*7+4]='*';
				for(int k=0;k<4;k++)
				c[k][d*7]='*';
				break;
			}
			case 5:
			{
				for(int j=d*7;j<d*7+5;j++)
				c[0][j]='*';
				for(int j=d*7;j<d*7+5;j++)
				c[3][j]='*';
				for(int j=d*7;j<d*7+5;j++)
				c[6][j]='*';
				for(int k=0;k<4;k++)
				c[k][d*7]='*';
				for(int k=4;k<7;k++)
				c[k][d*7+4]='*';
				break;
			}
			case 6:
			{
				for(int j=d*7;j<d*7+5;j++)
				c[0][j]='*';
				for(int j=d*7;j<d*7+5;j++)
				c[3][j]='*';
				for(int j=d*7;j<d*7+5;j++)
				c[6][j]='*';
				for(int k=4;k<7;k++)
				c[k][d*7+4]='*';
				for(int k=0;k<7;k++)
				c[k][d*7]='*';
				break;
			}
			case 7:
			{
				for(int j=d*7;j<d*7+5;j++)
				c[0][j]='*';				
				for(int k=0;k<7;k++)
				c[k][d*7+4]='*';
				break;
			}
			case 8:
			{
				for(int j=d*7;j<d*7+5;j++)
				c[0][j]='*';
				for(int j=d*7;j<d*7+5;j++)
				c[3][j]='*';
				for(int j=d*7;j<d*7+5;j++)
				c[6][j]='*';
				for(int k=0;k<7;k++)
				c[k][d*7+4]='*';
				for(int k=0;k<7;k++)
				c[k][d*7]='*';
				break;
			}
			case 9:
			{
				for(int j=d*7;j<d*7+5;j++)
				c[0][j]='*';
				for(int j=d*7;j<d*7+5;j++)
				c[3][j]='*';
				for(int j=d*7;j<d*7+5;j++)
				c[6][j]='*';
				for(int k=0;k<7;k++)
				c[k][d*7+4]='*';
				for(int k=0;k<4;k++)
				c[k][d*7]='*';
				break;
			}	
		}
	}
	for(int i=0;i<7;i++)
	{
		for(int j=0;j<200;j++)
		printf("%c",c[i][j]);
		printf("\n");
	}
	return;	
}
int main(void)
{
	int n;
	long long m;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&m);
		show(m);
	}
	return 0;
}
