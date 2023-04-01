#include"../header/lcs_size.h"



/*********************************************************************************************************************************/

int8_t lcsGetSize(int32_t *array, uint8_t arraySize, uint8_t *sizeofLCS)
{
    uint8_t index_i,count=0;
    int8_t status;
    status=insertionSort(array,arraySize);
    if(status==-2)
    {
        return -2;
    }
     if(status==-1)
    {
        return -1;
    }
    if(!status)
    {
        for(index_i=0;index_i<arraySize;index_i++)
    {
        if(array[index_i+1]-array[index_i]==1)
        {
            count++;
            if(*sizeofLCS<count)
            {
                *sizeofLCS=count+1;
            }
        }
        else
        {
            count=0;
        }
    }
    if(*sizeofLCS==0)
    {
        return -3;
    }
        return 0;
    }

}

