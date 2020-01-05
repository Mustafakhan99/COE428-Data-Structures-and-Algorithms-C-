#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int);

int main(int argc, char * argv[])
{
  
  int ch,r;	
  ch=0;
  int last=0;
  int popped=0;
  int nums[256]={0};
  
  while ((ch = getchar()) != EOF) {
    if (!(isalpha(ch) || ch == '>' || ch == '<' || ch == '/')){
      continue;
    
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
printf("Valid.");
}
else
{
printf("Invalid!");
}

for(r=0;r<256;r++)
{
	if(nums[r] != 0)
	{
	printf("%c : %d\n",r,nums[r] 
	}
}
  exit(0);
}
