#include <stdio.h>
#define merge(a, b) a##b
#define get(a) #a
#define PRINT(i, limit)                  \
    while (i < limit)                    \
    {                                    \
        printf("%d -> GeeksQuiz \n", i); \
        i++;                             \
    }

int main()
{
    printf("%d \n", merge(12, 34));  // 1234
    printf("%s \n", get(GeeksQuiz)); // GeeksQuiz
    int i = 0;
    PRINT(i, 3);
    return 0;
}