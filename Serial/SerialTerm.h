#ifndef SERIALTERM_H
#define SERIALTERM_H

#include <QMainWindow>

namespace Ui {
class SerialTerm;
}

class QTermWidget;
class SendSave;
class QSerialPort;

#include "NewSession/Setting.h"

class SerialTerm : public QMainWindow
{
    Q_OBJECT

public:
    explicit SerialTerm(QWidget *parent = 0);
    ~SerialTerm();

    void setSettings(SessionSetting &ss);

private slots:
    void on_btRecord_clicked();

    void on_btConnect_clicked();

private:
    void initSendSave();
    void initSerial();
    bool openSerial();

private:
    Ui::SerialTerm *ui;
    QTermWidget *term;
    SendSave *dlgSS;
    QSerialPort *serial;
    SessionSetting settings;
};

#endif // SERIALTERM_H
