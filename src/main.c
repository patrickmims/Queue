#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "munit.h"
#include "queue.h"

int main(int argc, char **argv)
{
    const int array_size = 10;
    int i = 0;

    munit_assert_int(array_size, ==, 10);

    unsigned int *queue = que_init(10); // <= set the size of the queue.

    que_insert(queue, 892);

    printf("\npeek -> [ %d ]\n", que_peek(queue));

    do
    {
        que_insert(queue, (i * 12));
        i++;
    } while(i < (array_size - 1)); // one was added above, was causing overflow

    return 0;
}
