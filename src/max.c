#include <stdio.h>
#include <assert.h>

int max(int* numbers, int size)
{
//if statement to make sure that size is higher than 0, as stated in precondition//
int x = numbers[0];
assert(size > 0);
//Counter to find the highest number in the array//
for (int c=0; c < size; c++)
{
    if (numbers[c] > x)
        x = numbers[c];
}
    return x;
}
