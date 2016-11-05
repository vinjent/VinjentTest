#ifndef PERSONCONTAINER
#define PERSONCONTAINER
#include "person.h"
#include <QList>

class PersonContainer:public JsonSerializable
{
public:

    void add(Person &p);
    void write(QJsonObject &jsonObj) const;
    void read(const QJsonObject &jsonObj);

   QList<Person> getPersons() const;

private:
   QList<Person> persons;


};
#endif // PERSONCONTAINER

