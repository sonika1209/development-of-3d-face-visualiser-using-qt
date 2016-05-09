/****************************************************************************
** Meta object code from reading C++ file 'window.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../window.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Window_t {
    QByteArrayData data[19];
    char stringdata0[348];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Window_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Window_t qt_meta_stringdata_Window = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Window"
QT_MOC_LITERAL(1, 7, 18), // "on_zoomOut_clicked"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 31), // "on_horizontalSlider_sliderMoved"
QT_MOC_LITERAL(4, 59, 8), // "position"
QT_MOC_LITERAL(5, 68, 33), // "on_horizontalSlider_2_sliderM..."
QT_MOC_LITERAL(6, 102, 17), // "on_zoomIn_clicked"
QT_MOC_LITERAL(7, 120, 14), // "on_map_clicked"
QT_MOC_LITERAL(8, 135, 17), // "on_movePX_clicked"
QT_MOC_LITERAL(9, 153, 17), // "on_moveMX_clicked"
QT_MOC_LITERAL(10, 171, 17), // "on_movePY_clicked"
QT_MOC_LITERAL(11, 189, 17), // "on_moveMY_clicked"
QT_MOC_LITERAL(12, 207, 19), // "on_rotatePX_clicked"
QT_MOC_LITERAL(13, 227, 19), // "on_rotateMX_clicked"
QT_MOC_LITERAL(14, 247, 19), // "on_rotateMY_clicked"
QT_MOC_LITERAL(15, 267, 19), // "on_rotatePY_clicked"
QT_MOC_LITERAL(16, 287, 19), // "on_rotatePZ_clicked"
QT_MOC_LITERAL(17, 307, 19), // "on_rotateMZ_clicked"
QT_MOC_LITERAL(18, 327, 20) // "on_closemain_clicked"

    },
    "Window\0on_zoomOut_clicked\0\0"
    "on_horizontalSlider_sliderMoved\0"
    "position\0on_horizontalSlider_2_sliderMoved\0"
    "on_zoomIn_clicked\0on_map_clicked\0"
    "on_movePX_clicked\0on_moveMX_clicked\0"
    "on_movePY_clicked\0on_moveMY_clicked\0"
    "on_rotatePX_clicked\0on_rotateMX_clicked\0"
    "on_rotateMY_clicked\0on_rotatePY_clicked\0"
    "on_rotatePZ_clicked\0on_rotateMZ_clicked\0"
    "on_closemain_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Window[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08 /* Private */,
       3,    1,   95,    2, 0x08 /* Private */,
       5,    1,   98,    2, 0x08 /* Private */,
       6,    0,  101,    2, 0x08 /* Private */,
       7,    0,  102,    2, 0x08 /* Private */,
       8,    0,  103,    2, 0x08 /* Private */,
       9,    0,  104,    2, 0x08 /* Private */,
      10,    0,  105,    2, 0x08 /* Private */,
      11,    0,  106,    2, 0x08 /* Private */,
      12,    0,  107,    2, 0x08 /* Private */,
      13,    0,  108,    2, 0x08 /* Private */,
      14,    0,  109,    2, 0x08 /* Private */,
      15,    0,  110,    2, 0x08 /* Private */,
      16,    0,  111,    2, 0x08 /* Private */,
      17,    0,  112,    2, 0x08 /* Private */,
      18,    0,  113,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Window *_t = static_cast<Window *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_zoomOut_clicked(); break;
        case 1: _t->on_horizontalSlider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_horizontalSlider_2_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_zoomIn_clicked(); break;
        case 4: _t->on_map_clicked(); break;
        case 5: _t->on_movePX_clicked(); break;
        case 6: _t->on_moveMX_clicked(); break;
        case 7: _t->on_movePY_clicked(); break;
        case 8: _t->on_moveMY_clicked(); break;
        case 9: _t->on_rotatePX_clicked(); break;
        case 10: _t->on_rotateMX_clicked(); break;
        case 11: _t->on_rotateMY_clicked(); break;
        case 12: _t->on_rotatePY_clicked(); break;
        case 13: _t->on_rotatePZ_clicked(); break;
        case 14: _t->on_rotateMZ_clicked(); break;
        case 15: _t->on_closemain_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Window::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Window.data,
      qt_meta_data_Window,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Window::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Window.stringdata0))
        return static_cast<void*>(const_cast< Window*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
