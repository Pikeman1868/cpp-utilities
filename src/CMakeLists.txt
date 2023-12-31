# Note that headers are optional, and do not affect add_library, but they will not
# show up in IDEs unless they are listed in add_library.

# Optionally glob, but only for CMake 3.12 or later:
file(GLOB HEADER_LIST CONFIGURE_DEPENDS "*.hpp")
file(GLOB SOURCE_LIST CONFIGURE_DEPENDS "*.cpp")

# Make an automatic library - will be static or dynamic based on user setting
add_library(${PROJECT_NAME}_lib ${SOURCE_LIST} ${HEADER_LIST})

# We need this directory, and users of our library will need it too
target_include_directories(${PROJECT_NAME}_lib PUBLIC .)

# All users of this library will need at least C++11
target_compile_features(${PROJECT_NAME}_lib PUBLIC cxx_std_11)

# IDEs should put the headers in a nice place
# source_group(
#   TREE "${PROJECT_SOURCE_DIR}/include"
#   PREFIX "Header Files"
#   FILES ${HEADER_LIST})

