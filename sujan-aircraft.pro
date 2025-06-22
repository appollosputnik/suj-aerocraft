################################################################
# Qwt Widget Library
# Copyright (C) 1997   Josef Wilgen
# Copyright (C) 2002   Uwe Rathmann
#
# This library is free software; you can redistribute it and/or
# modify it under the terms of the Qwt License, Version 1.0
###################################################################

QWT_ROOT = C:/Qt/Qt5.14.2/5.14.2/msvc2017/plugins/qwt-6.1.4
include( $${QWT_ROOT}/qwtconfig.pri )
include( $${QWT_ROOT}/qwtbuild.pri )
include( $${QWT_ROOT}/qwtfunctions.pri )

QWT_OUT_ROOT = $${OUT_PWD}/../..

INCLUDEPATH += $${QWT_ROOT}/src
DEPENDPATH  += $${QWT_ROOT}/src



QT    +=  core gui widgets

Template = app

TARGET = sujan-fly


HEADERS += mainwidget.h geometry.h  tabwidget.h mainwindow.h
SOURCES += main.cpp geometryengine.cpp mainwidget.cpp tabwidget.cpp mainwindow.cpp 
RESOURCES += textures.qrc shaders.qrc vshader.glsl fshader.glsl

LIBS   = -lqwtd