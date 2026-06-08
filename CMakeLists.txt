cmake_minimum_required(VERSION 3.20)
project(algorithms)

set(CMAKE_CXX_STANDARD 17)

# Находим все .cpp файлы в папке Graph
file(GLOB SOURCES "Graph/*.cpp")

# Создаём отдельный исполняемый файл для КАЖДОГО .cpp файла
foreach(SOURCE_FILE ${SOURCES})
    get_filename_component(EXECUTABLE_NAME ${SOURCE_FILE} NAME_WE)
    add_executable(${EXECUTABLE_NAME} ${SOURCE_FILE})
endforeach()