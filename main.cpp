#include <QCoreApplication>
#include "person.h"
#include "personjsonserializer.h"
#include "personcontainer.h"
#include <QDebug>
#include <iostream>
#include <QList>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    //person
    Person person;
    person.set_id(3);
    person.set_name("Ugo");
    person.set_surname("Lugo");
    person.set_email("ugolugo@test.it");

    QString json = PersonJsonSerializer::serialize(person);
    //qDebug() << "JSON=" <<  json;
    std::cout << json.toStdString();

    Person parsedPerson;
    PersonJsonSerializer::parse(json, parsedPerson);
    qDebug() << "Person:id" << parsedPerson.name();

    //personcontainer
    PersonContainer container;
    Person p1;
    p1.set_id(13);
    p1.set_name("Davide");
    p1.set_surname("Ling");
    p1.set_email("davideling@hotmail.it");
    container.add(p1);

    Person p2;
    p2.set_id(15);
    p2.set_name("Pippo");
    p2.set_surname("Foo");
    p2.set_email("pippo@foo.it");
    container.add(p2);

    // Serialize
    QString jsonStr = PersonJsonSerializer::serialize(container);

    std::cout << jsonStr.toStdString();
    // Parse serialization output to rebuild persons list
    PersonContainer parsedContainer;
    PersonJsonSerializer::parse(jsonStr, parsedContainer);

    QList<Person> persons = parsedContainer.getPersons();
    qDebug() << "Person:id" << persons[0].name();

    return a.exec();
}

