#-------------------------------------------------
#
# Project created by QtCreator 2015-08-19T21:20:45
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets




TARGET = untitled1
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    userdata.cpp

HEADERS  += mainwindow.h \
    userdata.h

FORMS    += mainwindow.ui

CONFIG += mobility
MOBILITY = 

DISTFILES += \
    android/AndroidManifest.xml \
    android/gradle/wrapper/gradle-wrapper.jar \
    android/gradlew \
    android/res/values/libs.xml \
    android/build.gradle \
    android/gradle/wrapper/gradle-wrapper.properties \
    android/gradlew.bat \
    R/ADA.txt \
    R/ADQ.txt

RESOURCES += \
    resource.qrc

ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android






