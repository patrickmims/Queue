#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h> 
#include <stdlib.h>

// A function that returns generic memory.
void *memory()
{
    void *memory = NULL;

    if((memory = malloc(sizeof(void *))) == NULL)
        exit(EXIT_FAILURE);

    return memory;
}

typedef struct Node 
{
    int *data;
    struct Node *next; 
} queue_t;

/*
void queue_init()
{
    queue_t q;
    queue_t *queue = NULL;
    queue_t *queue = &q;

    return queue;
}
*/

#endif
