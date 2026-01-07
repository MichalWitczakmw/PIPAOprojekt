/****************************************************************************
** Meta object code from reading C++ file 'DefaultBoards.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../DefaultBoards.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DefaultBoards.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_DefaultBoards_t {
    uint offsetsAndSizes[14];
    char stringdata0[14];
    char stringdata1[5];
    char stringdata2[5];
    char stringdata3[5];
    char stringdata4[7];
    char stringdata5[5];
    char stringdata6[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_DefaultBoards_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_DefaultBoards_t qt_meta_stringdata_DefaultBoards = {
    {
        QT_MOC_LITERAL(0, 13),  // "DefaultBoards"
        QT_MOC_LITERAL(14, 4),  // "Mode"
        QT_MOC_LITERAL(19, 4),  // "Test"
        QT_MOC_LITERAL(24, 4),  // "Easy"
        QT_MOC_LITERAL(29, 6),  // "Medium"
        QT_MOC_LITERAL(36, 4),  // "Hard"
        QT_MOC_LITERAL(41, 4)   // "Evil"
    },
    "DefaultBoards",
    "Mode",
    "Test",
    "Easy",
    "Medium",
    "Hard",
    "Evil"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_DefaultBoards[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    5,   19,

 // enum data: key, value
       2, uint(DefaultBoards::Test),
       3, uint(DefaultBoards::Easy),
       4, uint(DefaultBoards::Medium),
       5, uint(DefaultBoards::Hard),
       6, uint(DefaultBoards::Evil),

       0        // eod
};

Q_CONSTINIT const QMetaObject DefaultBoards::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DefaultBoards.offsetsAndSizes,
    qt_meta_data_DefaultBoards,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_DefaultBoards_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DefaultBoards, std::true_type>
    >,
    nullptr
} };

void DefaultBoards::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *DefaultBoards::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DefaultBoards::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DefaultBoards.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DefaultBoards::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
