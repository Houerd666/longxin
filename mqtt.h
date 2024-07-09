#ifndef MQTT_H
#define MQTT_H
#include <QMainWindow>
#include <QtMqtt/qmqttclient.h>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


public slots:
    void setClientPort(int p);

private slots:
    void on_buttonConnect_clicked();
    void on_buttonQuit_clicked();
    void updateLogStateChange();

    void brokerDisconnected();

    void on_buttonPublish_clicked();

    void on_buttonSubscribe_clicked();

    void on_buttonSubscribe_2_clicked();

private:
    Ui::MainWindow *ui;
    QMqttClient *m_client;
};

#endif // MAINWINDOW_H


