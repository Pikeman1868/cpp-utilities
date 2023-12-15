
include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest/
  GIT_TAG v1.14.0
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

file(GLOB TEST_LIST CONFIGURE_DEPENDS "*.cpp")

add_executable(
  Test-${PROJECT_NAME}
  ${TEST_LIST}
)
target_link_libraries(
  Test-${PROJECT_NAME} PRIVATE
  GTest::gtest_main
  ${PROJECT_NAME}_lib
)

include(GoogleTest)
gtest_discover_tests(Test-${PROJECT_NAME})