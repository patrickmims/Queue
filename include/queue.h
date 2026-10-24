#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h> 
#include <stdlib.h>

/* This is the header file for all things queue
 * */

// A function that returns generic memory.
/*
void *new_memory()
{
    void *memory = NULL;

    if((memory = malloc(sizeof(void *))) == NULL)
        exit(EXIT_FAILURE);

    return memory;
}
*/

typedef struct Node 
{
    int *data;
    struct Node *next; 
} queue_t;

void queue_array_init();
/*
int queue_array_insert_node();
int queue_array_peek();
void queue_array_delete();
void queue_array_display()
*/

#endif
