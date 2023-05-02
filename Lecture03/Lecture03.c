#include <stdio.h>

int main()
{
	int Game_State = 0;

	printf("4월에 볼 애니 갯수를 입력하세요 : ");
	scanf("%d",&Game_State);
	if(Game_State)
	{
		printf("볼애니 갯수: %d개야" , Game_State);
	}
	else
	{
		printf("그래도 4월까지 존버 ㄱㄱ");
	}
	int a = 0;
	return 0;
}	
