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


void Widget::on_Carga_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, tr("Choose"),"",tr("Imágenes(*.pgm *.jpeg *.jpg)"));
    if(QString::compare(filename,QString())!=0)
    {
        QImage imagen;
        bool valid = imagen.load(filename);

    if(valid){
        imagen = imagen.scaledToWidth(ui->labelpic->width(),Qt::SmoothTransformation);
        ui->labelpic->setPixmap(QPixmap::fromImage(imagen));
    }
}
}

void Widget::on_Procesa_clicked()
{

    ui->labelpic2->setPixmap(QPixmap::fromImage(imagen));

}

