#ifndef PLUGININFO_H
#define PLUGININFO_H

#include <QString>
#include <QStringList>

class PluginInfo
{
public:

   QString getTitle();
   QString getAuthor();
   QString getVersion();
   QString getDescription();
   QStringList getCodes();

    PluginInfo();
    PluginInfo(QString title, QString author, QString version, QString description, QStringList codes);

private:

    QString title;
    QString author;
    QString version;
    QString description;
    QStringList codes;

};

#endif // PLUGININFO_H
