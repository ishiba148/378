#include <stdio.h>
#include <string.h>
#define MAX 50

int main() 
{
    char str[MAX];
    int j = 0, k = 0, l = 0;

    printf("Enter password: ");
    scanf("%s", str);

    if (strlen(str) < 8) 
    {
        printf("Password must be at least 8 characters long.\n");
    } 
    else 
    {
        for (int i = 0; str[i] != '\0'; i++) 
        {
            if (str[i] >= 'A' && str[i] <= 'Z') 
            {
                j = 1;
            } 
            if (str[i] >= 'a' && str[i] <= 'z') 
            {
                k = 1;
            } 
            if (str[i] >= '0' && str[i] <= '9') 
            {
                l = 1;
            }
        }

        if (j == 0) 
        {
            printf("Password must include an uppercase letter.\n");
        }
        if (k == 0) 
        {
            printf("Password must include a lowercase letter.\n");
        }
        if (l == 0) 
        {
            printf("Password must include a digit.\n");
        }
        
        if (j && k && l && strlen(str) >= 8) 
        {
            printf("Strong password.\n");
        }
    }

    return 0;
}
