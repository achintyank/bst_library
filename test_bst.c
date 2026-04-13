#include <stdio.h>
#include <stdbool.h>

#include "bst.h"




int main(void) {

    // node declaration
    bst_node* head;
    bst_node* node1 = malloc(sizeof(bst_node));
    bst_node* node2 = malloc(sizeof(bst_node));

    bst_init(&head);
    bst_add(&head, node1,NULL);
}