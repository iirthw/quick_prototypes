project (QuickPrototypesLib)

include_directories (public public)

set (
    LIB_HEADERS
    # public
    public/Image.h
    public/ImageAtlas.h
    )

set (
    LIB_SOURCES 
    # impl
    "impl/Image.cpp" 
    "impl/ImageAtlas.cpp"
    )

message ("<==== Found QuickPrototypesLib HEADERS:\n ${LIB_HEADERS} \n====>")
message ("<==== Found QuickPrototypesLib SOURCES:\n ${LIB_SOURCES} \n====>")

add_library (QuickPrototypesLib STATIC ${LIB_SOURCES})

target_include_directories (QuickPrototypesLib PUBLIC
                            public
                           )