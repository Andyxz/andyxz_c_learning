#include <stdlib.h>
#include <time.h>

#ifndef LINK_LIST_H
#include "link_list.h"
#endif

void CreateListHead(LinkList *L, int n) 
{
    LinkList p;
    int i;

    srand(time(0));

    *L = (LinkList)malloc(sizeof(Node));
    (*L)->next = NULL;

    for (i = 0; i < n; ++i) {
        p = (LinkList)malloc(sizeof(Node));
        p->data = rand() % 100 + 1;
        p->next = (*L)->next;
        (*L)->next = p;
    }
}

void CreateListTail(LinkList *L, int n) 
{
    LinkList p, r;
    int i;
    
    srand(time(0));

    *L = (LinkList)malloc(sizeof(Node));
    (*L)->next = NULL;
    r = (*L);

    for (i = 0; i < n; ++i) {
        p = (LinkList)malloc(sizeof(Node));
        p->data = rand() % 100 + 1;
        p->next = NULL;
        r->next = p;
        r = p;        
    }
}

Status ClearList(LinkList *L)
{
    if (NULL == L) {
        return ERROR;
    }
    
    LinkList p,q;
    p = (*L)->next;
    while (p)
    {
        q = p;
        p = p->next;
        free(q);
    }
    (*L)->next = NULL;
    return OK;
}



