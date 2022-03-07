#ifndef FLLEMANAGE_H
#define FLLEMANAGE_H

#include <iostream>
#include <QWidget>
#include <QDir>
#include <QDebug>
#include <QDirIterator>
#include <string>
#include <QFile>
#include <QString>
#include <QIODevice>
#include <QMessageBox>
#include <QFileDialog>
#include <QTextCodec>

#pragma execution_character_set("utf-8")

QT_BEGIN_NAMESPACE
namespace Ui { class fllemanage; }
QT_END_NAMESPACE

class fllemanage : public QWidget
{
	Q_OBJECT

public:
	fllemanage(QWidget *parent = nullptr);
	~fllemanage();
	QStringList findALLfiles(const QString &dir_path);

private slots:
	void on_pushButton_clicked();

	void on_btn_Seachfile_clicked();

	void on_btn_beginserach_clicked();

	void on_btn_delete_clicked();

	void on_btn_copyto_clicked();

private:
	Ui::fllemanage *ui;
	QString dirpath;
	QStringList list, purposelist, onlyname;
	QString part;
	//QString m_total;
	//QString m_find;
};
#endif // FLLEMANAGE_H
