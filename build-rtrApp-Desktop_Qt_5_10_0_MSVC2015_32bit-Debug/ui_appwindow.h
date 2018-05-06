/********************************************************************************
** Form generated from reading UI file 'appwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPWINDOW_H
#define UI_APPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "rtrglwidget.h"

QT_BEGIN_NAMESPACE

class Ui_AppWindow
{
public:
    QHBoxLayout *mainLayout;
    rtrGLWidget *openGLWidget;
    QWidget *ui_container;
    QVBoxLayout *verticalLayout_5;
    QTabWidget *tabWidget;
    QWidget *rendering_tab;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QComboBox *modelComboBox;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_7;
    QComboBox *comboBox;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QSlider *light0Slider;
    QGroupBox *groupBox_6;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *blackBgRadioButton;
    QRadioButton *greyBgRadioButton;
    QRadioButton *whiteBgRadioButton;
    QSpacerItem *verticalSpacer_2;
    QPushButton *quitButton;
    QLabel *label;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_2;

    void setupUi(QWidget *AppWindow)
    {
        if (AppWindow->objectName().isEmpty())
            AppWindow->setObjectName(QStringLiteral("AppWindow"));
        AppWindow->resize(858, 701);
        AppWindow->setMinimumSize(QSize(800, 600));
        mainLayout = new QHBoxLayout(AppWindow);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        openGLWidget = new rtrGLWidget(AppWindow);
        openGLWidget->setObjectName(QStringLiteral("openGLWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(8);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(openGLWidget->sizePolicy().hasHeightForWidth());
        openGLWidget->setSizePolicy(sizePolicy);
        openGLWidget->setMinimumSize(QSize(0, 0));
        openGLWidget->setFocusPolicy(Qt::StrongFocus);

        mainLayout->addWidget(openGLWidget);

        ui_container = new QWidget(AppWindow);
        ui_container->setObjectName(QStringLiteral("ui_container"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ui_container->sizePolicy().hasHeightForWidth());
        ui_container->setSizePolicy(sizePolicy1);
        ui_container->setFocusPolicy(Qt::WheelFocus);
        verticalLayout_5 = new QVBoxLayout(ui_container);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        tabWidget = new QTabWidget(ui_container);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setUsesScrollButtons(false);
        rendering_tab = new QWidget();
        rendering_tab->setObjectName(QStringLiteral("rendering_tab"));
        verticalLayout = new QVBoxLayout(rendering_tab);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(2, -1, 2, -1);
        groupBox = new QGroupBox(rendering_tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        modelComboBox = new QComboBox(groupBox);
        modelComboBox->addItem(QString());
        modelComboBox->addItem(QString());
        modelComboBox->addItem(QString());
        modelComboBox->addItem(QString());
        modelComboBox->addItem(QString());
        modelComboBox->addItem(QString());
        modelComboBox->setObjectName(QStringLiteral("modelComboBox"));
        modelComboBox->setFocusPolicy(Qt::NoFocus);

        verticalLayout_2->addWidget(modelComboBox);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(rendering_tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_7 = new QVBoxLayout(groupBox_2);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        comboBox = new QComboBox(groupBox_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout_7->addWidget(comboBox);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(rendering_tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        widget_2 = new QWidget(groupBox_3);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        light0Slider = new QSlider(widget_2);
        light0Slider->setObjectName(QStringLiteral("light0Slider"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(light0Slider->sizePolicy().hasHeightForWidth());
        light0Slider->setSizePolicy(sizePolicy2);
        light0Slider->setFocusPolicy(Qt::NoFocus);
        light0Slider->setMaximum(100);
        light0Slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(light0Slider, 0, 2, 1, 1);


        verticalLayout_4->addWidget(widget_2);


        verticalLayout->addWidget(groupBox_3);

        groupBox_6 = new QGroupBox(rendering_tab);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        blackBgRadioButton = new QRadioButton(groupBox_6);
        blackBgRadioButton->setObjectName(QStringLiteral("blackBgRadioButton"));

        horizontalLayout_4->addWidget(blackBgRadioButton);

        greyBgRadioButton = new QRadioButton(groupBox_6);
        greyBgRadioButton->setObjectName(QStringLiteral("greyBgRadioButton"));
        greyBgRadioButton->setFocusPolicy(Qt::NoFocus);
        greyBgRadioButton->setChecked(true);

        horizontalLayout_4->addWidget(greyBgRadioButton);

        whiteBgRadioButton = new QRadioButton(groupBox_6);
        whiteBgRadioButton->setObjectName(QStringLiteral("whiteBgRadioButton"));
        whiteBgRadioButton->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_4->addWidget(whiteBgRadioButton);


        verticalLayout->addWidget(groupBox_6);

        tabWidget->addTab(rendering_tab, QString());

        verticalLayout_5->addWidget(tabWidget);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        quitButton = new QPushButton(ui_container);
        quitButton->setObjectName(QStringLiteral("quitButton"));
        quitButton->setFocusPolicy(Qt::NoFocus);

        verticalLayout_5->addWidget(quitButton);

        label = new QLabel(ui_container);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_5->addWidget(label);

        label_11 = new QLabel(ui_container);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_5->addWidget(label_11);

        label_12 = new QLabel(ui_container);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout_5->addWidget(label_12);

        label_2 = new QLabel(ui_container);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_5->addWidget(label_2);


        mainLayout->addWidget(ui_container);


        retranslateUi(AppWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AppWindow);
    } // setupUi

    void retranslateUi(QWidget *AppWindow)
    {
        AppWindow->setWindowTitle(QApplication::translate("AppWindow", "RTR Demo", nullptr));
        groupBox->setTitle(QApplication::translate("AppWindow", "Scene", nullptr));
        modelComboBox->setItemText(0, QApplication::translate("AppWindow", "Cube", nullptr));
        modelComboBox->setItemText(1, QApplication::translate("AppWindow", "Torus", nullptr));
        modelComboBox->setItemText(2, QApplication::translate("AppWindow", "Yoda", nullptr));
        modelComboBox->setItemText(3, QApplication::translate("AppWindow", "Cessna", nullptr));
        modelComboBox->setItemText(4, QApplication::translate("AppWindow", "Duck", nullptr));
        modelComboBox->setItemText(5, QApplication::translate("AppWindow", "Teapot", nullptr));

        groupBox_2->setTitle(QApplication::translate("AppWindow", "Shader", nullptr));
        comboBox->setItemText(0, QApplication::translate("AppWindow", "Phong", nullptr));
        comboBox->setItemText(1, QApplication::translate("AppWindow", "Toon", nullptr));
        comboBox->setItemText(2, QApplication::translate("AppWindow", "Dot", nullptr));

        groupBox_3->setTitle(QApplication::translate("AppWindow", "Shader Parameters", nullptr));
        label_3->setText(QApplication::translate("AppWindow", "Light Intensity", nullptr));
        groupBox_6->setTitle(QApplication::translate("AppWindow", "Background", nullptr));
        blackBgRadioButton->setText(QApplication::translate("AppWindow", "black", nullptr));
        greyBgRadioButton->setText(QApplication::translate("AppWindow", "grey", nullptr));
        whiteBgRadioButton->setText(QApplication::translate("AppWindow", "white", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(rendering_tab), QApplication::translate("AppWindow", "Rendering", nullptr));
        quitButton->setText(QApplication::translate("AppWindow", "quit", nullptr));
        label->setText(QApplication::translate("AppWindow", "'h': show/hide UI", nullptr));
        label_11->setText(QApplication::translate("AppWindow", "left/right: rotate camera Horizontal", nullptr));
        label_12->setText(QApplication::translate("AppWindow", "up/down: rotate camera Vertical", nullptr));
        label_2->setText(QApplication::translate("AppWindow", "+/-: zoom", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AppWindow: public Ui_AppWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPWINDOW_H
