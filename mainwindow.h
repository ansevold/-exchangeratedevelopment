#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QGridLayout>
#include <QGraphicsView>
#include "scene.h"
#include "itemlist.h"

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
    QGridLayout *layout;
    QGraphicsView *gViev;
    Scene *scene;
    ItemList *itemList;
};

#endif // MAINWINDOW_H
