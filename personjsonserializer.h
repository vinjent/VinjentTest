#ifndef PERSONJSONSERIALIZER
#define PERSONJSONSERIALIZER
#include "jsonserializable.h"

class PersonJsonSerializer
{

public:

   static QString serialize(const JsonSerializable &obj);

   static void parse(const QString &json, JsonSerializable &jsonSerializable);

private:

   PersonJsonSerializer();

};
#endif // PERSONJSONSERIALIZER

