#ifndef NODE_H
#define NODE_H

#ifndef COMMON_DEF_H
#include "common_def.h"
#endif

typedef struct Node
{
    /* data */
    ElemType data;

    struct Node *next;
} Node;

#endif // NODE_H
