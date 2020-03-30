#include<stdio.h>
int main()
{
	int var, type[20],n;
	int resptime[20];
	printf("Number of process: ");
	scanf("%d",&n);
	printf("Enter the data\n");
	for(var=0;var<n;var++)
	{
		printf("Response time of P%d (in milliseconds): ",var);
		scanf("%d",&resptime[var]);
		if(resptime[var]<1000)
		{
			type[var]=1;
		}
		else
		{
			type[var]=0;
		}
	}
	printf("Process Number\tResponse Time\tType\t\tPriority");
	for(var=0;var<n;var++)
	{
		printf("\nP%d\t\t%dms\t\t",var,resptime[var]);
		if(type[var]==1)
		{
			printf("Interactive\tHigh");
		}
		else
		{
			printf("Non-Interactive\tLow");
		}
	}
}
