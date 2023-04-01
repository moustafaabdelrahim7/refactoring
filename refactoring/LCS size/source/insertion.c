#include"../header/insertion.h"

/***********************************************func implementation**************************************************************************************/

int8_t insertionSort(int32_t *array,uint8_t arraySize)
{
    int i, key, j;
    if(arraySize==0 || arraySize>10)
    {
        return -2;
    }
    else
    {
        for (i = 1; i < arraySize; i++)
         {
        key = array[i];
        j = i - 1;

        while (j >= 0 && array[j] > key)
            {
            array[j + 1] = array[j];
            j = j - 1;
            }
        array[j + 1] = key;
          }
          return 0;
    }

}
/***********************************************************************************************************************************************/

void printArray(int32_t *array, uint8_t arraySize)
{
    for(uint8_t index_i=0;index_i<arraySize;index_i++)
    printf("%d\t",array[index_i]);
}

/*********************************************************************************************************************************/

