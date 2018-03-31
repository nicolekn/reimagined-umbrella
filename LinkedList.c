#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "LinkedList.h"

List *list_new()
{
    List *new =(List*)malloc(sizeof(List));

    new->first=NULL;
    new->last=NULL;
    return new;
}

void list_print( List *list)
{
    printf("(");
    for(Node *node =list ->first;node != NULL; node = node->next)
    {
        printf(node->next==NULL? "%d" :"d%,", node->value);
    }
}


void list_insert(List *list, int value)
{
    Node *node= (Node*)malloc(sizeof(Node));

    node->value=value;
    node->next=list->first;

    if(list->last==NULL)
    {
        list->last=node;
    }
    list->first=node;
}

int head(List *list)
{
    int value = list->first->value;
    Node *node = list->first;
    list->first=list->first->next;
    if(list->first==NULL)
    {
        list->last==NULL;
    }
    free(node);
    return value;
}

Iterator list_begin(List *list)
{
    return list->first;
}

Iterator list_end(List *list)
{
    return NULL;
}

Iterator iterator_next(const Iterator i)
{
    return i-> next;
}

void list_free(List *list)
{
    while (list->first !=NULL)
    {
        Node* node = list->first;
        list->first = node->next;
        free(node);
    }
    
    list->last=NULL;
}
