#include "mainWindow.h"

#include <QMenu>
#include <QMenuBar>
#include <QtGui/qapplication.h>


void MainWindow::setupMenu()
{
    QMenu *fileMenu = new QMenu(tr("Файл"), this);
    menuBar()->addMenu(fileMenu);
    fileMenu->addAction(tr("Открыть"), this, SLOT(openFile()), QKeySequence::Open);
    fileMenu->addAction(tr("Выход"), qApp, SLOT(quit()), QKeySequence::Quit);

    QMenu *helpMenu = new QMenu(tr("Помощь"), this);
    menuBar()->addMenu(helpMenu);
    helpMenu->addAction(tr("О программе"), this, SLOT(about()));
    helpMenu->addAction(tr("О Qt"), qApp, SLOT(aboutQt()));
}