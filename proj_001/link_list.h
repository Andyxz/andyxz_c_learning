#ifndef LINK_LIST_H
#define LINK_LIST_H

#ifndef NODE_H
#include "node.h"
#endif

typedef Node * LinkList;

void CreateListHead(LinkList *L, int n);
void CreateListTail(LinkList *L, int n);


#endif // LINK_LIST_H