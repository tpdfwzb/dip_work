/****************************************************************************
** Meta object code from reading C++ file 'vodPlayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "../../vodPlayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vodPlayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_vodPlayer_t {
    QByteArrayData data[8];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_vodPlayer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_vodPlayer_t qt_meta_stringdata_vodPlayer = {
    {
QT_MOC_LITERAL(0, 0, 9), // "vodPlayer"
QT_MOC_LITERAL(1, 10, 8), // "imgReady"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 3), // "img"
QT_MOC_LITERAL(4, 24, 9), // "vodErrLog"
QT_MOC_LITERAL(5, 34, 3), // "err"
QT_MOC_LITERAL(6, 38, 11), // "vodFinished"
QT_MOC_LITERAL(7, 50, 6) // "vodRun"

    },
    "vodPlayer\0imgReady\0\0img\0vodErrLog\0err\0"
    "vodFinished\0vodRun"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_vodPlayer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       6,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void vodPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        vodPlayer *_t = static_cast<vodPlayer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->imgReady((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 1: _t->vodErrLog((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->vodFinished(); break;
        case 3: _t->vodRun(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (vodPlayer::*_t)(QImage );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&vodPlayer::imgReady)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (vodPlayer::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&vodPlayer::vodErrLog)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (vodPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&vodPlayer::vodFinished)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject vodPlayer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_vodPlayer.data,
      qt_meta_data_vodPlayer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *vodPlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *vodPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_vodPlayer.stringdata0))
        return static_cast<void*>(const_cast< vodPlayer*>(this));
    return QObject::qt_metacast(_clname);
}

int vodPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void vodPlayer::imgReady(QImage _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void vodPlayer::vodErrLog(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void vodPlayer::vodFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
