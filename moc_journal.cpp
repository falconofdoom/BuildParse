/****************************************************************************
** Meta object code from reading C++ file 'journal.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Untitled Folder/citParse/journal.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'journal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Journal_t {
    QByteArrayData data[13];
    char stringdata[237];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Journal_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Journal_t qt_meta_stringdata_Journal = {
    {
QT_MOC_LITERAL(0, 0, 7),
QT_MOC_LITERAL(1, 8, 21),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 23),
QT_MOC_LITERAL(4, 55, 23),
QT_MOC_LITERAL(5, 79, 5),
QT_MOC_LITERAL(6, 85, 23),
QT_MOC_LITERAL(7, 109, 23),
QT_MOC_LITERAL(8, 133, 23),
QT_MOC_LITERAL(9, 157, 4),
QT_MOC_LITERAL(10, 162, 22),
QT_MOC_LITERAL(11, 185, 24),
QT_MOC_LITERAL(12, 210, 26)
    },
    "Journal\0on_toolButton_clicked\0\0"
    "on_toolButton_3_clicked\0on_journalTable_clicked\0"
    "index\0on_toolButton_5_clicked\0"
    "on_toolButton_4_clicked\0on_lineEdit_textChanged\0"
    "arg1\0on_volumeTable_clicked\0"
    "on_volumeTable_activated\0"
    "on_editJournButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Journal[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    1,   61,    2, 0x08 /* Private */,
       6,    0,   64,    2, 0x08 /* Private */,
       7,    0,   65,    2, 0x08 /* Private */,
       8,    1,   66,    2, 0x08 /* Private */,
      10,    1,   69,    2, 0x08 /* Private */,
      11,    1,   72,    2, 0x08 /* Private */,
      12,    0,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void,

       0        // eod
};

void Journal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Journal *_t = static_cast<Journal *>(_o);
        switch (_id) {
        case 0: _t->on_toolButton_clicked(); break;
        case 1: _t->on_toolButton_3_clicked(); break;
        case 2: _t->on_journalTable_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->on_toolButton_5_clicked(); break;
        case 4: _t->on_toolButton_4_clicked(); break;
        case 5: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_volumeTable_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->on_volumeTable_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->on_editJournButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Journal::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Journal.data,
      qt_meta_data_Journal,  qt_static_metacall, 0, 0}
};


const QMetaObject *Journal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Journal::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Journal.stringdata))
        return static_cast<void*>(const_cast< Journal*>(this));
    return QDialog::qt_metacast(_clname);
}

int Journal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
