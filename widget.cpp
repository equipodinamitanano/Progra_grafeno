#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}
void Widget::on_Cargar_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, tr("Choose"),"",tr("Image(*.jpg *.pgm *.jpge)"));
    if (QString::compare(filename,QString()) !=0)
    {
        QImage image;
        bool valid = image.load(filename);
        if (valid)
        {
        image=image.scaledToWidth(ui->label->width(), Qt::SmoothTransformation);
        ui->label->setPixmap(QPixmap::fromImage(image));

        }
    }

}

