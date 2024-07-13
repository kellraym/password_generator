#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int x;
    char ch[4];
    char limits[4] = { '!', 'a', 'A' };
    const int length = 20;

    srand((unsigned) time(NULL));

    for (x = 0; x < length; x++)
    {
        ch[0] = rand() % ('~' - '!' + 1);
        ch[1] = rand() % ('z' - 'a' + 1);
        ch[2] = rand() % ('Z' - 'A' + 1);
        int temp = rand() % 3;

        putchar(ch[temp] + limits[temp]);
    }
    putchar('\n');

    return 0;
}