/*
#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;

    printf("a 的值: %d\n", a); // 10
    printf("p 指向的值: %d\n", *p); // 10

    *p = 20;
    printf("修改後 a 的值: %d\n", a); // 20

    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = (int *)malloc(sizeof(int) * 5);

    for (int i = 0; i < 5; i++) {
        p[i] = i * 10;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", p[i]);
    }

    free(p);
    return 0;
}

*/

/*
typedef struct _NOTE {
    DATA data;
    _NODE *next;
}NOTE;

create a node
可以使用 malloc() 產生 node
理論上就是產生一個node 空間 , 空間為只給 head
next 指向 NULL

int main(void){
    NODE *head = NULL;
    head = (NODE *)mallod(1*sizeof(NOTE));

    head->data = INITIAL_DATA; // 最初的節點資料
    head->next = NULL;
}
*/

/*  insert a node 

void insertNode(struct Node* n, struct DATA datain){
    // create a space
    struct Node* insertptr = (struct Node*)malloc(sizeof(struct Node));

    // store data
    insertptr->data = datain;
    
    // if you insert  a node, previous node's next address have to be store to insterted node
    insertptr->next = n->next;
    
    // and previous node's next have to point to insert node
    n->next = insertptr;
}

int main(void){
    NODE *head = NULL;
    head = (NODE *)malloc(1*sizeof(NODE));

    head->data = INITIAL_DATA;
    head->next = NULL;

    insertNode(head, datain);
}
*/
