#ifndef MAINSCREEN_H
#define MAINSCREEN_H

#include <QWidget>

class QPushButton;
class MainScreen : public QWidget
{
    Q_OBJECT
public:
    explicit MainScreen(QWidget *parent = 0);
private:
    QPushButton *baseButton;

signals:

public slots:
};

#endif // MAINSCREEN_H
