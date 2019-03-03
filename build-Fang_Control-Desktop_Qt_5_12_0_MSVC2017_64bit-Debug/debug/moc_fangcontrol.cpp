/****************************************************************************
** Meta object code from reading C++ file 'fangcontrol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../GUI_source_code/fangcontrol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fangcontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FangControl_t {
    QByteArrayData data[25];
    char stringdata0[435];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FangControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FangControl_t qt_meta_stringdata_FangControl = {
    {
QT_MOC_LITERAL(0, 0, 11), // "FangControl"
QT_MOC_LITERAL(1, 12, 9), // "connected"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "name"
QT_MOC_LITERAL(4, 28, 12), // "disconnected"
QT_MOC_LITERAL(5, 41, 19), // "socketErrorOccurred"
QT_MOC_LITERAL(6, 61, 11), // "errorString"
QT_MOC_LITERAL(7, 73, 15), // "messageReceived"
QT_MOC_LITERAL(8, 89, 6), // "sender"
QT_MOC_LITERAL(9, 96, 7), // "message"
QT_MOC_LITERAL(10, 104, 23), // "on_right_button_pressed"
QT_MOC_LITERAL(11, 128, 22), // "on_down_button_pressed"
QT_MOC_LITERAL(12, 151, 22), // "on_left_button_pressed"
QT_MOC_LITERAL(13, 174, 20), // "on_up_button_pressed"
QT_MOC_LITERAL(14, 195, 25), // "on_connect_button_clicked"
QT_MOC_LITERAL(15, 221, 14), // "connect_enable"
QT_MOC_LITERAL(16, 236, 22), // "on_mode_button_clicked"
QT_MOC_LITERAL(17, 259, 20), // "on_l1_button_pressed"
QT_MOC_LITERAL(18, 280, 20), // "on_r1_button_pressed"
QT_MOC_LITERAL(19, 301, 24), // "on_center_button_pressed"
QT_MOC_LITERAL(20, 326, 21), // "on_sit_button_pressed"
QT_MOC_LITERAL(21, 348, 23), // "on_stand_button_pressed"
QT_MOC_LITERAL(22, 372, 21), // "onSocketErrorOccurred"
QT_MOC_LITERAL(23, 394, 29), // "QBluetoothSocket::SocketError"
QT_MOC_LITERAL(24, 424, 10) // "readSocket"

    },
    "FangControl\0connected\0\0name\0disconnected\0"
    "socketErrorOccurred\0errorString\0"
    "messageReceived\0sender\0message\0"
    "on_right_button_pressed\0on_down_button_pressed\0"
    "on_left_button_pressed\0on_up_button_pressed\0"
    "on_connect_button_clicked\0connect_enable\0"
    "on_mode_button_clicked\0on_l1_button_pressed\0"
    "on_r1_button_pressed\0on_center_button_pressed\0"
    "on_sit_button_pressed\0on_stand_button_pressed\0"
    "onSocketErrorOccurred\0"
    "QBluetoothSocket::SocketError\0readSocket"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FangControl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,
       4,    0,  107,    2, 0x06 /* Public */,
       5,    1,  108,    2, 0x06 /* Public */,
       7,    2,  111,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,  116,    2, 0x08 /* Private */,
      11,    0,  117,    2, 0x08 /* Private */,
      12,    0,  118,    2, 0x08 /* Private */,
      13,    0,  119,    2, 0x08 /* Private */,
      14,    1,  120,    2, 0x08 /* Private */,
      16,    0,  123,    2, 0x08 /* Private */,
      17,    0,  124,    2, 0x08 /* Private */,
      18,    0,  125,    2, 0x08 /* Private */,
      19,    0,  126,    2, 0x08 /* Private */,
      20,    0,  127,    2, 0x08 /* Private */,
      21,    0,  128,    2, 0x08 /* Private */,
       1,    0,  129,    2, 0x08 /* Private */,
      22,    1,  130,    2, 0x08 /* Private */,
      24,    0,  133,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,    2,
    QMetaType::Void,

       0        // eod
};

void FangControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FangControl *_t = static_cast<FangControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->disconnected(); break;
        case 2: _t->socketErrorOccurred((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->messageReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->on_right_button_pressed(); break;
        case 5: _t->on_down_button_pressed(); break;
        case 6: _t->on_left_button_pressed(); break;
        case 7: _t->on_up_button_pressed(); break;
        case 8: _t->on_connect_button_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_mode_button_clicked(); break;
        case 10: _t->on_l1_button_pressed(); break;
        case 11: _t->on_r1_button_pressed(); break;
        case 12: _t->on_center_button_pressed(); break;
        case 13: _t->on_sit_button_pressed(); break;
        case 14: _t->on_stand_button_pressed(); break;
        case 15: _t->connected(); break;
        case 16: _t->onSocketErrorOccurred((*reinterpret_cast< QBluetoothSocket::SocketError(*)>(_a[1]))); break;
        case 17: _t->readSocket(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FangControl::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FangControl::connected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FangControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FangControl::disconnected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FangControl::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FangControl::socketErrorOccurred)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FangControl::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FangControl::messageReceived)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FangControl::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_FangControl.data,
    qt_meta_data_FangControl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FangControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FangControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FangControl.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int FangControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void FangControl::connected(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FangControl::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FangControl::socketErrorOccurred(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FangControl::messageReceived(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
