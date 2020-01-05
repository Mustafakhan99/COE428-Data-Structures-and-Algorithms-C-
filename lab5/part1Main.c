#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int);

int main(int argc, char * argv[])
{
  int ch;	
  ch=0;
  int last=0;
  int popped=0;
  while ((ch = getchar()) != EOF) {
    if (!(isalpha(ch) || ch == '>' || ch == '<' || ch == '/')){
      continue;
    //
    }
   
	if(isalpha(ch)
       {
     if(last == '<' ){
        push(ch);
	}
        
	if(last == '/'){
	popped=pop();
	if(popped != ch){
	printf("Error: Invalid!");
	return;
	}
	}
	}
last=ch;
}
popped= pop();
 if(popped == -1)
{
printf("Valid.\n");
}
else
{
printf("Invalid!");
}

	
  exit(0);
}
