#include <stdio.h>

int main(void)
{
    int a, b;
    
    printf("２つの数字を入力してください");
    scanf("%d %d", &a, &b);
    
    if(a>b)
    {
        printf("%dは%dより%d大きい\n", a, b, a-b);
    }
    else if(b>a)
    {
        printf("%dは%dより%d大きい\n", b, a, b-a);
    }
    else
    {
        printf("%dと%dは等しい\n", a, b);
    }

    return 0;
}