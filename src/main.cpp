#include <QApplication>
#include <QTextCodec>
#include <QtGui/QSplashScreen>
#include <QtCore/QTime>

#include "../include/mainWindow.h"

void loadModules(QSplashScreen* psplash)
{
    QTime time;
    time.start();

    for (int i = 0; i < 100; ) {
        if (time.elapsed() > 40) {
            time.start();
            ++i;
        }
        psplash->showMessage("Loading modules: "
                             + QString::number(i) + "%",
                             Qt::AlignHCenter | Qt::AlignBottom,
                             Qt::white
        );
    }
}

int main(int argc, char *argv[])
{
    QApplication  app(argc, argv);
    QPixmap pixmap("/home/dev/temp/temp_text_viewer/text_viewer/src/temp.png");

    QSplashScreen *splash = new QSplashScreen(pixmap);

    QTextCodec *utfcodec = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForTr(utfcodec);

    QTextCodec::setCodecForCStrings(utfcodec);

    splash->show();
    loadModules(splash);
    splash->hide();

    MainWindow window;
    window.showMaximized();

    return app.exec();
}
