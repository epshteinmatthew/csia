/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QListView *tasksList;
    QGroupBox *selectedTaskBox;
    QGroupBox *selectedTaskBox_2;
    QTextEdit *textEdit;
    QToolButton *toolButton;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(909, 318);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 131, 16));
        tasksList = new QListView(centralwidget);
        tasksList->setObjectName("tasksList");
        tasksList->setGeometry(QRect(20, 40, 181, 221));
        selectedTaskBox = new QGroupBox(centralwidget);
        selectedTaskBox->setObjectName("selectedTaskBox");
        selectedTaskBox->setGeometry(QRect(230, 20, 211, 251));
        selectedTaskBox_2 = new QGroupBox(centralwidget);
        selectedTaskBox_2->setObjectName("selectedTaskBox_2");
        selectedTaskBox_2->setGeometry(QRect(490, 10, 391, 161));
        textEdit = new QTextEdit(selectedTaskBox_2);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(10, 110, 371, 41));
        QFont font;
        font.setPointSize(16);
        textEdit->setFont(font);
        toolButton = new QToolButton(selectedTaskBox_2);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(350, 120, 26, 25));
        radioButton = new QRadioButton(selectedTaskBox_2);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(20, 60, 71, 41));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("video-x-generic")));
        radioButton->setIcon(icon);
        radioButton->setIconSize(QSize(50, 50));
        radioButton_2 = new QRadioButton(selectedTaskBox_2);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(120, 60, 71, 41));
        radioButton_2->setIcon(icon);
        radioButton_2->setIconSize(QSize(50, 50));
        radioButton_3 = new QRadioButton(selectedTaskBox_2);
        radioButton_3->setObjectName("radioButton_3");
        radioButton_3->setGeometry(QRect(220, 60, 71, 41));
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("audio-x-generic")));
        radioButton_3->setIcon(icon1);
        radioButton_3->setIconSize(QSize(50, 30));
        radioButton_4 = new QRadioButton(selectedTaskBox_2);
        radioButton_4->setObjectName("radioButton_4");
        radioButton_4->setGeometry(QRect(320, 60, 61, 41));
        QIcon icon2(QIcon::fromTheme(QString::fromUtf8("folder")));
        radioButton_4->setIcon(icon2);
        radioButton_4->setIconSize(QSize(50, 30));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(490, 180, 391, 81));
        QFont font1;
        font1.setPointSize(50);
        font1.setBold(true);
        pushButton->setFont(font1);
        pushButton->setAutoDefault(true);
        pushButton->setFlat(false);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 909, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Tasks to Complete", nullptr));
        selectedTaskBox->setTitle(QCoreApplication::translate("MainWindow", "Selected Task", nullptr));
        selectedTaskBox_2->setTitle(QCoreApplication::translate("MainWindow", "Break Options", nullptr));
        textEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "File Path/Video Link/Playlist Link", nullptr));
        toolButton->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        radioButton->setText(QString());
        radioButton_2->setText(QString());
        radioButton_3->setText(QString());
        radioButton_4->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
