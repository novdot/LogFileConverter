/*!
    \file FormConverter.h
    \brief

    Содержит класс импорта файла в модель и простую обработку модели.
    Также позволяет сохранять обработанную модель в новый файл.

    \author dnovikov
    \mail novdot@mail.ru, novikov@electrooptika.ru
    \date 2020 12 09
 * */
#ifndef FORMCONVERTER_H
#define FORMCONVERTER_H

#include <QWidget>

namespace Ui {
class FormConverter;
}

class FormConverter : public QWidget
{
    Q_OBJECT

public:
    explicit FormConverter(QWidget *parent = nullptr);
    ~FormConverter();
public slots:
    /*!
        \brief Обработчик открытия файла
    */
    void openFile();
private:
    Ui::FormConverter *ui;

private slots:
    /*!
        \brief Обработчик буфера файла
    */
    void parseFileFromBuffer();
};

#endif // FORMCONVERTER_H
