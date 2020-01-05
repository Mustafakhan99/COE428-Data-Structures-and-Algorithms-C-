#include "mySort.h"

#include "metrics.h"
void Merge(int array[], unsigned int first, unsigned int mid, unsigned int last)
    {
  
int temp[MAX_SIZE_N_TO_SORT]; 
int num1=0;
 int num2 = first;
 int num3= mid + 1;
while ( num2 <= mid && num3 <= last)
{
if(myCompare(array[num2], array[last])<0)
temp[num1++] = array[num2++];
else
temp[num1++] = array[last++];
}
while(num2<=mid)
myCopy(&array[mid
++, &temp[num1++]);
for( num2=first, num1=0; num2<= last; num2++, num1++)
mySwap(&array[num2], &temp[num1]);
}

void mySort(int array[], unsigned int first,  unsigned int last)
{
int mid;
mid=0;
if(first <last)
{
mid=(first + last)/2;
mySort(array,first,mid);
mySort(array,mid+1,last);
Merge(array,first,mid,last);
}
}
