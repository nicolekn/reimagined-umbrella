#ifndef STOCKITEM_H
#define STOCKITEM_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct StockItemStruct StockItem;

const char * getType(const StockItem *i);

const char * getCode(const StockItem *i);

int getStock(const StockItem *i);

double getPrice(const StockItem *i);



#ifdef __cplusplus
}
#endif

#endif /* STOCKITEM_H */
