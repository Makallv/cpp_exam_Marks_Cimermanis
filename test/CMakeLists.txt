enable_testing()
set(GTEST_LIBRARY "C:/Users/marks/Downloads/googletest/googletest/cmake-build-debug/lib/libgtest.a")
set(GTEST_MAIN_LIBRARY "C:/Users/marks/Downloads/googletest/googletest/cmake-build-debug/lib/libgtest_main.a")
set(GTEST_INCLUDE_DIR "C:/Users/marks/Downloads/GTest/include")

find_package(GTest REQUIRED)

add_executable(Exam_test
        Triangle_test.cpp
        ${CMAKE_SOURCE_DIR}/include/Triangle.h
        ${CMAKE_SOURCE_DIR}/src/Triangle.cpp)

target_include_directories(Exam_test PRIVATE ${CMAKE_SOURCE_DIR}/include)

target_link_libraries(Exam_test GTest::GTest GTest::Main)

#majas stacionarais
#C:/Users/marks/googletest/cmake-build-debug/lib/libgtest.a
#C:/Users/marks/googletest/cmake-build-debug/lib/libgtest_main.a
#C:/Users/marks/googletest/googletest/include

#skolas laptops
#C:/Users/marks/Downloads/googletest/googletest/cmake-build-debug/lib/libgtest.a
#C:/Users/marks/Downloads/googletest/googletest/cmake-build-debug/lib/libgtest_main.a
#C:/Users/marks/Downloads/GTest/include