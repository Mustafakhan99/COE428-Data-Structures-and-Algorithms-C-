#include <stdlib.h>
#include <stdio.h> 


/* Muhammad's State Machine
A B H
B C A
C H E
D E C
E F B
F A D
G D F
H G H
Starting state is F */                

typedef struct State_machine{
char name;
int num;
int var;
struct State_machine* next_state_0;
struct State_machine* next_state_1;
} fsm;
fsm states[8];

void in_states(){
 
//A

states[0].number=0;
states[0].name='A';
states[0].next_state_0=states+1; // State B
states[0].next_state_1=states+8; // State H

//B

states[1].number=1;
states[1].name='B';
states[1].next_state_0=states+1; // State C
states[1].next_state_1=states-1; // State A

//C

states[2].number=2;
states[2].name='C';
states[2].next_state_0=states+5; // State H
states[2].next_state_1=states+2; // State E

//D

states[3].number=3;
states[3].name='D';
states[3].next_state_0=states+1; // State E
states[3].next_state_1=states-1; // State C

//E

states[4].number=4;
states[4].name='E';
states[4].next_state_0=states+1; // State F
states[4].next_state_1=states-3; // State B

//F
states[5].number=5;
states[5].name='F';
states[5].next_state_0=states-5; // State A
states[5].next_state_1=states-2; // State D

//G

states[6].number=6;
states[6].name='G';
states[6].next_state_0=states-3; // State D
states[6].next_state_1=states-1; // State F

//H

states[7].number=7;
states[7].name='H';
states[7].next_state_0=states-1; // State G
states[7].next_state_1=states+0; // State H

void printstates(){
  int i=0;
    for(i =0; i <8; i++){
		if(states[i].var!= 3){
fprintf(stdout, "%c %c %c\n", states[i].name, states[i].next_state_0->name, states[i].next_state_1->name);
		 }





int main(int argc, char * argv[])
{
    

int i=0;
int j;
char comm[3];

in_states();
fsm current_State= states[5]; //Starting at F
 fprintf(stdout, "Enter the commands without any spaces and hit q to quit the program. \n");
  fprintf(stdout, "Starting State: %c \n", current_State.name);
while(i!=1)
{
for(j=0;j<=4;j++)
scanf("%c,&comm[j]);
if (comm[j] == '\n')
{
printstates();
break():
}
}
//if user enters 0
if(comm[0] == '0')
{
fprintf(stdout, "%c\n",current_State.next_state_0->name);
		current_State = states[current_State.next_state_0->number];
	  }

//if user enters P
if(comm[0] == 'p')
{
printstates();
}
//if user enters 1
if(comm[0] == '1'){
fprintf(stdout, "%c\n",current_State.next_state_1->name);
		current_State = states[current_State.next_state_1->number];
	  }










exit(0);
}

