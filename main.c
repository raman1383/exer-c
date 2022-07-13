#include <stdio.h>
#define merge(a, b) a##b
#define get(a) #a
#define PRINT(i, limit)                  \
    while (i < limit)                    \
    {                                    \
        printf("%d -> GeeksQuiz \n", i); \
        i++;                             \
    }
#define square(x) (x * x)
static inline int squareV2(int x) { return x * x; }

int main()
{
    printf("%d \n", merge(12, 34)); // 1234

    printf("%s \n", get(GeeksQuiz)); // GeeksQuiz

    int i = 0;
    PRINT(i, 3);

    int x = 36 / square(6);
    printf("%d", x);

    int x2 = 36 / squareV2(6);
    printf("%d", x2);

#if VERBOSE >= 2
    printf("Trace Message");
#endif

    printf("Current File :%s\n", __FILE__);
    printf("Current Date :%s\n", __DATE__);
    printf("Current Time :%s\n", __TIME__);
    printf("Line Number :%d\n", __LINE__);
    return 0;
}