/****************************************************************************
** Meta object code from reading C++ file 'lcdrange.h'
**
** Created: Wed Apr 30 11:01:43 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "lcdrange.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lcdrange.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LCDRange[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   10,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      43,   37,    9,    9, 0x0a,
      75,   57,    9,    9, 0x0a,
      98,   93,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_LCDRange[] = {
    "LCDRange\0\0newValue\0valueChanged(int)\0"
    "value\0setValue(int)\0minValue,maxValue\0"
    "setRange(int,int)\0text\0setText(QString)\0"
};

void LCDRange::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LCDRange *_t = static_cast<LCDRange *>(_o);
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setRange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LCDRange::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LCDRange::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LCDRange,
      qt_meta_data_LCDRange, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LCDRange::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LCDRange::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LCDRange::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LCDRange))
        return static_cast<void*>(const_cast< LCDRange*>(this));
    return QWidget::qt_metacast(_clname);
}

int LCDRange::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void LCDRange::valueChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
