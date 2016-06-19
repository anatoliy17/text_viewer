cmake_minimum_required(VERSION 2.8)
project(text_viewer)

set(CMAKE_AUTOMOC ON)
FIND_PACKAGE(Qt4 COMPONENTS QtCore QtGui REQUIRED)
INCLUDE(${QT_USE_FILE})
ADD_DEFINITIONS(${QT_DEFINITIONS})

file(GLOB_RECURSE ALL_SOURCES ./include/*.h ./src/*.cpp)
set(${ALL_SOURCES})
add_executable(text_viewer ${ALL_SOURCES}
        include/setupMenu.cpp
        include/setupEditor.cpp
        include/openFile.cpp
        include/about.cpp include/q.cpp)
target_link_libraries (text_viewer ${QT_LIBRARIES} PocoFoundation)