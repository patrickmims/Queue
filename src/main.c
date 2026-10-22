#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cs.h" 
#include "queue.h"

int main(int argc, char **argv )
{
    // queue_t *queue = (queue_t *)memory();
    unsigned int *queue = que_init(10); // <= set the size of the queue.

    // insert items into the queue
    que_insert(queue, 892);

    printf("\npeek -> [ %d ]\n", que_peek(queue));

    que_insert(queue, 100);
    que_insert(queue, 200);
    que_insert(queue, 300);
    que_insert(queue, 400);
    que_insert(queue, 500);
    que_insert(queue, 600);
    que_insert(queue, 700);

    return 0;
}
