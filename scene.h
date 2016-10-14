#ifndef SCENE_H
#define SCENE_H
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include "item.h"


class Scene : public QGraphicsScene
{
public:
    Scene();
    void dragEnterEvent(QGraphicsSceneDragDropEvent *event);
};

#endif // SCENE_H
