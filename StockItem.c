#include <stdio.h>
#include <string.h>
#include "StockItem.h"
typedef struct StockItemStruct {
    // component type, the stock code, the number of items in stock and the unit price in pence
    char type[30];
    char code[20];
    int number_in_stock;
    double price;
}
StockItem;

const char * getType(const StockItem *i)
{
    const char *t=type;
    return i->t;
}

const char * getCode(const StockItem *i)
{
    const char *c=code;
    return i->c;
}

int getStock(const StockItem *i)
{
    return i->number_in_stock;
}

double getPrice(const StockItem *i)
{
    return i->price;
}


