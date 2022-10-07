#include <stdio.h>
#include <assert.h>

int max(int* numbers, int size)
{
    assert(size > 0);
    int temp = 0;
    for(int i = 0; i < size; i++)
    {
        if (numbers[i] > temp)
            temp = numbers[i];
    }
    printf("%d", temp);

    return temp;
}
