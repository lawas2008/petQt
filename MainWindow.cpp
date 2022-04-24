#include "mainwindow.h"
#include <QVBoxLayout>
#include <QPushButton>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
{
    setUpUi();
}

MainWindow::~MainWindow()
{

}


void MainWindow::setUpUi()
{
    QVBoxLayout* mainLayout = new QVBoxLayout;
    mainLayout->setMargin(0);
    mainLayout->setSpacing(0);
    QPushButton *testBtn = new QPushButton("test");
    connect(testBtn,SIGNAL(clicked(bool)),this,SLOT(slot_testBtn_clicked()));
    mainLayout->addWidget(testBtn);
    mainLayout->addStretch();

    this->setLayout(mainLayout);
}

void MainWindow::slot_testBtn_clicked()
{
      qDebug()<<tr("单击test按钮");
}
