#ifndef ITEMLIST_H
#define ITEMLIST_H
#include <QGraphicsView>
#include <QGraphicsScene>
#include "item.h"


class ItemList : public QGraphicsView
{
public:
    ItemList();

private:
    QGraphicsScene *gs;
    Item *itemR;
};


#endif // ITEMLIST_H
