#include "formeditor.h"
#include "ui_formeditor.h"

FormEditor::FormEditor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormEditor)
{
    ui->setupUi(this);
}

FormEditor::~FormEditor()
{
    delete ui;
}
