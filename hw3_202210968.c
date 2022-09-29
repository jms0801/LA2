
#include <stdio.h>
int main(void)
{
    int num, cnt, sp;
    int s = 4;
    for (num = 1; num <= 9; num = num + 2)
    {
        for (sp = s; sp >= 1; sp--)
        {
            printf(" ");
        }
        for (cnt = 1; cnt <= num; cnt++)
            printf("*");
        s--;
        printf("\n");
    }
    return 0;
}