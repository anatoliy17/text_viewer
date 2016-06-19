#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextEdit>

#include "Poco/ClassLoader.h"


class MainWindow : public QMainWindow
{
Q_OBJECT
public:
    MainWindow(QWidget* parent=0);
public slots:
    void about();
    void openFile(const QString &path = QString());
private:
    void setupMenu();
    void setupEditor();
private:
    QTextEdit *editor;
};


#endif //MAINWINDOW_H
