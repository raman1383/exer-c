#include <stdio.h>
void swap(int *px, int *py);
int main()
{
    int x = 11;
    int *px = &x;
    int y = 99;
    int *py = &y;

    swap(py, px);
    printf("x:%d  ,  y:%d", *px, *py);
}

void swap(int *px, int *py)
{
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
}