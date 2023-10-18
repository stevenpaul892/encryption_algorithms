#ifndef SYMMETRIC_H
#define SYMMETRIC_H

#include <QMainWindow>
#include <QDebug>
#include <QFile>
#include <openssl/aes.h>


#define KEYSIZE_32
#define IVSIZE 32
#define BLOCKSIZE 256
#define SALTSIZE 8


QT_BEGIN_NAMESPACE
namespace Ui { class symmetric; }
QT_END_NAMESPACE

class symmetric : public QMainWindow
{
    Q_OBJECT

public:
    symmetric(QWidget *parent = nullptr);
    ~symmetric();
    AES* *get_public_key(QByteArray &data);
    AES* get_private_key(QByteArray &data);
    QByteArray encrypt_AES(AES* passphrase, QByteArray &data);
    QByteArray decrypt_AES(AES* passphrase, QByteArray &data);
    QByteArray random_bytes(int size);



signals:
public slots:

private:
    void initialize();
    void finalize();
    QByteArray read_file(QString filename);
    void write_file(Qstring filename, QByteArray);
    Ui::symmetric *ui;
};
#endif // SYMMETRIC_H
