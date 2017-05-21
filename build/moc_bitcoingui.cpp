/****************************************************************************
** Meta object code from reading C++ file 'bitcoingui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/bitcoingui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bitcoingui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ActiveLabel_t {
    QByteArrayData data[3];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ActiveLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ActiveLabel_t qt_meta_stringdata_ActiveLabel = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ActiveLabel"
QT_MOC_LITERAL(1, 12, 7), // "clicked"
QT_MOC_LITERAL(2, 20, 0) // ""

    },
    "ActiveLabel\0clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActiveLabel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void ActiveLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ActiveLabel *_t = static_cast<ActiveLabel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ActiveLabel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ActiveLabel::clicked)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ActiveLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_ActiveLabel.data,
      qt_meta_data_ActiveLabel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ActiveLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActiveLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ActiveLabel.stringdata0))
        return static_cast<void*>(const_cast< ActiveLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int ActiveLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void ActiveLabel::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_BitcoinGUI_t {
    QByteArrayData data[47];
    char stringdata0[606];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BitcoinGUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BitcoinGUI_t qt_meta_stringdata_BitcoinGUI = {
    {
QT_MOC_LITERAL(0, 0, 10), // "BitcoinGUI"
QT_MOC_LITERAL(1, 11, 17), // "setNumConnections"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "count"
QT_MOC_LITERAL(4, 36, 12), // "setNumBlocks"
QT_MOC_LITERAL(5, 49, 12), // "nTotalBlocks"
QT_MOC_LITERAL(6, 62, 19), // "setEncryptionStatus"
QT_MOC_LITERAL(7, 82, 6), // "status"
QT_MOC_LITERAL(8, 89, 5), // "error"
QT_MOC_LITERAL(9, 95, 5), // "title"
QT_MOC_LITERAL(10, 101, 7), // "message"
QT_MOC_LITERAL(11, 109, 5), // "modal"
QT_MOC_LITERAL(12, 115, 6), // "askFee"
QT_MOC_LITERAL(13, 122, 12), // "nFeeRequired"
QT_MOC_LITERAL(14, 135, 5), // "bool*"
QT_MOC_LITERAL(15, 141, 6), // "payFee"
QT_MOC_LITERAL(16, 148, 9), // "handleURI"
QT_MOC_LITERAL(17, 158, 6), // "strURI"
QT_MOC_LITERAL(18, 165, 16), // "gotoOverviewPage"
QT_MOC_LITERAL(19, 182, 15), // "gotoHistoryPage"
QT_MOC_LITERAL(20, 198, 19), // "gotoAddressBookPage"
QT_MOC_LITERAL(21, 218, 20), // "gotoReceiveCoinsPage"
QT_MOC_LITERAL(22, 239, 17), // "gotoSendCoinsPage"
QT_MOC_LITERAL(23, 257, 15), // "gotoMessagePage"
QT_MOC_LITERAL(24, 273, 18), // "gotoSignMessageTab"
QT_MOC_LITERAL(25, 292, 4), // "addr"
QT_MOC_LITERAL(26, 297, 20), // "gotoVerifyMessageTab"
QT_MOC_LITERAL(27, 318, 14), // "optionsClicked"
QT_MOC_LITERAL(28, 333, 12), // "aboutClicked"
QT_MOC_LITERAL(29, 346, 17), // "trayIconActivated"
QT_MOC_LITERAL(30, 364, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(31, 398, 6), // "reason"
QT_MOC_LITERAL(32, 405, 19), // "incomingTransaction"
QT_MOC_LITERAL(33, 425, 6), // "parent"
QT_MOC_LITERAL(34, 432, 5), // "start"
QT_MOC_LITERAL(35, 438, 3), // "end"
QT_MOC_LITERAL(36, 442, 15), // "incomingMessage"
QT_MOC_LITERAL(37, 458, 13), // "encryptWallet"
QT_MOC_LITERAL(38, 472, 12), // "backupWallet"
QT_MOC_LITERAL(39, 485, 16), // "changePassphrase"
QT_MOC_LITERAL(40, 502, 12), // "unlockWallet"
QT_MOC_LITERAL(41, 515, 10), // "lockWallet"
QT_MOC_LITERAL(42, 526, 21), // "showNormalIfMinimized"
QT_MOC_LITERAL(43, 548, 13), // "fToggleHidden"
QT_MOC_LITERAL(44, 562, 12), // "toggleHidden"
QT_MOC_LITERAL(45, 575, 12), // "updateWeight"
QT_MOC_LITERAL(46, 588, 17) // "updateStakingIcon"

    },
    "BitcoinGUI\0setNumConnections\0\0count\0"
    "setNumBlocks\0nTotalBlocks\0setEncryptionStatus\0"
    "status\0error\0title\0message\0modal\0"
    "askFee\0nFeeRequired\0bool*\0payFee\0"
    "handleURI\0strURI\0gotoOverviewPage\0"
    "gotoHistoryPage\0gotoAddressBookPage\0"
    "gotoReceiveCoinsPage\0gotoSendCoinsPage\0"
    "gotoMessagePage\0gotoSignMessageTab\0"
    "addr\0gotoVerifyMessageTab\0optionsClicked\0"
    "aboutClicked\0trayIconActivated\0"
    "QSystemTrayIcon::ActivationReason\0"
    "reason\0incomingTransaction\0parent\0"
    "start\0end\0incomingMessage\0encryptWallet\0"
    "backupWallet\0changePassphrase\0"
    "unlockWallet\0lockWallet\0showNormalIfMinimized\0"
    "fToggleHidden\0toggleHidden\0updateWeight\0"
    "updateStakingIcon"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BitcoinGUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  169,    2, 0x0a /* Public */,
       4,    2,  172,    2, 0x0a /* Public */,
       6,    1,  177,    2, 0x0a /* Public */,
       8,    3,  180,    2, 0x0a /* Public */,
      12,    2,  187,    2, 0x0a /* Public */,
      16,    1,  192,    2, 0x0a /* Public */,
      18,    0,  195,    2, 0x08 /* Private */,
      19,    0,  196,    2, 0x08 /* Private */,
      20,    0,  197,    2, 0x08 /* Private */,
      21,    0,  198,    2, 0x08 /* Private */,
      22,    0,  199,    2, 0x08 /* Private */,
      23,    0,  200,    2, 0x08 /* Private */,
      24,    1,  201,    2, 0x08 /* Private */,
      24,    0,  204,    2, 0x28 /* Private | MethodCloned */,
      26,    1,  205,    2, 0x08 /* Private */,
      26,    0,  208,    2, 0x28 /* Private | MethodCloned */,
      27,    0,  209,    2, 0x08 /* Private */,
      28,    0,  210,    2, 0x08 /* Private */,
      29,    1,  211,    2, 0x08 /* Private */,
      32,    3,  214,    2, 0x08 /* Private */,
      36,    3,  221,    2, 0x08 /* Private */,
      37,    1,  228,    2, 0x08 /* Private */,
      38,    0,  231,    2, 0x08 /* Private */,
      39,    0,  232,    2, 0x08 /* Private */,
      40,    0,  233,    2, 0x08 /* Private */,
      41,    0,  234,    2, 0x08 /* Private */,
      42,    1,  235,    2, 0x08 /* Private */,
      42,    0,  238,    2, 0x28 /* Private | MethodCloned */,
      44,    0,  239,    2, 0x08 /* Private */,
      45,    0,  240,    2, 0x08 /* Private */,
      46,    0,  241,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    9,   10,   11,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 14,   13,   15,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,   33,   34,   35,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,   33,   34,   35,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   43,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BitcoinGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BitcoinGUI *_t = static_cast<BitcoinGUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setNumConnections((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setNumBlocks((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->setEncryptionStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->error((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 4: _t->askFee((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2]))); break;
        case 5: _t->handleURI((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->gotoOverviewPage(); break;
        case 7: _t->gotoHistoryPage(); break;
        case 8: _t->gotoAddressBookPage(); break;
        case 9: _t->gotoReceiveCoinsPage(); break;
        case 10: _t->gotoSendCoinsPage(); break;
        case 11: _t->gotoMessagePage(); break;
        case 12: _t->gotoSignMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->gotoSignMessageTab(); break;
        case 14: _t->gotoVerifyMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->gotoVerifyMessageTab(); break;
        case 16: _t->optionsClicked(); break;
        case 17: _t->aboutClicked(); break;
        case 18: _t->trayIconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 19: _t->incomingTransaction((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 20: _t->incomingMessage((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 21: _t->encryptWallet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->backupWallet(); break;
        case 23: _t->changePassphrase(); break;
        case 24: _t->unlockWallet(); break;
        case 25: _t->lockWallet(); break;
        case 26: _t->showNormalIfMinimized((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->showNormalIfMinimized(); break;
        case 28: _t->toggleHidden(); break;
        case 29: _t->updateWeight(); break;
        case 30: _t->updateStakingIcon(); break;
        default: ;
        }
    }
}

const QMetaObject BitcoinGUI::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_BitcoinGUI.data,
      qt_meta_data_BitcoinGUI,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BitcoinGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BitcoinGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BitcoinGUI.stringdata0))
        return static_cast<void*>(const_cast< BitcoinGUI*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int BitcoinGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 31)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 31;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
