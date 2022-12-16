#include <stdio.h>
#include <malloc.h>
#include <unistd.h>
#include <string.h>

typedef struct s_stack{
    char data;
    struct s_stack *next;
}bj_stack;

bj_stack *create_node(char data);
void push(bj_stack **stack,char data);
void pop(bj_stack **stack);

