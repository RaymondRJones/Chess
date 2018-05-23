#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    scene = new QGraphicsScene(this);
        ui->graphicsView->setScene(scene);

        QBrush whiteBrush(Qt::blue);
        QBrush blackbrush(Qt::black);
        QPen outlinePen(Qt::black);
        outlinePen.setWidth(2);

        rectangle = scene->addRect(1, -2, 8, 8, outlinePen, whiteBrush);
        rectangle = scene->addRect(3, -2, 8, 8, outlinePen, whiteBrush);
        rectangle = scene->addRect(5, -2, 8, 8, outlinePen, whiteBrush);
        rectangle = scene->addRect(7, -2, 8, 8, outlinePen, whiteBrush);
        rectangle = scene->addRect(9, -2, 8, 8, outlinePen, whiteBrush);
        rectangle = scene->addRect(11, -2, 8, 8, outlinePen, whiteBrush);
        rectangle = scene->addRect(13, -2, 8, 8, outlinePen, whiteBrush);
        rectangle = scene->addRect(15, -2, 8, 8, outlinePen, whiteBrush);

        rectangle = scene->addRect(17, -4, 8, 8, outlinePen, whiteBrush);
        rectangle = scene->addRect(8, -4, 8, 8, outlinePen, whiteBrush);
        rectangle = scene->addRect(8, -4, 8, 8, outlinePen, whiteBrush);
        rectangle = scene->addRect(8, -4, 8, 8, outlinePen, whiteBrush);
        rectangle = scene->addRect(8, -4, 8, 8, outlinePen, whiteBrush);
        rectangle = scene->addRect(8, -4, 8, 8, outlinePen, whiteBrush);
        rectangle = scene->addRect(8, -4, 8, 8, outlinePen, whiteBrush);
        rectangle = scene->addRect(8, -4, 8, 8, outlinePen, whiteBrush);

        rectangle = scene->addRect(8, -6, 8, 8, outlinePen, whiteBrush);
        rectangle = scene->addRect(8, -6, 8, 8, outlinePen, whiteBrush);
        rectangle = scene->addRect(8, -6, 8, 8, outlinePen, whiteBrush);
        rectangle = scene->addRect(8, -6, 8, 8, outlinePen, whiteBrush);
        rectangle = scene->addRect(8, -6, 8, 8, outlinePen, whiteBrush);
        rectangle = scene->addRect(8, -6, 8, 8, outlinePen, whiteBrush);
        rectangle = scene->addRect(8, -6, 8, 8, outlinePen, whiteBrush);

        rectangle = scene->addRect(8,-6, 8, 8, outlinePen, whiteBrush);
        rectangle = scene->addRect(8, -6, 8, 8, outlinePen, whiteBrush);
        rectangle = scene->addRect(8, -6, 8, 8, outlinePen, whiteBrush);
        rectangle = scene->addRect(8, -6, 8, 8, outlinePen, whiteBrush);
        rectangle = scene->addRect(8, -6, 8, 8, outlinePen, whiteBrush);
        rectangle = scene->addRect(8, -6, 8, 8, outlinePen, whiteBrush);
        rectangle = scene->addRect(8, -6, 8, 8, outlinePen, whiteBrush);
        rectangle = scene->addRect(8, -6, 8, 8, outlinePen, whiteBrush);

        rectangle = scene->addRect(8, 0, 8, 8, outlinePen, whiteBrush);


        rectangle = scene->addRect(2, -1, 8, 8, outlinePen, blackbrush);
        rectangle = scene->addRect(4, -3, 8, 8, outlinePen, blackbrush);
        rectangle = scene->addRect(6, -5, 8, 8, outlinePen, blackbrush);
        rectangle = scene->addRect(8, -7, 8, 8, outlinePen, blackbrush);
        rectangle = scene->addRect(10, -9, 8, 8, outlinePen, blackbrush);
        rectangle = scene->addRect(12, -11, 8, 8, outlinePen, blackbrush);
        rectangle = scene->addRect(14, -13, 8, 8, outlinePen, blackbrush);
        rectangle = scene->addRect(16, -15, 8, 8, outlinePen, blackbrush);

        rectangle = scene->addRect(18, -1, 8, 8, outlinePen, blackbrush);
        rectangle = scene->addRect(20, -1, 8, 8, outlinePen, blackbrush);
        rectangle = scene->addRect(8, -1, 8, 8, outlinePen, blackbrush);
        rectangle = scene->addRect(8, -1, 8, 8, outlinePen, blackbrush);
        rectangle = scene->addRect(8, -1, 8, 8, outlinePen, blackbrush);
        rectangle = scene->addRect(8, -1, 8, 8, outlinePen, blackbrush);
        rectangle = scene->addRect(8, -1, 8, 8, outlinePen, blackbrush);
        rectangle = scene->addRect(8, -1, 8, 8, outlinePen, blackbrush);

        rectangle = scene->addRect(8, 0, 8, 8, outlinePen, blackbrush);
        rectangle = scene->addRect(8, 0, 8, 8, outlinePen, blackbrush);
        rectangle = scene->addRect(8, 0, 8, 8, outlinePen, blackbrush);
        rectangle = scene->addRect(8, 0, 8, 8, outlinePen, blackbrush);
        rectangle = scene->addRect(8, 0, 8, 8, outlinePen, blackbrush);
        rectangle = scene->addRect(8, 0, 8, 8, outlinePen, blackbrush);
        rectangle = scene->addRect(8, 0, 8, 8, outlinePen, blackbrush);
        rectangle = scene->addRect(8, 0, 8, 8, outlinePen, blackbrush);

        rectangle = scene->addRect(8, 0, 8, 8, outlinePen, blackbrush);
        rectangle = scene->addRect(8, 0, 8, 8, outlinePen, blackbrush);
        rectangle = scene->addRect(8, 0, 8, 8, outlinePen, blackbrush);
        rectangle = scene->addRect(8, 0, 8, 8, outlinePen, blackbrush);
        rectangle = scene->addRect(8, 0, 8, 8, outlinePen, blackbrush);
        rectangle = scene->addRect(8, 0, 8, 8, outlinePen, blackbrush);
        rectangle = scene->addRect(8, 0, 8, 8, outlinePen, blackbrush);
        rectangle = scene->addRect(8, 0, 8, 8, outlinePen, blackbrush);

        rectangle = scene->addRect(8, 0, 8, 8, outlinePen, blackbrush);

        // movable text
        rectangle->setFlag(QGraphicsItem::ItemIsMovable);
}

MainWindow::~MainWindow()
{
    delete ui;
}
