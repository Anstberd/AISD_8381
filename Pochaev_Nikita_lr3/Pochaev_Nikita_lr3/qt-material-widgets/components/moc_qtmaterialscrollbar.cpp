/****************************************************************************
** Meta object code from reading C++ file 'qtmaterialscrollbar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qtmaterialscrollbar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtmaterialscrollbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtMaterialScrollBar_t {
    QByteArrayData data[4];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtMaterialScrollBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtMaterialScrollBar_t qt_meta_stringdata_QtMaterialScrollBar = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QtMaterialScrollBar"
QT_MOC_LITERAL(1, 20, 11), // "canvasColor"
QT_MOC_LITERAL(2, 32, 15), // "backgroundColor"
QT_MOC_LITERAL(3, 48, 11) // "sliderColor"

    },
    "QtMaterialScrollBar\0canvasColor\0"
    "backgroundColor\0sliderColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtMaterialScrollBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QColor, 0x00095103,
       2, QMetaType::QColor, 0x00095103,
       3, QMetaType::QColor, 0x00095103,

       0        // eod
};

void QtMaterialScrollBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QtMaterialScrollBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->canvasColor(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->backgroundColor(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->sliderColor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QtMaterialScrollBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCanvasColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setSliderColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QtMaterialScrollBar::staticMetaObject = { {
    &QScrollBar::staticMetaObject,
    qt_meta_stringdata_QtMaterialScrollBar.data,
    qt_meta_data_QtMaterialScrollBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtMaterialScrollBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtMaterialScrollBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtMaterialScrollBar.stringdata0))
        return static_cast<void*>(this);
    return QScrollBar::qt_metacast(_clname);
}

int QtMaterialScrollBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
