#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
{
    layout = new QGridLayout;
    this->setLayout(layout);

    this->resize(640, 640);
    this->setFixedSize(640, 640);

    gViev = new QGraphicsView;
    scene = new Scene;
    scene->setSceneRect(0, 0, 503, 616);
    gViev->setScene(scene);
    layout->addWidget(gViev, 1, 2);

    itemList = new ItemList;
    layout->addWidget(itemList, 1, 1);
}

MainWindow::~MainWindow()
{

}
