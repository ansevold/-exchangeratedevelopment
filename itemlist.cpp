#include "itemlist.h"

ItemList::ItemList()
{
    gs = new QGraphicsScene;
    gs->setSceneRect(0, 0, 70, 610);

    Item *item = new Item;
    item->setPos(35, 40);
    gs->addItem(item);

    this->resize(640, 90);
    this->setFixedSize(90, 618);
    this->setScene(gs);

}
