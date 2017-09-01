#include "application.h"

#include <QApplication>
#include <QWidget>
#include <QPushButton>

Application* Application::instance = 0;

Application::Application(int* argc, char** argv[]):
    qAppl(*argc, *argv)
{
    instance = this;
}

void Application::initialize()
{
    // Inizializziamo tutti i parametri e dati
}

int Application::exec()
{
    butt = new QPushButton(this);
    butt.setText("Ti odio");
    // Eseguiamo l'applicazione
    return qAppl.exec();
}
