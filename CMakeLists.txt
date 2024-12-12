cmake_minimum_required(VERSION 3.18)
set(BOOST_ALL_STATIC_LIB ON)
include(${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake)

project(test VERSION 1.0.0 LANGUAGES CXX)
find_package(boost_asio CONFIG REQUIRED)

add_executable(main main.cpp)
target_link_libraries(main PRIVATE Boost::asio)
target_compile_features(main PUBLIC cxx_std_20)