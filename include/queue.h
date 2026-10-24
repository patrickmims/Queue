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
#define INDEX_SIZE 10

// Queue
int *que_init(const int);
void que_insert(int *, const int);
int que_peek(int *);
int que_peek_last(int *);
static int que_size(int *);
static void que_display(int *);

int que_preview(int *, int);

static void *enque(int *);
static void *deque(int *);

static int *que_set_front(int);
static int *que_set_rear(int);

#endif
