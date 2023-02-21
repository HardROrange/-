#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	
	int red[6] = {},blue = rand()%16+1;
	
	for(int i = 0,j; i<6; )
	{
		red[i] = rand()%33+1;
		for(j=0; j<i; j++)
		{
			if(red[i] == red[j])
			{
				break;	
			}
		}
		if(j == i)
		{
			i++;
		}
	}
	
	printf("请输入一组双色球号码:");
	int ret[7] = {},cnt = 0;
	for(int i=0; i<6; i++)
	{
		scanf("%d",&ret[i]);
		for(int j=0; j<6; j++)
		{
			if(red[j] == ret[i])
			{
				cnt++;
				break;
			}
		}
	}
	scanf("%d",&ret[6]);
	if(6 == cnt && blue == ret[6])
	{
		printf("一等奖\n");
	}
	else if(6 == cnt)
	{
		printf("二等奖\n");
	}
	else if(5 == cnt && blue == ret[6])
	{
		printf("三等奖\n");
	}
	else if(5 == cnt || (4 == cnt && blue == ret[6]))
	{
		printf("四等奖\n");
	}
	else if(4 == cnt || (3 == cnt && blue == ret[6]))
	{
		printf("五等奖\n");
	}
	else if(blue == ret[6])
	{
		printf("六等奖\n");	
	} 
	else
	{
		printf("很遗憾G了\n"); 
	}
	printf("中奖号码为red:");
	for(int i=0; i<6; i++)
	{
		printf("%d ",red[i]);
	}
	printf("blue:%d\n",blue);
	
}
			



 





 

 
