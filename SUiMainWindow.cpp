#include "SUiMainWindow.h"
#include "ui_SUiMainWindow.h"

SUiMainWindow::SUiMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SUiMainWindow)
{
    ui->setupUi(this);
}

SUiMainWindow::~SUiMainWindow()
{
    delete ui;
}
