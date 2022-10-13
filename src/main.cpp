#include <stdlib.h>
#include <stdio.h>


// File for sandboxing and trying out code
extern "C"{
    #include "list.h"
}
int main(int argc, char **argv)
{
    node *l = (node *) malloc(sizeof(node));
    l->next=NULL;
    add(l,15);
    largest(l);
    printf("%d\n", largest(l));
    return 0;
}