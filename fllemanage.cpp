#include "fllemanage.h"
#include "ui_fllemanage.h"
#include <QSettings>

fllemanage::fllemanage(QWidget *parent)
    : QWidget(parent), ui(new Ui::fllemanage) {
  ui->setupUi(this);

  setWindowIcon(QIcon(":/new/prefix1/file mangement.png"));
  ui->btn_beginserach->setEnabled(0);
  ui->btn_copyto->setEnabled(0);
  ui->btn_delete->setEnabled(0);
}

fllemanage::~fllemanage() { delete ui; }

void fllemanage::on_pushButton_clicked() {
  //    QDir qdir("C:/Users/00/Desktop/123");  //删除文件夹123
  //    qdir.removeRecursively();

  // copy测试！！！！！！
  //        QFile src("F:/src");
  //        QFile dst("F:/dst");

  //        bool success = true;
  //        success &= src.open( QFile::ReadOnly );
  //        success &= dst.open( QFile::WriteOnly | QFile::Truncate );
  //        success &= dst.write( src.readAll() ) >= 0;

  //        QFile::copy("F:/src/1.txt" , "F:/dst/2.txt");
  //        src.close();
  //        dst.close();

  //    //含中文的copy，测试是否乱码
  //    QString src("C:/Users/00/Desktop/这是一个测试的.txt");
  //    QDir srcdir(src);
  //    QString dst("C:/Users/00/123/Desktop/这是一个测试的.txt");
  //    QDir dstdir(dst);
  //    if(QFile::copy(src, dst)) QMessageBox::information(this, "msg", "copy
  //    success");

  //    //写文本
  //    QFile f("F:/src/1.txt");
  //    if(!f.open(QIODevice::WriteOnly | QIODevice::Text))
  //    {
  //        qDebug() << "Open failed." << endl;
  //    }

  //    QTextStream txtOutput(&f);
  //    QString s1("123");
  //    quint32 n1(123);

  //    txtOutput << s1 << endl;
  //    txtOutput << n1 << endl;

  //    f.close();

  //   //读文本
  //    QFile f("F:/src/1.txt");
  //    if(!f.open(QIODevice::ReadOnly | QIODevice::Text))
  //    {
  //        qDebug() << "Open failed." << endl;
  //    }

  //    QTextStream txtInput(&f);
  //    QString lineStr;
  //    while(!txtInput.atEnd())
  //    {
  //        lineStr = txtInput.readLine();
  //        qDebug() << lineStr << endl;
  //    }

  //    f.close();

  //    int count = 0;
  //    QString dirpath = "C:/Users/00/Desktop/git
  //    clone/OpenCV-Python-Tutorial/.idea";
  //    //设置要遍历的目录
  //    QDir dir(dirpath);
  //    qDebug()<<dirpath<<endl;
  //    //设置文件过滤器
  //    QStringList nameFilters;
  //    //设置文件过滤格式
  //    nameFilters << "*.xml";
  //    dir.setNameFilters(nameFilters);
  //    qDebug()<<dir.entryList()<<endl;
  //    qDebug()<<dir.entryInfoList()<<endl;
  //    //将过滤后的文件名称存入到files列表中
  //    QStringList files = dir.entryList(nameFilters,
  //    QDir::Files|QDir::Readable, QDir::Name); for(int i = 0; i<files.size();
  //    i++)
  //    {
  //        qDebug()<<"now, it's output from QStringlist"<<endl;
  //        qDebug()<<files[i]<<endl;
  //    }

  /*搜索程序可用*/
  //    //QStringList list = findALLfiles("C:/Users/00/Desktop/vsrun/123");
  //    //QStringList list = findALLfiles("C:/Users/00/Desktop/vsrun");
  //    QStringList list = findALLfiles("C:/Users/00/Desktop/git clone");
  //                                                                        //for(int
  //                                                                        i =
  //                                                                        0 ;
  //                                                                        i
  //                                                                        <list.size();
  //                                                                        i++)
  //	  //qDebug() <<list[i]<<endl;
  //	QStringList purposelist;
  //    purposelist = list.filter(".md");
  //	int count = 0;
  //	for (int i = 0; i < purposelist.size(); i++)
  //	{
  //		qDebug() << purposelist[i] << endl;
  //		count++;
  //	}
  //	qDebug() << "the max file has " << list.size() << endl;
  //	qDebug() << "the purpose file has " << count << endl;

  //	//新建文件夹（目标文件保存的位置）
  ////    QDir dir("C:/Users/00/Desktop/vsrun");
  ////     if(!dir.exists("copy to here")){
  ////         dir.mkdir("copy to here");
  ////     }
  //    QString toDir = "C:/Users/00/Desktop/123";

  //	//toDir.replace("\\","/");

  //	QDir dir(toDir);
  //	if (!dir.exists(toDir)) {
  //		dir.mkdir(toDir);
  //	}

  //	QFile destFile(toDir);
  //	bool success = true;
  //	success &= destFile.open(QFile::WriteOnly | QFile::Truncate);

  //	for (int i = 0; i < purposelist.size(); i++)
  //    {
  //        std::string pur = purposelist[i].toStdString();//都转换为string
  //       // qDebug()<<pur<<endl;
  //        std::string sdir = toDir.toStdString();

  //        int pos = pur.find_last_of('/'); //找到最后/
  //        std::string s(pur.substr(pos+1));
  //        sdir.append("/");

  //        sdir.append(s);
  //        QString qsdir = QString(QString::fromLocal8Bit(sdir.c_str()));
  //        qDebug()<<qsdir<<endl;
  //        if (QFile::copy(purposelist[i], qsdir)) {
  //        //将文件复制到新的文件路径下
  //            {
  //                if(QFile::copy(purposelist[i],toDir))
  //                 qDebug() << QStringLiteral("复制成功");
  //			}
  //		}
  //	}

  // QfileDialog

  //    QString file_name =
  //    QFileDialog::getOpenFileName(NULL,"请选择要复制到的位置：",".","*");
  //    QFileDialog fd;
  //    fd.setAcceptMode(QFileDialog::AcceptOpen);
  //    fd.setViewMode(QFileDialog::Detail);
  //    fd.setFileMode(QFileDialog::ExistingFile);//存在的，单个文件名
  //    fd.setWindowTitle("请选择要复制到的位置：");
  //    fd.open();

  // QString savefile = QFileDialog::get

  //含中文的copy，测试是否乱码
  //    QString src("C:/Users/00/Desktop/这是一个测试的.cpp");
  //    QString dst("C:/Users/00/Desktop/123/这是一个测试的.cpp");
  //    if(QFile::copy(src, dst)) QMessageBox::information(this, "msg", "copy
  //    success"); else QMessageBox::information(this, "msg", "copy failed");
  //    //测试完成，没有乱码
  // std::wstring wc = L"汉字";
  // qDebug() << wc << endl;
  // QString src("C:/Users/00/Desktop/这是一个测试的.cpp");
  // QString dst("C:/Users/00/Desktop");
  // std::string dst2string = dst.toStdString();//都转换为string
  //  // qDebug()<<pur<<endl;
  // std::string src2string = src.toStdString();

  // int pos = src2string.find_last_of('/'); //找到最后/
  // std::string s(src2string.substr(pos + 1));
  // std::cout << "提取到的string类型的文件名" << s << endl;
  // dst2string.append("/");
  // dst2string.append(s);
  // std::cout << "string类型的中文路径" << dst2string << endl;
  // QString dst2string2Qstring =
  // QString(QString::fromLocal8Bit(dst2string.c_str()));
  // //有错误，组合的中文路径乱码 qDebug() << "转换的QString类型的中文路径" <<
  // dst2string2Qstring << endl;

  //	//测试中文文件夹是否可t用
  //	QDir dir("E:");
  //    std::string test = "两个汉字";
  //    QString ads = QString::fromLocal8Bit(test.data());
  //	qDebug() << ads << endl;
  //	if (!dir.exists(ads)) {
  //		dir.mkdir(ads);
  //	}
  //    QStringList listE = findALLfiles("E:");
  //    for (int i = 0; i < listE.size(); i++)
  //	{
  //        qDebug() <<listE[i] << endl;
  //	} //测试发现输出到文件名乱码是因为string到QString格式错误

  // QString截断学习
  //   QString src("E:/qq接收文件/MobileFile/thumb/碎裂收据.jpg");
  //   qDebug() << "original path: " << src << endl;
  //   QString dir("E:/目标文件夹");
  //   qDebug() << "the last string '/' pos is " << src.lastIndexOf('/') <<
  //   endl; QString filename = src.right(src.size() - (src.lastIndexOf("/") +
  //   1)); qDebug() << "the true filename is " << filename << endl;
}

//迭代器遍历所有文件并返回
QStringList fllemanage::findALLfiles(const QString &dir_path) {
  QStringList get_files;
  QDir dir(dir_path);
  if (!dir.exists()) {
    qDebug() << "it is not true dir_path";
  }

  /*设置过滤参数，QDir::NoDotAndDotDot表示不会去遍历上层目录*/
  QDirIterator dir_iterator(dir_path,
                            QDir::Files | QDir::Dirs | QDir::NoDotAndDotDot,
                            QDirIterator::Subdirectories);

  while (dir_iterator.hasNext()) {
    dir_iterator.next();
    QFileInfo file_info = dir_iterator.fileInfo();
    QString files = file_info.absoluteFilePath();
    get_files.append(files);
  }

  return get_files;
}

void fllemanage::on_btn_Seachfile_clicked() {
  QSettings settings("./setting.ini", QSettings::IniFormat);
  settings.beginGroup("file");
  QString defaultPath = settings.value("src").toString();

  dirpath = QFileDialog::getExistingDirectory(
      this, "请选择要搜索的文件夹：", defaultPath, QFileDialog::ShowDirsOnly);
  if (dirpath.isEmpty()) {
    QMessageBox::warning(NULL, "warning", "文件夹路径为空", QMessageBox::Yes);
    return;
  }
  ui->textEdit_showdir->setPlainText(dirpath);
  qDebug() << "search file is: " << dirpath << endl;

  defaultPath = QFileInfo(dirpath).absoluteDir().absolutePath();
  settings.setValue("src", defaultPath);
  settings.endGroup();
  settings.sync();

  if (dirpath.size() > 0) {
    ui->btn_beginserach->setEnabled(1);
    ui->btn_copyto->setEnabled(1);
    ui->btn_delete->setEnabled(1);
  }
}

void fllemanage::on_btn_beginserach_clicked() {
  part = ui->textEdit_findpart->toPlainText();
  list = findALLfiles(dirpath);

  QString m_total = QString::number(list.size(), 10);
  purposelist = list.filter(part);
  QString m_find = QString::number(purposelist.size(), 10);
  for (int i = 0; i < purposelist.size(); i++) {
    qDebug() << purposelist[i] << endl;
  }
  ui->textEdit_total->setPlainText(m_total);
  ui->textEdit_find->setPlainText(m_find);
}

void fllemanage::on_btn_delete_clicked() //目标文件删除。。
{
  if (QMessageBox::Yes ==
      QMessageBox::question(
          this, tr("警告！"), tr("你确认要删除吗?回收站也找不到了哦"),
          QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes)) {
    QMessageBox::information(this, tr("恭喜你！"), tr("你文件彻底没了!"));
    for (int i = 0; i < purposelist.size(); i++) {
      QFile::remove(purposelist[i]);
    }
    qDebug() << "delete successfully!" << endl;
  } else {
    QMessageBox::information(this, tr("恭喜你！"), tr("你成功保住了你的文件!"));
  }
}

void fllemanage::on_btn_copyto_clicked() {
  QSettings settings("./setting.ini", QSettings::IniFormat);
  settings.beginGroup("file");
  QString defaultPath = settings.value("dst").toString();

  QString dstpath = QFileDialog::getExistingDirectory(
      this, "复制搜索到的文件到：", defaultPath, QFileDialog::ShowDirsOnly);
  if (dstpath.isEmpty()) {
    QMessageBox::warning(NULL, "warning", "文件夹路径为空", QMessageBox::Yes);
    return;
  }
  ui->textEdit_dstfile->setPlainText(dstpath);
  qDebug() << "the desitination file is: " << dstpath << endl;

  QDir dst_dir(dstpath);

  for (int i = 0; i < purposelist.size(); i++) {
    QString trsrc = purposelist[i].right(purposelist[i].size() -
                                         purposelist[i].lastIndexOf('/'));
    QString temp = dstpath;
    QString qsdir = dstpath.append(trsrc);
    qDebug() << qsdir << endl;
    dstpath = temp;
    QFile::copy(purposelist[i], qsdir);
  }

  defaultPath = QFileInfo(dstpath).absoluteDir().absolutePath();
  settings.setValue("dst", defaultPath);
  settings.endGroup();
  settings.sync();

  QMessageBox::information(this, tr("success！"),
                           tr("相关文件已移动到目的文件夹"));
}
