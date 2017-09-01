TEMPLATE = app
TARGET = name_of_the_app

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    main.cpp \
    models/model.cpp \
    views/view.cpp \
    controllers/controller.cpp \
    application.cpp

HEADERS += \
    models/model.h \
    views/view.h \
    controllers/controller.h \
    application.h
