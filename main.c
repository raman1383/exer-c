#include <stdio.h>
#define merge(a, b) a##b
#define get(a) #a

int main()
{
    printf("%d", merge(12, 34));  // 1234
    printf("%s", get(GeeksQuiz)); // GeeksQuiz
    return 0;
}