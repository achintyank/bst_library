#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct bst_node_struct {
    int data;
    struct bst_node_struct* lchild;
    struct bst_node_struct* rchild;
    struct bst_node_struct* parent;
} bst_node;

bst_node* bst_init(bst_node** head);
void bst_add(bst_node** head, bst_node* ptr);

bool bst_check(bst_node* check_node, bst_node* current_node);