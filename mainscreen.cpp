#include "mainscreen.h"

#include <QApplication>
#include <QPushButton>

MainScreen::MainScreen(QWidget *parent) : QWidget(parent)
{
    // Set window size
    setFixedSize(800, 300);

    // Create and set Button
    baseButton = new QPushButton(this);
    baseButton->setText("Primo bottone");
    baseButton->setGeometry(10, 10, 140, 25);

    // Connect button
    connect(baseButton, SIGNAL (clicked()), QApplication::instance(), SLOT (quit()));
}

