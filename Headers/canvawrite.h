#ifndef CANVAWRITE_H
#define CANVAWRITE_H
#include<QVector>
#include<QString>
#include "Headers/customdialog.h"
#include "Headers/controllerstore.h"
#include <QTextStream>

class Canvawrite
{
public:
    Canvawrite(QString _plugDir, bool _bigDPI);
    void setMainModuleAttributes(QVector<QString> portVec);
    void setControllersAttributes(QVector<QString> portVec);
    QString getPlugin_name();
    QString getModule_name();
    QString getPanel_image_name();
    QVector<Controllerstore*> getControlVec();
    void writeHeader();
    void writePluginCPP();
    void writeModuleCanva();
    void writeControllerDef(QTextStream &stream_);
    void transferImageFiles();
private:
    QString module_name;
    QString panel_image_name;
    QVector<Controllerstore*> controlVec;
    QVector<Controllerstore*> controlVecWoDoublons;
    QVector<QString> writedWidgetVec;
    QString panelWidth;
    QString plugin_file_name;
    QString modules_files_names;
    QString current_module_file_name;
    QString models_name;
    QString website;
    QStringList FileToWriteInList;
    QStringList CPPFileToWriteInList;
    QString plugDir;
    bool fontFileTransfered;
    bool screenUsed;
    bool bigDPI;
};

#endif // CANVASTORE_H
