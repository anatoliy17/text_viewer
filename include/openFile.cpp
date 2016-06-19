#include <QtCore/QString>
#include <QtGui/QtGui>
#include "mainWindow.h"

void MainWindow::openFile(const QString &path)
{
    QString fileName = path;

    if (fileName.isNull())
        fileName = QFileDialog::getOpenFileName(this, tr("Открытие файла"), "");

    if (!fileName.isEmpty()) {
        QFile file(fileName);
        if (file.open(QFile::ReadOnly | QFile::Text)) {
            editor->setPlainText(file.readAll());
        }
    }
}