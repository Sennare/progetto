#ifndef APPLICATION_H
#define APPLICATION_H

#include <QObject>
#include <QApplication>
#include <QPushButton>


class Application: public QObject
{
    Q_OBJECT
private:
    /*
     * keep app alive
     */
    static Application* instance;
    QApplication qAppl;

public:
    // Stroz
    QPushButton *butt;

    /*
     * Application
     */
    explicit Application(int* argc, char** argv[]);

    /*
     * Starting all environment
     */
    void initialize();

    /*
     * Execute app
     */
    int exec();
};

#endif // APPLICATION_H
