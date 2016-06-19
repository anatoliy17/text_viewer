#include <QtGui/QMessageBox>
#include "mainWindow.h"

void MainWindow::about()
{
    QMessageBox::about(this, tr("О программе"),
                       tr("<p><b>Просмотрщик текстовых файлов</b> позволяет просматривать текстовые файлы</p>"));
}

