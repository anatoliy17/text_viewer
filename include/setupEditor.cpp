#include "mainWindow.h"

void MainWindow::setupEditor()
{
    QFont font;
    font.setFamily("Arial");
    font.setFixedPitch(true);
    font.setPointSize(10);

    editor = new QTextEdit;
    editor->setFont(font);
    QPalette p = editor->palette();
    p.setColor(QPalette::Base, QColor(255, 255, 255));
    editor->setPalette(p);
}