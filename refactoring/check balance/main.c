#include"header/paranthethes.h"




/************************************************************main************************************************************************************/
void main (void)
{
    /******************for check balance***********************/
   int8_t returns_status;
   createEmptyStack(&new_stak);
   uint8_t poped_data,top_data;

    int8_t expression[30];
    printf("please Enter a string: ");
    fgets(expression, sizeof(expression), stdin);
    returns_status = isBalancedParanthethes(&expression);
         if (returns_status == -1) {
            printf("unbalanced expression\n");
        }
        else if (returns_status == -2)
         {
            printf("no paranthethes\n");
        }
        else
        {
            printf("expression is balanced\n");
        }

        /*******************for stack*******************/

/*************************************************/
createEmptyStack(&new_stak);
printf("pushing 5 different elements to stack\n");
push(&new_stak,50);
push(&new_stak,40);
push(&new_stak,30);
push(&new_stak,20);
push(&new_stak,10);
printStack(&new_stak);
/***************************************************/
printf("\npoping one element\n");
pop(&new_stak,&poped_data);
printStack(&new_stak);
/**************************************************/
getStackTop(&new_stak,&top_data);
printf("\n printing the stack top:\n%d",top_data);
/**************************************************/
printf("\n printing all stack elements\n");
printStack(&new_stak);
/*************************************************/
printf("pushing 7 different elements to stack\n");
push(&new_stak,70);
push(&new_stak,69);
push(&new_stak,68);
push(&new_stak,67);
push(&new_stak,66);
push(&new_stak,65);
push(&new_stak,64);
printStack(&new_stak);
/***********************************************/
getStackTop(&new_stak,&top_data);
printf("\n printing the stack top:\n%d",top_data);
/*************************************************/
printf("\n printing all stack elements\n");
printStack(&new_stak);
/*************************************************/
printf("\npoping four element\n");
pop(&new_stak,&poped_data);
pop(&new_stak,&poped_data);
pop(&new_stak,&poped_data);
pop(&new_stak,&poped_data);
/**************************************************/
getStackTop(&new_stak,&top_data);
printf("\n printing the stack top:\n%d",top_data);
/*************************************************/
printf("\n printing all stack elements\n");
printStack(&new_stak);
/***********************************************/
printf("\npoping seven element\n");
pop(&new_stak,&poped_data);
pop(&new_stak,&poped_data);
pop(&new_stak,&poped_data);
pop(&new_stak,&poped_data);
pop(&new_stak,&poped_data);
pop(&new_stak,&poped_data);
pop(&new_stak,&poped_data);
/**************************************************/
printf("\n printing the stack top");
getStackTop(&new_stak,&top_data);
if (getStackTop(&new_stak,&top_data))
    printf("\nstack top equal to %d\n",new_stak.top);
else
    printf("\n printing the stack top:\n%d",top_data);
/****************************************************/
printf("\n printing all stack elements\n");

if(printStack(&new_stak))
    printf("\n stack is empty\n");
}



