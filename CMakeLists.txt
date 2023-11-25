cmake_minimum_required(VERSION 3.14)

project(radio_1Test LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(radio_1Test
  main.cpp
  estacion1.h estacion1.cpp
  estacion2.h estacion2.cpp
  estacion3.h estacion3.cpp
)
target_link_libraries(radio_1Test Qt${QT_VERSION_MAJOR}::Core)

include(GNUInstallDirs)
install(TARGETS radio_1Test
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
