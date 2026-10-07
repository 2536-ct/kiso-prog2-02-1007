#include <stdio.h>

int main(void)
{
    int n = 25;
    printf("%s\n", (n % 2 == 0) ? "偶数" : "奇数");
    return 0;
}