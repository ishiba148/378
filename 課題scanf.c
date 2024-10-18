#include <stdio.h>

int main() {
    int c,j,k;
    
    printf("How many comedians?");
    scanf("%d", &c);
    
    printf("How many judges?");
    scanf("%d", &j);
    
    k = c + j;
    
    printf("The total number of comedians and judges is %d\n", k);
    
    return 0;
}
