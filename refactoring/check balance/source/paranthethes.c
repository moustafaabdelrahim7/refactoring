#include"../header/paranthethes.h"



/*****************************************************is balanced**********************************************************************************/

/* Description:
 * - This function takes an expression array max 10 characters
 * - Checks if the parentheses are balanced or not
 * - Checks the following parentheses types {, }, (, ) only
 * Return:
 * - returns -2 if the neither of paranthethes is used
 * - returns -1 if the parentheses are not balanced
 * - returns 0 if the parentheses are balanced
 */
int8_t isBalancedParanthethes(uint8_t *expression)
{
    uint8_t index_i;
     uint8_t poped_data;

    for (index_i = 0; expression[index_i]; index_i++)
        {
    if (expression[index_i] == '{' || expression[index_i] == '(')
        {
            push(&new_stak, expression[index_i]);
        }
    else if (expression[index_i] == '}' || expression[index_i] == ')')
        {
          if (new_stak.top == -1)
             {
            return -1;
              }

             pop(&new_stak,&poped_data );

           if (expression[index_i] == '}' && poped_data != '{')
               {
                return -1;
               }
         else if(expression[index_i] == ')' && poped_data != '(')
                {
                 return -1;
                 }
          }

        }

    if (!new_stak.top)
        {
        return -1;
    }
    else if (poped_data == '\0')
        {
        return -2;
        }
    else
        {
     return 0;
        }



}

