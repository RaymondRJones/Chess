#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    scene = new QGraphicsScene(this);
        ui->graphicsView->setScene(scene);

        QBrush whitebrush(Qt::blue);
        QBrush blackbrush(Qt::black);
        QPen outlinePen(Qt::black);
        outlinePen.setWidth(2);
        //"A" File
        rectangle = scene->addRect(-420, 310, 42, 42, outlinePen, blackbrush);
        rectangle = scene->addRect(-420, 268, 42, 42, outlinePen, whitebrush);
        rectangle = scene->addRect(-420, 226, 42, 42, outlinePen, blackbrush);
        rectangle = scene->addRect(-420, 184, 42, 42, outlinePen, whitebrush);
        rectangle = scene->addRect(-420, 142, 42, 42, outlinePen, blackbrush);
        rectangle = scene->addRect(-420, 100, 42, 42, outlinePen, whitebrush);
        rectangle = scene->addRect(-420, 58, 42, 42, outlinePen, blackbrush);
        rectangle = scene->addRect(-420, 16, 42, 42, outlinePen, whitebrush);
        //"B" File
        rectangle = scene->addRect(-378, 310, 42, 42, outlinePen, whitebrush);
        rectangle = scene->addRect(-378, 268, 42, 42, outlinePen, blackbrush);
        rectangle = scene->addRect(-378, 226, 42, 42, outlinePen, whitebrush);
        rectangle = scene->addRect(-378, 184, 42, 42, outlinePen, blackbrush);
        rectangle = scene->addRect(-378, 142, 42, 42, outlinePen, whitebrush);
        rectangle = scene->addRect(-378, 100, 42, 42, outlinePen, blackbrush);
        rectangle = scene->addRect(-378, 58, 42, 42, outlinePen, whitebrush);
        rectangle = scene->addRect(-378, 16, 42, 42, outlinePen, blackbrush);
        //C File
        rectangle = scene->addRect(-336, 310, 42, 42, outlinePen, blackbrush);
        rectangle = scene->addRect(-336, 268, 42, 42, outlinePen, whitebrush);
        rectangle = scene->addRect(-336, 226, 42, 42, outlinePen, blackbrush);
        rectangle = scene->addRect(-336, 184, 42, 42, outlinePen, whitebrush);
        rectangle = scene->addRect(-336, 142, 42, 42, outlinePen, blackbrush);
        rectangle = scene->addRect(-336, 100, 42, 42, outlinePen, whitebrush);
        rectangle = scene->addRect(-336, 58, 42, 42, outlinePen, blackbrush);
        rectangle = scene->addRect(-336, 16, 42, 42, outlinePen, whitebrush);
        // D FIle
        rectangle = scene->addRect(-294, 310, 42, 42, outlinePen, whitebrush);
        rectangle = scene->addRect(-294, 268, 42, 42, outlinePen, blackbrush);
        rectangle = scene->addRect(-294, 226, 42, 42, outlinePen, whitebrush);
        rectangle = scene->addRect(-294, 184, 42, 42, outlinePen, blackbrush);
        rectangle = scene->addRect(-294, 142, 42, 42, outlinePen, whitebrush);
        rectangle = scene->addRect(-294, 100, 42, 42, outlinePen, blackbrush);
        rectangle = scene->addRect(-294, 58, 42, 42, outlinePen, whitebrush);
        rectangle = scene->addRect(-294, 16, 42, 42, outlinePen, blackbrush);
        //E File
        rectangle = scene->addRect(-252, 310, 42, 42, outlinePen, blackbrush);
        rectangle = scene->addRect(-252, 268, 42, 42, outlinePen, whitebrush);
        rectangle = scene->addRect(-252, 226, 42, 42, outlinePen, blackbrush);
        rectangle = scene->addRect(-252, 184, 42, 42, outlinePen, whitebrush);
        rectangle = scene->addRect(-252, 142, 42, 42, outlinePen, blackbrush);
        rectangle = scene->addRect(-252, 100, 42, 42, outlinePen, whitebrush);
        rectangle = scene->addRect(-252, 58, 42, 42, outlinePen, blackbrush);
        rectangle = scene->addRect(-252, 16, 42, 42, outlinePen, whitebrush);
        // F File
        rectangle = scene->addRect(-210, 310, 42, 42, outlinePen, whitebrush);
        rectangle = scene->addRect(-210, 268, 42, 42, outlinePen, blackbrush);
        rectangle = scene->addRect(-210, 226, 42, 42, outlinePen, whitebrush);
        rectangle = scene->addRect(-210, 184, 42, 42, outlinePen, blackbrush);
        rectangle = scene->addRect(-210, 142, 42, 42, outlinePen, whitebrush);
        rectangle = scene->addRect(-210, 100, 42, 42, outlinePen, blackbrush);
        rectangle = scene->addRect(-210, 58, 42, 42, outlinePen, whitebrush);
        rectangle = scene->addRect(-210, 16, 42, 42, outlinePen, blackbrush);
        //G File
        rectangle = scene->addRect(-168, 310, 42, 42, outlinePen, blackbrush);
        rectangle = scene->addRect(-168, 268, 42, 42, outlinePen, whitebrush);
        rectangle = scene->addRect(-168, 226, 42, 42, outlinePen, blackbrush);
        rectangle = scene->addRect(-168, 184, 42, 42, outlinePen, whitebrush);
        rectangle = scene->addRect(-168, 142, 42, 42, outlinePen, blackbrush);
        rectangle = scene->addRect(-168, 100, 42, 42, outlinePen, whitebrush);
        rectangle = scene->addRect(-168, 58, 42, 42, outlinePen, blackbrush);
        rectangle = scene->addRect(-168, 16, 42, 42, outlinePen, whitebrush);
        //H File
        rectangle = scene->addRect(-126, 310, 42, 42, outlinePen, whitebrush);
        rectangle = scene->addRect(-126, 268, 42, 42, outlinePen, blackbrush);
        rectangle = scene->addRect(-126, 226, 42, 42, outlinePen, whitebrush);
        rectangle = scene->addRect(-126, 184, 42, 42, outlinePen, blackbrush);
        rectangle = scene->addRect(-126, 142, 42, 42, outlinePen, whitebrush);
        rectangle = scene->addRect(-126, 100, 42, 42, outlinePen, blackbrush);
        rectangle = scene->addRect(-126, 58, 42, 42, outlinePen, whitebrush);
        rectangle = scene->addRect(-126, 16, 42, 42, outlinePen, blackbrush);
        // movable text
        rectangle->setFlag(QGraphicsItem::ItemIsMovable);
}

MainWindow::~MainWindow()
{
    delete ui;
}
