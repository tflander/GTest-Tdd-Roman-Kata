include_directories( 
    ${PROJECT_SOURCE_DIR}/src 
    ${PROJECT_SOURCE_DIR}/mock
)

add_executable(${PROJECT_NAME} 
  test_roman.cpp
  ../src/roman.cpp
)

target_link_libraries(${PROJECT_NAME} gtest_main)


include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME})
