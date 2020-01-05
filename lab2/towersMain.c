#include <stdlib.h>
#include "towers.h"
#include <stdio.h>
int main(int argc, char **argv)
{
    int placeHolder;
    int n = 3;
    int from = 1;
    int dest = 2;
if(argc>0)
{
    if (argc == 2)
{
n=atoi(argv[1]);


}
   
   else if (argc >= 3) {
        n = atoi(argv[1]);
     from=atoi(argv[2]);
     placeHolder=atoi(argv[3]);
    if(placeHolder!=from)
{
dest=placeHolder;
}
}
}
else
{
fprintf(stderr,"Invalid input!");
exit(0);
}

    
    towers(n, from, dest);
    exit(0);
}
