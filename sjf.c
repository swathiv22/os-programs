#include<stdio.h>
int main()
{
	int n,at[10],bt[10],ct[10],tat[10],wt[10],p[10];
	int temp;
	int i,j,k,m,l;
	printf("Enter the number of process: ");
	scanf("%d",&n);
	printf("Process: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	for(j=0;j<n;j++)
	{
		printf("BT[%d]: \n",j+1);
		scanf("%d",&bt[j]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(bt[j]>bt[j+1])
			{
				temp = bt[j];
				bt[j] = bt[j+1];
				bt[j+1] = temp;
				
				temp = p[j];
				p[j]=p[j+1];
				p[j+1] = temp;
				
			}
		}
	}
	
	int sum = 0;
	for(j=0;j<n;j++) //completion time
	{
		sum = sum+bt[j];
		ct[j] = sum;
	}
	
	for(k=0;k<n;k++) //turn around time
	{
		tat[k] = ct[k];
	}
	
	for(l=0;l<n;l++)
	{
		wt[l] = tat[l]-bt[l];
	}
	printf("\n P_ID \t Bt \t tat \t wt \t \n\n\n");
	for(m=0;m<n;m++)
	{
		printf("\n P%d \t %d\t %d\t %d\t", m+1,bt[m],tat[m],wt[m]);
	}
}
