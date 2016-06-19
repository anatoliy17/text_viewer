#include "../include/mainWindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    this->setWindowTitle(tr("Просмотрщик текстовых файлов"));
    setupMenu();
    setupEditor();
    setCentralWidget(editor);
}