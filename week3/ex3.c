#include <stdio.h>
struct node {
    int val;
    struct node* next;
};

struct linked_list {
    struct node *first;
};

void print_list(struct linked_list d){
     struct node* z = d.first;
     while (z != NULL){
         printf("%d \n", z->val);
         z = z->next;
     }
}

void insert_node(struct linked_list d, int a, int c){
    struct node* z = d.first;
    struct node cc;
    int h = c;
    cc.val = h;
    while (z != NULL){
        if (z->val == a){
            struct node* temp = z->next;
            z->next = &cc;
            cc.next = temp;
            break;
        }
        else{
            z = z->next;
        }
    }
}

void delete_node(struct linked_list d, int c){
    struct node* z = d.first;
    if(z->next->val == c){
        z->next = z->next->next;
    }
    else {
        *z = *z->next;
    }
}


int main(){
    struct node a;
    struct node b;
    struct node c;
    struct node d;
    struct node e;

    a.val = 12;
    a.next = &b;
    b.val = 1;
    b.next = &c;
    c.val = 34;
    c.next = NULL;

    struct linked_list lst;
    lst.first = &a;
    print_list(lst);
    printf("\n\n\n\n");

    delete_node(lst, 1);
    print_list(lst);
    printf("\n\n\n\n");

    insert_node(lst, 12, 256);
    print_list(lst);

    return 0;
}