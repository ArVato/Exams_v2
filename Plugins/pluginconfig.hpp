#ifndef PLUGINCONFIG_HPP
#define PLUGINCONFIG_HPP

#include <QString>
#include <QList>

class PluginConfig
{
public:
    class Unit
    {
    public:
        QString code;
        QString title;
        QString practisefile;
        QString testfile;
    };


    PluginConfig();
    QList<Unit> units;
    QString title;
    QString author;
    QString version;
    QString startcode;

};

#endif // PLUGINCONFIG_HPP
