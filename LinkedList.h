#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _Node
{
    int value;
    struct _Node *next;

}
Node;

typedef struct _List
{
    Node *first, *last;
}
List;

List *list_new();

void list_print(List *list);

void list_free(List *list);

void list_insert(List *list, int value);

int head(List *list);

typedef Node* Iterator;

Iterator list_begin(List *list);

Iterator list_end(List *list);

Iterator list_next(List *list);

int iterator_get(Iterator i);

void iterator_set(Iterator i, int value);
#ifdef __cplusplus
}
#endif

#endif /* LINKEDLIST_H */
