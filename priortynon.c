#include<stdio.h>
int main()
{
	int n, bt[10],ct[10],tat[10],wt[10],pr[10],at[10];
	int i,j;
	printf("Enter the number of process: ");
	scanf("%d",&n);
	printf("Enter the priority: \n");
	for(i=0;i<n;i++) // priorty
	{
		scanf("%d",&pr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("AT[%d] :\n",i+1);
		scanf("%d",&at[i]);		
		printf("BT[%d]:  \n",i+1);
		scanf("%d",&bt[i]);
		printf("CT[%d]: \n",i+1);
		scanf("%d",&ct[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(pr[j]>pr[j+1])
			{
				int temp = pr[j];
				pr[j]= pr[j+1];
				pr[j+1] = temp;
				
				
				temp = at[j];
				at[j]= at[j+1];
				at[j+1] = temp;
				
				
				temp = bt[j];
				bt[j]= bt[j+1];
				bt[j+1] = temp;
				
			}
		}
	}
	
	wt[0]=0;
	for(i=0;i<n;i++) //waiting time
	{
		wt[i] = ct[i-1]+wt[i-1];
		if(wt[i]<0)
		{
			wt[i]=0;
		}
	}
	
	for(j=0;j<n;j++)
	{
		tat[j]=ct[j]-at[j];
	}
	
	printf("\n P_ID \t PRIORTY \t AT \t BT \t CT \t WT \t TAT \t \n\n\n");
	for(i=0;i<n;i++)
	{
		printf("\n P%d \t %d \t %d \t %d \t %d \t %d \t %d \t",i+1,pr[i],at[i],bt[i],ct[i],wt[i],tat[i]);
	}
	
	
}
