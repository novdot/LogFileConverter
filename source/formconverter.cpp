#include "formconverter.h"
#include "ui_formconverter.h"

FormConverter::FormConverter(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormConverter)
{
    ui->setupUi(this);
}

FormConverter::~FormConverter()
{
    delete ui;
}

/*****************************************************************************/
void FormConverter::openFile()
{

}

/*****************************************************************************/
void FormConverter::parseFileFromBuffer()
{

}

/*****************************************************************************/
