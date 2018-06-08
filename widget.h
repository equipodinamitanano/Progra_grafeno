#ifndef WIDGET_H
#define WIDGET_H
#include <QFileDialog>
#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;
private slots:
void on_Carga_clicked();
void on_Procesa_clicked();
void procesado();
};

#endif // WIDGET_H
