#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "arvore.h"

#include <iostream>
#include <fstream>
#include <QFileDialog>
#include <QMessageBox>
#include <QComboBox>
#include <QMainWindow>

#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_selecionar_arquivo_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
