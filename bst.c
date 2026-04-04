#include <stdio.h>
#include "bst.h"
#include <stdbool.h>

bst_node* bst_init(bst_node** head) {
    head = NULL;
}

void bst_add(bst_node** head, bst_node* ptr) {
    if (head == NULL) {

        head = &ptr;
    }
    else {

        bst_node* current = *head;

        do {
            bool greater = bst_check(current, ptr);

            if (greater) {
                current = current->rchild;
            }
            else {
                current = current->lchild;
            } // trying to implement adding a node by sorting it based on its value 
              // bstcheck()

        } while (current->rchild != NULL && current->lchild != NULL);
    }
}

bool bst_check(bst_node* check_node, bst_node* current_node) {
    int check_data = check_node->data;
    int current_data = current_node->data;

    if (current_data > check_data) {
        return true;
    } 
    else {
        return false;
    }
}