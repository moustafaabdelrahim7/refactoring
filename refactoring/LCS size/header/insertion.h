#ifndef INSERTION_H_INCLUDED
#define INSERTION_H_INCLUDED
#include"std_types.h"
#include<stdio.h>
#include<stdlib.h>



/*********************************************************function prototypes*********************************************************************************/
/* Description:
 * - This function takes a reference to an array of integers
 * - Sorts the array in ascending order
 * - Using the insertion sort algorithm
 * Return:
 * - returns -1 if the array is empty
 * - returns -2 if the array size is 0 or >10
 * - returns 0 if sorting is done without errors
 */
int8_t insertionSort(int32_t *array, uint8_t arraySize);
/*************************************************************************************************************************************************************/
/* Description:
 * - This function takes a reference to an array of integers
 * - Prints all array elements
 * Return:
 * - Nothing to return
 */
void printArray(int32_t *array, uint8_t arraySize);
/******************************************************************************************************************************************************************/
#define max_size 100


#endif // INSERTION_H_INCLUDED
