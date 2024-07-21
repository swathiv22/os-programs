#include<stdio.h>
int main()
{
	int n, bt[10],ct[10],tat[10],wt[10],pr[10];
	int i;
	printf("Enter the number of process: ");
	scanf("%d",&n);
	printf("Enter the priority: \n");
	for(i=0;i<n;i++) // priorty
	{
		scanf("%d",&pr[i]);
	}
	
	for(i=0;i<n;i++) // burst time
	{
		printf("BT[%d]:  \n",i+1);
		scanf("%d",&bt[i]);
	}
	int j,k,temp;
	for(j=0;j<n;j++)
	{
		for(k=0;k<n-1-j;k++)
		{
			if(pr[k]>pr[k+1]) // sorted this using bubble sort.
			{
				temp = pr[k];
				pr[k]=pr[k+1];
				pr[k+1]=temp;
				
				temp = bt[k];
				bt[k] = bt[k+1];
				bt[k+1] = temp;
			}
		}
	}
	
	
	int sum=0;
	for(i=0;i<n;i++) // completion time 
	{
		sum = sum+bt[i];
		ct[i]=sum;
	}
	
	for(i=0;i<n;i++) // turn around time 
	{
		tat[i] = ct[i];
	}
	wt[0] = 0;
	for(i=1;i<n;i++)
	{
		wt[i] = tat[i]-bt[i];
	}
	
	printf("\n P_ID \t PRIORTY \t BT \t TAT \t WT \n\n");
	for(i=0;i<n;i++)
	{
		printf("\n P%d \t %d \t %d \t %d \t %d \t",i+1,pr[i],bt[i],wt[i],tat[i]);
	}
}
