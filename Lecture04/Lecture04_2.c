#include <stdio.h>

int main()
{
	int sleep_time = 0;
	scanf("%d", &sleep_time);
	if(sleep_time)
	{
		printf("현재 졸림 정도 : %d%%",sleep_time);
	}
	else
	{
		printf("졸리다");
	}
	return 0;
}




