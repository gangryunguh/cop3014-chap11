cmake_minimum_required(VERSION 3.10)
project(chap11)

set(CMAKE_CXX_STANDARD 11)
set(SOURCE_FILES app/Pr11-1.cpp app/Pr11-2.cpp app/Pr11-3.cpp
        app/Pr11-4.cpp app/Pr11-5.cpp app/Pr11-6.cpp
        app/Pr11-7.cpp app/Pr11-8.cpp app/Pr11-9.cpp
        app/Pr11-10.cpp app/Pr11-11.cpp app/Pr11-12.cpp
        app/Pr11-13.cpp app/Pr11-14.cpp app/Pr11-15.cpp
        app/Pr11-16.cpp app/Pr11-17.cpp app/Pr11-18.cpp
        app/Pr11-19.cpp)

add_executable(Pr11-1.exe app/Pr11-1.cpp )
add_executable(Pr11-2.exe app/Pr11-2.cpp)
add_executable(Pr11-3.exe app/Pr11-3.cpp)
add_executable(Pr11-4.exe app/Pr11-4.cpp)
add_executable(Pr11-5.exe app/Pr11-5.cpp)
add_executable(Pr11-6.exe app/Pr11-6.cpp)
add_executable(Pr11-7.exe app/Pr11-7.cpp)
add_executable(Pr11-8.exe app/Pr11-8.cpp)
add_executable(Pr11-9.exe app/Pr11-9.cpp )
add_executable(Pr11-10.exe app/Pr11-10.cpp)
add_executable(Pr11-11.exe app/Pr11-11.cpp)
add_executable(Pr11-12.exe app/Pr11-12.cpp)

if (WIN32)
    set(SFML_STATIC_LIBRARIES TRUE)
endif()

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML REQUIRED COMPONENTS audio graphics window system)

#if (SFML_FOUND)
#    include_directories(${SFML_INCLUDE_DIR})
#    if (WIN32)
#        target_link_libraries(draw_sin.exe ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})
#        target_link_libraries(draw_map.exe ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})
#    else()
#        target_link_libraries(draw_sin.exe ${SFML_LIBRARIES})
#        target_link_libraries(draw_map.exe ${SFML_LIBRARIES})
#    endif()
#endif()