/****************************************************************************
** Meta object code from reading C++ file 'mdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MDialog_t {
    QByteArrayData data[20];
    char stringdata0[402];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MDialog_t qt_meta_stringdata_MDialog = {
    {
QT_MOC_LITERAL(0, 0, 7), // "MDialog"
QT_MOC_LITERAL(1, 8, 16), // "on_close_clicked"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 31), // "on_horizontalSlider_sliderMoved"
QT_MOC_LITERAL(4, 58, 8), // "position"
QT_MOC_LITERAL(5, 67, 33), // "on_horizontalSlider_2_sliderM..."
QT_MOC_LITERAL(6, 101, 20), // "on_zoomMapIn_clicked"
QT_MOC_LITERAL(7, 122, 21), // "on_zoomMapOut_clicked"
QT_MOC_LITERAL(8, 144, 20), // "on_moveMapPX_clicked"
QT_MOC_LITERAL(9, 165, 20), // "on_moveMapMX_clicked"
QT_MOC_LITERAL(10, 186, 20), // "on_moveMapPY_clicked"
QT_MOC_LITERAL(11, 207, 20), // "on_moveMapMY_clicked"
QT_MOC_LITERAL(12, 228, 22), // "on_rotateMapPX_clicked"
QT_MOC_LITERAL(13, 251, 22), // "on_rotateMapMX_clicked"
QT_MOC_LITERAL(14, 274, 22), // "on_rotateMapPY_clicked"
QT_MOC_LITERAL(15, 297, 22), // "on_rotateMapMY_clicked"
QT_MOC_LITERAL(16, 320, 22), // "on_rotateMapPZ_clicked"
QT_MOC_LITERAL(17, 343, 22), // "on_rotateMapMZ_clicked"
QT_MOC_LITERAL(18, 366, 16), // "on_light_clicked"
QT_MOC_LITERAL(19, 383, 18) // "on_lightOf_clicked"

    },
    "MDialog\0on_close_clicked\0\0"
    "on_horizontalSlider_sliderMoved\0"
    "position\0on_horizontalSlider_2_sliderMoved\0"
    "on_zoomMapIn_clicked\0on_zoomMapOut_clicked\0"
    "on_moveMapPX_clicked\0on_moveMapMX_clicked\0"
    "on_moveMapPY_clicked\0on_moveMapMY_clicked\0"
    "on_rotateMapPX_clicked\0on_rotateMapMX_clicked\0"
    "on_rotateMapPY_clicked\0on_rotateMapMY_clicked\0"
    "on_rotateMapPZ_clicked\0on_rotateMapMZ_clicked\0"
    "on_light_clicked\0on_lightOf_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x08 /* Private */,
       3,    1,  100,    2, 0x08 /* Private */,
       5,    1,  103,    2, 0x08 /* Private */,
       6,    0,  106,    2, 0x08 /* Private */,
       7,    0,  107,    2, 0x08 /* Private */,
       8,    0,  108,    2, 0x08 /* Private */,
       9,    0,  109,    2, 0x08 /* Private */,
      10,    0,  110,    2, 0x08 /* Private */,
      11,    0,  111,    2, 0x08 /* Private */,
      12,    0,  112,    2, 0x08 /* Private */,
      13,    0,  113,    2, 0x08 /* Private */,
      14,    0,  114,    2, 0x08 /* Private */,
      15,    0,  115,    2, 0x08 /* Private */,
      16,    0,  116,    2, 0x08 /* Private */,
      17,    0,  117,    2, 0x08 /* Private */,
      18,    0,  118,    2, 0x08 /* Private */,
      19,    0,  119,    2, 0x08 /* Private */,

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
    QMetaType::Void,

       0        // eod
};

void MDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MDialog *_t = static_cast<MDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_close_clicked(); break;
        case 1: _t->on_horizontalSlider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_horizontalSlider_2_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_zoomMapIn_clicked(); break;
        case 4: _t->on_zoomMapOut_clicked(); break;
        case 5: _t->on_moveMapPX_clicked(); break;
        case 6: _t->on_moveMapMX_clicked(); break;
        case 7: _t->on_moveMapPY_clicked(); break;
        case 8: _t->on_moveMapMY_clicked(); break;
        case 9: _t->on_rotateMapPX_clicked(); break;
        case 10: _t->on_rotateMapMX_clicked(); break;
        case 11: _t->on_rotateMapPY_clicked(); break;
        case 12: _t->on_rotateMapMY_clicked(); break;
        case 13: _t->on_rotateMapPZ_clicked(); break;
        case 14: _t->on_rotateMapMZ_clicked(); break;
        case 15: _t->on_light_clicked(); break;
        case 16: _t->on_lightOf_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MDialog.data,
      qt_meta_data_MDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MDialog.stringdata0))
        return static_cast<void*>(const_cast< MDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int MDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
