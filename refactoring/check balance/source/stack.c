#include"../header/stack.h"



/********************************************create empty stack************************************************************************************************/
/* Description:
 * - This function takes a reference to a stacks type
 * - Initialize this stack with Zeros
 * - Initialize the top with -1
 * Return:
 * - Nothing to return
 */
void createEmptyStack(ST_stack_t *stack)
{
     stack->top=-1;
    for(uint8_t index_i=0;index_i<STACK_SIZE;index_i++)
    {
        stack->elements[index_i]=0;
    }
}

/*********************************************push to stack****************************************************************************************************/


/* Description:
 * - This function takes a reference to the stack and data to store
 * - Stores the data passed into the stack
 * Return:
 * - returns -1 if the stack is full
 * - returns 0 otherwise
 */
 int8_t push(ST_stack_t *stack, uint8_t data)
 {
     if(isFull(stack))
     {
         return -1;
     }
        stack->top++;
         stack->elements[stack->top]=data;
         return 0;
 }


 /************************************pop from stack*********************************************************************************************************/

 /* Description:
 * - This function takes a reference to the stack
 * - Stores the data popped from the stack in a data variable
 * Return:
 * - returns -2 if the stack is empty
 * - returns 0 otherwise
 */
 int8_t pop(ST_stack_t *stack, uint8_t *data)
 {
     if(isEmpty(stack))
     {
         return -2;
     }
     else
      *data = stack->elements[stack->top];
      stack->top--;
       return 0;

 }

 /******************************************************print stack*****************************************************************************************/

 /* Description:
 * - This function takes a reference to the stack
 * - Prints all stack's data starting from the top
 * Return:
 * - returns -1 if the stack is full
 * - returns -2 if the stack is empty
 * - returns 0 otherwise
 */
 int8_t printStack(ST_stack_t *stack)
 {
     if(isFull(stack)==-1)
     {
         return -1;
     }
    if(isEmpty(stack))
     {
         return -2;
     }
    for(uint8_t index_i=stack->top+1;index_i>=1;index_i--)
       {
             printf("%d\n",stack->elements[index_i-1]);

    }

         return 0;

 }

 /********************************************************get stack top*****************************************************************************************/

 /* Description:
 * - This function takes a reference to the stack
 * - Stores its top data into a variable
 * Return:
 * - returns -2 if the stack is empty
 * - 0 otherwise
 */
int8_t getStackTop(ST_stack_t *stack, uint8_t *topData)
{
    if(isEmpty(stack))
    {
    return -2;

    }
    else
        *topData=stack->elements[stack->top];
        return 0;

}

/*********************************************************is full check*********************************************************************************/


/* Description:
 * - This function takes a reference to the stack
 * - Checks if the stack is full or not
 * Return:
 * - returns -1 if the stack is full
 * - 0 otherwise
 */
int8_t isFull(ST_stack_t *stack)
{
    if(stack->top==STACK_SIZE-1)
    {
        return -1;
    }
    else

        return 0;

}

/*********************************************************is empty check********************************************************************************/

/* Description:
 * - This function takes a reference to the stack
 * - Checks if the stack is empty or not
 * Return:
 * - returns -2 if the stack is empty
 * - 0 otherwise
 */
int8_t isEmpty(ST_stack_t *stack)
{
    if(stack->top==-1)
    {
        return -2;
    }
    else

        return 0;


}

/******************************************************************************************************************************************************/
