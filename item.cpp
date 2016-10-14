#include "item.h"
#include <QDebug>

Item::Item(QObject *parent) :
    QObject(parent), QGraphicsItem()
{
    setAcceptDrops(true);
    dragable = new bool(false);

}

Item::~Item()
{

}

QRectF Item::boundingRect() const
{
    return QRectF (-30,-30,60,60);
}

void Item::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setPen(Qt::black);
    painter->setBrush(Qt::white);
    painter->drawRect(-30,-30,60,60);
    painter->drawText(0, 0, "text");
    Q_UNUSED(option);
    Q_UNUSED(widget);
}

void Item::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    if(!isDragable()){
        QDrag *drag = new QDrag(this);
        QMimeData *mimeData = new QMimeData;
        drag->setMimeData(mimeData);
        drag->start(Qt::MoveAction);
        drag->exec();
    }else{
        if(isDragable())
            this->setPos(mapToScene(event->pos()));

    }

}

void Item::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    setCursor(QCursor(Qt::ClosedHandCursor));
    Q_UNUSED(event);
}

void Item::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    setCursor(QCursor(Qt::ArrowCursor));
    Q_UNUSED(event);
}

void Item::setDragable(bool d)
{
    *dragable = d;
}

bool Item::isDragable()
{
    return *dragable;
}
