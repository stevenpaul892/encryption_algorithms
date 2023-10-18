QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    symmetric.cpp

HEADERS += \
    symmetric.h

FORMS += \
    symmetric.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../../../../Qt/Tools/OpenSSLv3/Win_x64/lib/ -llibcrypto
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../../../../Qt/Tools/OpenSSLv3/Win_x64/lib/ -llibcryptod
else:unix: LIBS += -L$$PWD/../../../../../../Qt/Tools/OpenSSLv3/Win_x64/lib/ -llibcrypto

INCLUDEPATH += $$PWD/../../../../../../Qt/Tools/OpenSSLv3/Win_x64/lib
DEPENDPATH += $$PWD/../../../../../../Qt/Tools/OpenSSLv3/Win_x64/lib

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../../../../Qt/Tools/OpenSSLv3/Win_x64/lib/ -llibcrypto
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../../../../Qt/Tools/OpenSSLv3/Win_x64/lib/ -llibcryptod
else:unix: LIBS += -L$$PWD/../../../../../../Qt/Tools/OpenSSLv3/Win_x64/lib/ -llibcrypto

INCLUDEPATH += $$PWD/../../../../../../Qt/Tools/OpenSSLv3/Win_x64/lib
DEPENDPATH += $$PWD/../../../../../../Qt/Tools/OpenSSLv3/Win_x64/lib
