#include<stdio.h>
int main()
{
	int n, bt[10],tat[10],wt[10],rem_bt[10];
	int sum=0;
	int i,j,k;
	int count;
	int temp;
	printf("Enter the number of process: \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("BT[%d] : \n",i+1);
		scanf("%d",&bt[i]);
		rem_bt[i] = bt[i];
	}
	int qt;
	printf("Enter the quantum: \n");
	scanf("%d",&qt);
	int total_time=0;
	while(1)
	{
		count = 0 ;
		for(i=0,count=0;i<n;i++)
		{
			temp=qt;
			if(rem_bt[i]==0)
			{
				count++;
				continue;
			}
			if(rem_bt[i]>qt)
			{
				rem_bt[i] = rem_bt[i]-qt;
				total_time = total_time+qt;
			}
			else 
			{
				total_time = total_time+rem_bt[i];
				rem_bt[i]=0;
				tat[i] = total_time;
				
			}
	
		}
		if(n==count)
		{
			break;
		}
	}
	
	for(j=0;j<n;j++)
	{
		wt[j] = tat[j]-bt[j];
	}
	
	printf("\n PID\t BT\t TAT\t WT\t \n");
	for(j=0;j<n;j++)
	{
		printf("\nP%d\t %d\t \t%d\t \t%d\t",j+1,bt[j],tat[j],wt[j]);
		
	}
}
