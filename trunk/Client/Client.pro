######################################################################
# Automatically generated by qmake (2.01a) Mon Jul 12 14:28:35 2010
######################################################################

TEMPLATE = app
TARGET = 
QT += gui
QT += core
DEPENDPATH += . \
              include \
              src \
INCLUDEPATH += . \
               include \
               include/SFML \

LIBPATH += -L../lib/SFML

LIBS    += -lsfml-system -lsfml-window -lsfml-network -lsfml-graphics
# Input
HEADERS += include/AGameObject.hpp \
           include/AGameWindow.hpp \
           include/Client.hpp \
           include/EventManager.hpp \
           include/Graphics.hpp \
           include/MainWindow.hpp \
           include/Network.hpp \
           include/Ressources.hpp \
           include/SpriteManager.hpp \
           include/TCPClient.hpp \

SOURCES += src/AGameObject.cpp \
           src/AGameWindow.cpp \
           src/Client.cpp \
           src/EventManager.cpp \
           src/Graphics.cpp \
           src/main.cpp \
           src/MainWindow.cpp \
           src/Network.cpp \
           src/Renderer.cpp \
           src/Ressources.cpp \
           src/SpriteManager.cpp \
           src/TCPClient.cpp