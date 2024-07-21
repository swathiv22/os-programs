#include<stdio.h>
int main()
{
	int p_id[10],at[10],bt[10],ct[10],tat[10],wt[10];
	int n;
	int avgtat=0, avgwt=0;
	int i,j,k,l,m;
	printf("Enter the number of process:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("AT[%d] :\n",i+1);
		scanf("%d",&at[i]);
		printf("BT[%d] :\n",i+1);
		scanf("%d",&bt[i]);		
	}
	
	int sum = at[0];
	for(j=0;j<n;j++) //completion time
	{
		sum = sum+bt[j];
		ct[j] = sum;
	}
	
	for(k=0;k<n;k++) //turn around time
	{
		tat[k] = ct[k]-at[k];
		avgtat = avgtat+tat[k]; 
	}
	
	for(l=0;l<n;l++)
	{
		wt[l] = tat[l]-bt[l];
		avgwt = avgwt+wt[l];
	}
	printf("\n P_ID \t AT \t Bt \t ct \t tat \t wt \t \n\n\n");
	for(m=0;m<n;m++)
	{
		printf("\n P%d \t %d\t %d\t %d\t %d\t %d\t", m+1,at[m],bt[m],ct[m],tat[m],wt[m]);
	}
}
