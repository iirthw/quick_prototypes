set (
    LIB_HEADERS
    # public
    "public/Image.h"
    "public/ImageAtlas.h"
    "public/Rectangle.h"
    "public/util/Utils.h"
    )

set (
    LIB_SOURCES 
    # impl
    "impl/Image.cpp" 
    "impl/ImageAtlas.cpp"
    )


set (SOURCE_FILES ${LIB_HEADERS} ${LIB_SOURCES})

add_library (${CMAKE_PROJECT_NAME} STATIC ${SOURCE_FILES})
target_include_directories (
    ${CMAKE_PROJECT_NAME} 
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/public
    )