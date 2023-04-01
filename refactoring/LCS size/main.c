
#include"header/lcs_size.h"
/**************for insertion**********/

/*{
void main(void)
{
int32_t arr[max_size];
int8_t return_status;
uint8_t size_array;
printf("please enter your array size\n");

scanf("%d",&size_array);

printf("\nplease enter your array\n");

for(uint8_t i=0;i<size_array;i++)
{

    scanf("%d",&arr[i]);
}

if(size_array==0 || size_array>10)
{
    printf("\ninvalid size");
}

return_status=insertionSort(arr,size_array);
if(!return_status)
{
printf("\nthe new sorted array\n");
printArray(arr,size_array);
}

}

}*/
/*****************************for lcs*************************/



void main()
{

    int32_t arr[max_size];
uint8_t size_array;
uint8_t size_lcs=0;
uint8_t return_status;
printf("please enter your array size\n");


scanf("%d",&size_array);

printf("\nplease enter your array\n");

    for(uint8_t i=0;i<size_array;i++)
{

    scanf("%d",&arr[i]);
}
printArray(arr,size_array);
return_status=lcsGetSize(arr,size_array,&size_lcs);
if(return_status==-1)
{
    printf("\nan empty array\n");
}
if(return_status==-2)
{
    printf("\ninvalid size\n");
}
if(return_status==-3)
{
    printf("\nno consecution\n");
}
if(!return_status)
{
    printf("\nthe new sorted array\n");
    printArray(arr,size_array);
    printf("\nthe size of consecution is:%d",size_lcs);

}

}



