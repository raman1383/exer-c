#include <stdio.h>
/* count characters in input; 1st version */
main()
{
    long nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);
}