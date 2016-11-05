#ifndef JSONSERIALIZABLE
#define JSONSERIALIZABLE
#include <QJsonObject>
class JsonSerializable
{
public:
   virtual ~JsonSerializable() {}

    virtual void read(const QJsonObject &jsonObj) = 0;
    virtual void write(QJsonObject &jsonObj) const = 0;
};
#endif // JSONSERIALIZABLE

