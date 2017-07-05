#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argc, char *argv[])
{
  QGuiApplication app(argc, argv);

  QQmlApplicationEngine engine;
//  engine.addImportPath("D:\\Exercise\\Git\\QML\\QML_Plugin\\QML\\QMLPluginTest");
  engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

  return app.exec();
}

