#include<stdlib.h>
#include<stdio.h>
int main()

{
	int finished[p];
	int safe[p];
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<p;j++)
		{
			need[i][j] = alloted[i][j]-max_need[i][j];
		}
	}
	
	
	for(int k=0;k<p;k++)
	{
		for(int i=0;i<p;k++)
		{
			int count =1;
			if(finished[i])==0){
				for(int j=0;j<p;j++)
				{
					if(need[i][j]>available[i][j])
					{
						count = 0;
						break;
					}
				}
			}
			
			if(count==1)
			{
				safe[index++;] = i;
				for(int m=0;m<n;m++)
				{
					available[i][m]+=alloted[i][m];
				}
				finished[i]=1;
			}
		}
	}
	int safe = 1;
	for(int i=0;i<p;i++)
	{
		if(finished[i]==0)
		{
			int safe = 0;
			break;
		}
	}
	
	if(safe!=0)
	safe 
	for(int i=0;i<p-1;i++)
	{
		printf("%d",safe_occ[i]);
	}
	printf("")
}
