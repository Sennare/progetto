#include "application.h"

#include <QDebug>
#include <QApplication>
#include <QWidget>
#include <QPushButton>

#include <QFileDialog>
#include <QFile>
#include <QXmlStreamWriter>

#include <QPointer>
#include <QString>
#include <QLabel>

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
    QWidget window;
    // Test scrittura XML --------------
    if (false) {
        QString fileName = QFileDialog::getSaveFileName(&window, tr("Save xml"), ".", tr("Xml files (*.xml)"));
        QFile file(fileName);
        file.open(QIODevice::WriteOnly);

        QXmlStreamWriter xmlWriter(&file);
        xmlWriter.autoFormatting();
        xmlWriter.autoFormattingIndent();
        xmlWriter.writeStartDocument();

        xmlWriter.writeStartElement("Elena");

        xmlWriter.writeStartElement("Come_farla_soffrire");
        xmlWriter.writeTextElement("Step_1", "statevalue statevalue statevalue statevalue statevalue" );
        xmlWriter.writeTextElement("Step_2", "wefgwf w fw wfawsgdsghseb evbdf efbgasgwvasd f avwes");
        xmlWriter.writeTextElement("Step_3", "sf wovcnhwajdnwv wendocsndse c cdcd eocscn ds");

        xmlWriter.writeEndElement();
        xmlWriter.writeEndElement();

        file.close();
    }
    // Fine test scrittura XML ---------

    // Test Qlist
    if (false)
    {
        QList<QPointer<QLabel>> rotture;

        QPointer<QLabel> test = new QLabel("looool");
        rotture.append(test);
        rotture.append(new QLabel ("test"));
        qDebug() << rotture.first()->text();
        qDebug() << rotture.last()->text();
    }
    // Fine test Qlist

    // Eseguiamo l'applicazione
    return qAppl.exec();
}
