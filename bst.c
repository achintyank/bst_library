#include <stdio.h>
#include "bst.h"
#include <stdbool.h>

void bst_init(bst_node** head) {
    *head = NULL;
}

void bst_add(bst_node** current_node, bst_node* ptr, bst_node* parent_node) {
    if (*current_node == NULL) {
        *current_node = ptr;
        ptr->parent=parent_node;
    }
    else {
        if (ptr->data < (*current_node)->data) {
            bst_add(&(*current_node)->lchild, ptr, *current_node);
        }
        else {
            bst_add(&(*current_node)->rchild, ptr, *current_node);
        }
    }
}

bool bst_check(bst_node* check_node, bst_node* current_node) {
    return 0;
}