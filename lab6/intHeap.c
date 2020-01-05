#include <stdio.h>
#include <stdlib.h>
#include <tgmath.h>
#include <ctype.h>
extern int pop();
extern void push(int);
/**
 *  The functions in this module implement a Heapdata structure
 *  of integers.
 */


/**
 * heapDelete() removes the biggest integer in the heap and returns it.
 *
 */
static int sizeOf = 0;
int heap[100];
int holder[100];

void addHeap(int thing2add)
{
    heap[sizeOf]= thing2add;
    sizeOf=sizeOf+1;


}

int heapDelete()
{
 int x;

 int temp1=sizeOf;
    int temp2=heap[1];
 for(x=0;x<temp1-1;x++)
 {
     holder[x]=heap[x+2];

 }
sizeOf=0;
 for(x=0;x < 100; x++)
 {
    heap[x]=0;
 }
 for(x=0;x<temp1;x++)
 {
     addHeap(holder[x]);
 }
  return temp2;  //A dummy return statement
}

/**
 *  addHeap(thing2add) adds the "thing2add" to the Heap.
 *
 */


/**
 * heapSize() returns the number of items in the Heap.
 *
 */
int heapSize()
{

    return sizeOf;

}
void printTree (int value)
{
    int r=value;

   while(r<=sizeOf) {
        printf("<Node id - \"%d\">", heap[r]);
       if (r * 2 + 1 <= sizeOf){
           printTree(r * 2);
       }
       if(r*2+1 <=sizeOf) {
           printTree(r * 2 + 1);
       }
       r=sizeOf+1;
   }
   printf("<node> ");
}