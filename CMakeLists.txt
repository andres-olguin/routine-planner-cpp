cmake_minimum_required(VERSION 3.16)
project(RoutinePlannerCPP VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(routine_domain STATIC SistemaEntrenamiento.cpp)
target_include_directories(routine_domain PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(routine_planner main.cpp)
target_link_libraries(routine_planner PRIVATE routine_domain)

include(CTest)
if(BUILD_TESTING)
    add_executable(routine_model_tests tests/test_models.cpp)
    target_link_libraries(routine_model_tests PRIVATE routine_domain)
    add_test(NAME routine_model_tests COMMAND routine_model_tests)
endif()
