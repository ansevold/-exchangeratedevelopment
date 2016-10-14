#include "scene.h"
#include <QDebug>

Scene::Scene()
{

}

void Scene::dragEnterEvent(QGraphicsSceneDragDropEvent *event)
{
    if(!event->buttons() == Qt::LeftButton){
        Item *item = new Item;
        item->setPos(event->scenePos());
        item->setDragable(true);
        addItem(item);
    }

}
