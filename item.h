#ifndef ITEM_H
#define ITEM_H
#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QGraphicsSceneMouseEvent>
#include <QCursor>
#include <QDrag>
#include <QMimeData>

class Item : public QObject, public QGraphicsItem
{
public:
    Item(QObject *parent = 0);
    ~Item();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    void setDragable(bool);
    bool isDragable();
private:
    bool *dragable;
};

#endif // ITEM_H
