/********************************************************************************
** Form generated from reading UI file 'fangcontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FANGCONTROL_H
#define UI_FANGCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FangControl
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QPushButton *mode_button;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QLabel *walk_g1_m;
    QLabel *rotate_m;
    QLabel *translate_m;
    QSpacerItem *verticalSpacer_2;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout;
    QLabel *static_label;
    QLabel *status_label;
    QPushButton *connect_button;
    QGroupBox *keypad_groupBox;
    QGridLayout *gridLayout_2;
    QPushButton *center_button;
    QPushButton *up_button;
    QPushButton *stand_button;
    QPushButton *l1_button;
    QPushButton *left_button;
    QPushButton *sit_button;
    QPushButton *r1_button;
    QPushButton *right_button;
    QPushButton *down_button;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FangControl)
    {
        if (FangControl->objectName().isEmpty())
            FangControl->setObjectName(QString::fromUtf8("FangControl"));
        FangControl->resize(503, 332);
        centralWidget = new QWidget(FangControl);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mode_button = new QPushButton(centralWidget);
        mode_button->setObjectName(QString::fromUtf8("mode_button"));
        mode_button->setEnabled(false);

        verticalLayout->addWidget(mode_button);

        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setEnabled(true);
        frame_2->setAutoFillBackground(false);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Sunken);
        frame_2->setLineWidth(5);
        frame_2->setMidLineWidth(5);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        walk_g1_m = new QLabel(frame_2);
        walk_g1_m->setObjectName(QString::fromUtf8("walk_g1_m"));

        gridLayout->addWidget(walk_g1_m, 2, 0, 1, 1);

        rotate_m = new QLabel(frame_2);
        rotate_m->setObjectName(QString::fromUtf8("rotate_m"));

        gridLayout->addWidget(rotate_m, 1, 0, 1, 1);

        translate_m = new QLabel(frame_2);
        translate_m->setObjectName(QString::fromUtf8("translate_m"));

        gridLayout->addWidget(translate_m, 0, 0, 1, 1);


        verticalLayout->addWidget(frame_2);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 5, 1);

        verticalSpacer_2 = new QSpacerItem(168, 105, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 3, 1, 1, 1);

        frame_3 = new QFrame(centralWidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(10);
        sizePolicy.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy);
        frame_3->setAutoFillBackground(false);
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Sunken);
        frame_3->setLineWidth(5);
        frame_3->setMidLineWidth(5);
        horizontalLayout = new QHBoxLayout(frame_3);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        static_label = new QLabel(frame_3);
        static_label->setObjectName(QString::fromUtf8("static_label"));

        horizontalLayout->addWidget(static_label);

        status_label = new QLabel(frame_3);
        status_label->setObjectName(QString::fromUtf8("status_label"));

        horizontalLayout->addWidget(status_label);


        gridLayout_3->addWidget(frame_3, 2, 1, 1, 1);

        connect_button = new QPushButton(centralWidget);
        connect_button->setObjectName(QString::fromUtf8("connect_button"));

        gridLayout_3->addWidget(connect_button, 0, 1, 1, 1);

        keypad_groupBox = new QGroupBox(centralWidget);
        keypad_groupBox->setObjectName(QString::fromUtf8("keypad_groupBox"));
        keypad_groupBox->setEnabled(false);
        gridLayout_2 = new QGridLayout(keypad_groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        center_button = new QPushButton(keypad_groupBox);
        center_button->setObjectName(QString::fromUtf8("center_button"));
        center_button->setEnabled(false);

        gridLayout_2->addWidget(center_button, 2, 2, 1, 1);

        up_button = new QPushButton(keypad_groupBox);
        up_button->setObjectName(QString::fromUtf8("up_button"));
        up_button->setEnabled(false);

        gridLayout_2->addWidget(up_button, 0, 2, 1, 1);

        stand_button = new QPushButton(keypad_groupBox);
        stand_button->setObjectName(QString::fromUtf8("stand_button"));
        stand_button->setEnabled(false);

        gridLayout_2->addWidget(stand_button, 3, 3, 1, 1);

        l1_button = new QPushButton(keypad_groupBox);
        l1_button->setObjectName(QString::fromUtf8("l1_button"));
        l1_button->setEnabled(false);

        gridLayout_2->addWidget(l1_button, 0, 1, 1, 1);

        left_button = new QPushButton(keypad_groupBox);
        left_button->setObjectName(QString::fromUtf8("left_button"));
        left_button->setEnabled(false);

        gridLayout_2->addWidget(left_button, 2, 1, 1, 1);

        sit_button = new QPushButton(keypad_groupBox);
        sit_button->setObjectName(QString::fromUtf8("sit_button"));
        sit_button->setEnabled(false);

        gridLayout_2->addWidget(sit_button, 3, 1, 1, 1);

        r1_button = new QPushButton(keypad_groupBox);
        r1_button->setObjectName(QString::fromUtf8("r1_button"));
        r1_button->setEnabled(false);

        gridLayout_2->addWidget(r1_button, 0, 3, 1, 1);

        right_button = new QPushButton(keypad_groupBox);
        right_button->setObjectName(QString::fromUtf8("right_button"));
        right_button->setEnabled(false);

        gridLayout_2->addWidget(right_button, 2, 3, 1, 1);

        down_button = new QPushButton(keypad_groupBox);
        down_button->setObjectName(QString::fromUtf8("down_button"));
        down_button->setEnabled(false);

        gridLayout_2->addWidget(down_button, 3, 2, 1, 1);


        gridLayout_3->addWidget(keypad_groupBox, 4, 1, 1, 1);

        verticalSpacer = new QSpacerItem(168, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 1, 1, 1, 1);

        FangControl->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FangControl);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 503, 21));
        FangControl->setMenuBar(menuBar);
        statusBar = new QStatusBar(FangControl);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        FangControl->setStatusBar(statusBar);

        retranslateUi(FangControl);
        QObject::connect(mode_button, SIGNAL(clicked()), FangControl, SLOT(update()));

        QMetaObject::connectSlotsByName(FangControl);
    } // setupUi

    void retranslateUi(QMainWindow *FangControl)
    {
        FangControl->setWindowTitle(QApplication::translate("FangControl", "FangControl", nullptr));
        mode_button->setText(QApplication::translate("FangControl", "Mode Select", nullptr));
        walk_g1_m->setText(QApplication::translate("FangControl", "Walk - Gait 1", nullptr));
        rotate_m->setText(QApplication::translate("FangControl", "Stationary - Rotate", nullptr));
        translate_m->setText(QApplication::translate("FangControl", "Stationary - Translate", nullptr));
        static_label->setText(QApplication::translate("FangControl", "Status:", nullptr));
        status_label->setText(QApplication::translate("FangControl", "Not Connected", nullptr));
        connect_button->setText(QApplication::translate("FangControl", "Connect", nullptr));
        center_button->setText(QApplication::translate("FangControl", "Center", nullptr));
        up_button->setText(QApplication::translate("FangControl", "Forward", nullptr));
        stand_button->setText(QApplication::translate("FangControl", "Stand", nullptr));
        l1_button->setText(QApplication::translate("FangControl", "+Z", nullptr));
        left_button->setText(QApplication::translate("FangControl", "Left", nullptr));
        sit_button->setText(QApplication::translate("FangControl", "Sit", nullptr));
        r1_button->setText(QApplication::translate("FangControl", "-Z", nullptr));
        right_button->setText(QApplication::translate("FangControl", "Right", nullptr));
        down_button->setText(QApplication::translate("FangControl", "Backward", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FangControl: public Ui_FangControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FANGCONTROL_H
