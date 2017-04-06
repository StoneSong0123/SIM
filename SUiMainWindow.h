#ifndef SUIMAINWINDOW_H
#define SUIMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class SUiMainWindow;
}

class SUiMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SUiMainWindow(QWidget *parent = 0);
    ~SUiMainWindow();

private:
    Ui::SUiMainWindow *ui;
};

#endif // SUIMAINWINDOW_H
