#include <stdio.h>

int main(void)
{
    char small; // 小文字
    
    printf("アルファベットの小文字を入力してください>>>");
    scanf("%c", &small);
    
    printf("小文字は%c　大文字は%c\n", small, small-32);

    return 0;
}
