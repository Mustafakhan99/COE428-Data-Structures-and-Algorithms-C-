#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
extern int pop();
extern void push(int);
extern int getSize();
extern int heapSize();
extern int heapDelete();
extern void addHeap(int);
extern void printTree(int);
extern void sortHeap(int);

int main(int argc, char * argv[])
{
  int value;
  int counter;
  int r;
  int removal;
  while (scanf("%d\n", &value) != EOF) {
      fprintf(stderr,"READING INPUT: %d\n", value);
      //CREATE HEAP AND STACK FROM LECTURE NOTES
      counter = counter + 1;
      addHeap(value);
  }
  printTree(1);
  printf("\n");
  counter=heapSize();
  for(r=0;r<counter;r++)
  {
      removal=heapDelete();
      push(removal);
      printf("%d \n", removal);

  }
  for(r=0;r<counter;r++)
  {
      printf("%d \n", pop());
  }
  exit(0);
}
