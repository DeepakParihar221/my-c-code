#include<stdio.h>
void Bubble_Sort(int a[],int n)
{
	int i,round,c;
	for(round=0;round<n-1;round++)
	{
		c=0;
		for(i=0;i<n-1-round;i++)
		{
			if(a[i]>a[i+1])
			{
				c=1;				
				a[i]=a[i]+a[i+1];
				a[i+1]=a[i]-a[i+1];
				a[i]=a[i]-a[i+1];
			}
		}
		if(c==0)
		{
			printf("round=%d\n",round);
			break;
		}
	}
}
int main()
{
	int n,i;
	printf("enter the no. elements in array\n");
	scanf("%d",&n);
	int array[n];
	printf("enter the elements in array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	Bubble_Sort(array,n);
	printf("elements after sorting are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",array[i]);
	}
}


