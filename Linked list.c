#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
int main(){
    struct tnode{
        int x;
        struct tnode *next;
    };
    struct tnode *head=NULL,*curr=NULL, *node=NULL;
    int i, p;
    printf("Inputkan Angka: ");
    scanf("%d", &p);
    for (i=0; i<p; i++){
        node = (struct tnode *)malloc (sizeof(struct tnode));
        node -> x = i;
        printf("Inputkan nilai %d: ", i+1);
        scanf("%d", &node->x);
        node->next = NULL;
        if (head == NULL){
            head = node;
            curr = node;
        } else {
            curr -> next = node;
            curr = node;
        }
    }
    curr -> next = NULL;
    curr = head;
    printf("Result Linked list: ");
    while (curr != NULL){
        printf("%d", curr -> x);
        curr = curr -> next;
    }
    printf("\n");
}
