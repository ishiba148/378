#include <stdio.h>

int main()
{
    int Tamaki, Koizumi, Sinba;
    
    Tamaki = 55;
    Koizumi = 39;
    Sinba = 57;
    
    if (Tamaki == 55)
        printf("玉木代表は55歳です\n");
    if (Koizumi != 55)
        printf("小泉高松市観光大使は55歳ではありません\n");
    if (Koizumi < 55)
        printf("小泉高松市観光大使は55歳未満です\n");
    if (Sinba >= 55)
        printf("榛葉幹事長は55歳以上です\n");
        
    if (Tamaki > Koizumi)
        printf("玉木代表は小泉高松市観光大使より年上です\n");
    if (Tamaki < Sinba)
        printf("玉木代表は榛葉幹事長より年下です\n");

    return 0;
}