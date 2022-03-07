#include "fllemanage.h"

#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  fllemanage w;
  // w.setWindowTitle(QString("文件搬运"));

  QFile qssFile("D://vstest//untitled2//lightblue.css"); //资源文件":/css.qss"
  qssFile.open(QFile::ReadOnly);
  if (qssFile.isOpen()) {
    QString qss = QLatin1String(qssFile.readAll()); //读取
    qApp->setStyleSheet(qss);                       //设置
    qssFile.close();
  }
  w.show();
  return a.exec();
}
