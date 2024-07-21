#include<stdio.h>
int main()
{
	int n, bt[10],tat[10],wt[10],rt[10],ct,at[10];
	int smallest;
	int time;
	int count=0;
	int i;
	
	printf("Enter the number of process: \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("BT[%d] : \n",i+1);
		scanf("%d",&bt[i]);	
		rt[i] = bt[i];
	}
	
	for(i=0;i<n;i++)
	{
		printf("AT[%d] : \n",i+1);
		scanf("%d",&at[i]);	
	}
	
	printf("\n PID\t BT\t TAT\t WT\t \n");
	for(time=0;count!=n;time++)
	{
		smallest = -1;
		for(i=0;i<n;i++)
		{
			if(at[i]<=time && rt[i] >0 && (smallest==-1||rt[i]<rt[smallest]))  
			{
				smallest = i;
			}
		}
		if(smallest==-1)
		{
			continue;
		}
		rt[smallest]--;
		if(rt[smallest]==0)
		{
			count++;
			ct= time+1;
			printf("\nP%d\t %d\t \t%d\t \t%d\t",smallest+1,ct-at[smallest],ct-bt[smallest]-at[smallest]);

		}
	}
}
