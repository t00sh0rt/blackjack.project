#include "blackjack_lib.h"


bj_stack *create_node(char data) {
    bj_stack *node = (bj_stack *)malloc(sizeof(bj_stack));

    if (node == NULL) {
        char *msg = "malloc error\n";
        write(2, msg, (int)strlen(msg));
        exit(1);
    }

    node->data = data;
    node->next = NULL;
    return node;
}

void push(bj_stack **stack,char data){
    bj_stack *new_node = create_node(data);
    new_node->next=*stack;
    *stack = new_node;
}

void pop(bj_stack **stack){
    bj_stack *tmp = *stack;
    *stack=tmp->next;
    free(tmp);
}