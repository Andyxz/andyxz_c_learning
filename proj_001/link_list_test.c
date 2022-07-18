#include <stdlib.h>
#include <stdio.h>

#ifndef LINK_LIST_H
#include "link_list.h"
#endif

void testCreateListHead()
{
    LinkList l,c,f;
    int i = 0;
    CreateListHead(&l, 10);
    c = l->next;
    while(c) {
        printf("[%d]:%d \n",i++,c->data);
        f = c;
        c = c->next;
        free(f);
    }
    printf("***\n");


}

void testCreateListTail()
{
    LinkList l,c,f;
    int i = 0;
    CreateListTail(&l, 10);
    c = l->next;
    while(c) {
        printf("[%d]:%d \n",i++,c->data);
        f = c;
        c = c->next;
        free(f);
    }
    printf("***\n");


}

int main()
{
    testCreateListHead();
    testCreateListTail();
    return 0;

}