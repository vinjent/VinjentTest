#ifndef PERSON
#define PERSON
#include"jsonserializable.h"
#include <QString>

class Person:public JsonSerializable
{
public:
   //[... getters and setters ...]
    Person();
    virtual ~Person();

    QString name() const;
    void set_name(const QString &name);
    int id() const;
    void set_id(int id);
    QString surname() const;
    void set_surname(const QString &surname);
    QString email() const;
    void set_email(const QString &email);

    void read(const QJsonObject &jsonObj);
    void write(QJsonObject &jsonObj) const;
private:
   qint64 _id;
   QString _name;
   QString _surname;
   QString _email;
};
#endif // PERSON

