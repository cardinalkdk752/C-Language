#include <stdio.h>
int main() {
    int option = 0;
    do {
        printf("1. Game Start\n");
        printf("2. How To Play\n");
        printf("3. Exit\n");
        printf("메뉴 선택 : ");
        scanf("%d", &option);
        switch (option) {
            case 1:
                printf("현재 구현되지 않은 기능입니다 다시 선택해주세요.\n");
                break;
            case 2:
                printf("게임 설명입니다.\n");
                do {
                    printf("Return to menu? (1. yes, 2. no) : ");
                    scanf("%d", &option);
                } while (option != 1 && option != 2);
                break;
            case 3:
                do {
                    printf("정말로 종료하시겠습니까?\n");
                    scanf("%d", &option);
                } while (option != 1, option != 4);
                break;
                return 0;
            case 4:
                printf("프로그램을 종료 합니다.\n");
                break;
        }
    } while (option != 4);
    return 0;
}

