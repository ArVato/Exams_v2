#include "plugininfo.hpp"

PluginInfo::PluginInfo(){
}

PluginInfo::PluginInfo(QString title, QString author, QString version, QString description, QStringList codes) :
    title(title), author(author), version(version), description(description),  codes(codes) {}

QString PluginInfo::getTitle() {
    return title;
}

QString PluginInfo::getAuthor() {
    return author;
}

QString PluginInfo::getVersion() {
    return version;
}

QString PluginInfo::getDescription() {
    return description;
}

QStringList PluginInfo::getCodes() {
    return codes;
}

