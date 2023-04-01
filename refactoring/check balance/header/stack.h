#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include"std_types.h"
#define STACK_SIZE 100

/***********************GLOBAL VARIABLES******************************************/

typedef struct stack {
    uint8_t elements[STACK_SIZE];
    int8_t top;
} ST_stack_t;

ST_stack_t new_stak;
/********************FUNCTION PROTOTYPES******************************************/
void createEmptyStack(ST_stack_t *stack);
int8_t push(ST_stack_t *stack, uint8_t data);
int8_t pop(ST_stack_t *stack, uint8_t *data);
int8_t printStack(ST_stack_t *stack);
int8_t getStackTop(ST_stack_t *stack, uint8_t *topData);
int8_t isFull(ST_stack_t *stack);
int8_t isEmpty(ST_stack_t *stack);

#endif // STACK_H_INCLUDED
