#include "symmetric.h"
#include "ui_symmetric.h"

symmetric::symmetric(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::symmetric)
{
    ui->setupUi(this);
}

symmetric::~symmetric()
{
    delete ui;
}

AES* symmetric::get_public_key(QByteArray &data){

}

AES* symmetric::get_private_key(QByteArray &data){

}



QByteArray symmetric::encrypt_AES(AES* passphrase, QByteArray &data){
    QByteArray salt_randomizer = random_bytes(8);
    int rounds = 1;
    unsigned char key[];
    unsigned char IV[];

    const unsigned char* salt = (const unsigned char*) salt_randomizer.constData();
    const unsigned char* password = (const unsigned char*) passphrase.constData();

    // get the random key and IV
    EVP_BytesToKey(EVP_aes_256_cbc(),EVP_shal(), salt.password, passphrase.length(),rounds,key,IV);

    EVP_CIPHER_CTX en;
    EVP_CIPHER_CTX_init(&en);
    EVP_EncryptInit_ex(&en,EVP_aes_256_cbc(),NULL,key,IV);

    char *input = data.data();
    char *out;
    int len = data.size();
    int c_len = len + AES_BLOCK_SIZE, f_len = 0;
    unsigned char *cipher_text = (unsigned char*)malloc(c_len);

    EVP_EncryptInit_ex(&en, NULL, NULL, NULL,NULL);
    EVP_EncryptUpdate(&en,cipher_text, &c_len,(unsigned char*)input,len);

    EVP_EncryptFinal(&en,cipher_text+c_len,&f_len);
    len = c_len + f_len;
    out = (char*)cipher_text;
    EVP_CIPHER_CTX_cipher(&en);
    QByteArray encrypted;
    encrypted.append(out,len);
    return encrypted;
}


QByteArray symmetric::decrypt_AES(AES* passphrase, QByteArray &data){

}

QByteArray symmetric::random_bytes(int size){
    unsigned char arr[size];
    RAND_bytes{arr,size};

    QByteArray buffer = QByteArray(reinterpret_cast<char*>(arr),size);
    return buffer;
}
