#include "mainwindow.h"
#include "ui_mainwindow.h"

/* Функция для получения рандомного числа
 * в диапазоне от минимального до максимального
 * */
static int randomBetween(int low, int high)
{
    return (qrand() % ((high + 1) - low) + low);
}
MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Косметическая подготовка приложения
    this->resize(640,640);          // Устанавливаем размеры окна приложения
    this->setFixedSize(640,640);

    scene = new QGraphicsScene(this);   // Инициализируем графическую сцену
    scene->setItemIndexMethod(QGraphicsScene::NoIndex); // настраиваем индексацию элементов

    ui->graphicsView->resize(600,600);  // Устанавливаем размер graphicsView
    ui->graphicsView->setScene(scene);  // Устанавливаем графическую сцену в graphicsView
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);    // Настраиваем рендер
    ui->graphicsView->setCacheMode(QGraphicsView::CacheBackground); // Кэш фона
    ui->graphicsView->setViewportUpdateMode(QGraphicsView::BoundingRectViewportUpdate);

    scene->setSceneRect(0,0,500,500); // Устанавлвиваем размер сцены
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    MoveItem *item = new MoveItem();        // Создаём графический элемента
    item->setPos(randomBetween(30, 470),    // Устанавлвиваем случайную позицию элемента
                 randomBetween(30,470));
    scene->addItem(item);   // Добавляем элемент на графическую сцену
}
