#include "person.h"
#include <QString>

/*
建構子
*/
Person::Person() /*: QAbstractTableModel()*/ {

}

/*
析構子
*/
Person::~Person() {
}

QString Person::email() const
{
    return _email;
}

void Person::set_email(const QString &email)
{
    _email = email;
}

int Person::id() const
{
    return _id;
}

void Person::set_id(int id)
{
    _id = id;
}

QString Person::name() const
{
    return _name;
}

void Person::set_name(const QString &name)
{
    _name = name;
}

QString Person::surname() const
{
    return _surname;
}

void Person::set_surname(const QString &surname)
{
    _surname = surname;
}

void Person::read(const QJsonObject &jsonObj)
{
    this->set_name(jsonObj["name"].toString());
    this->set_surname(jsonObj["surname"].toString());
    this->set_email(jsonObj["email"].toString());
    this->set_id(jsonObj["id"].toInt());
}

void Person::write(QJsonObject &jsonObj) const
{
    jsonObj["name"] = this->name();
    jsonObj["surname"] = this->surname();
    jsonObj["email"] = this->email();
    jsonObj["id"] = this->id();
}
