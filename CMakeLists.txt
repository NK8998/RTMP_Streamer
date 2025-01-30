cmake_minimum_required(VERSION 3.19)
project(RTMP_Streamer)

set(CMAKE_GENERATOR_PLATFORM x64)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add FFmpeg include directories
include_directories(libraries/ffmpeg/include)

# Find the FFmpeg libraries
find_library(AVFORMAT_LIB NAMES avformat PATHS libraries/ffmpeg/lib)
find_library(AVCODEC_LIB NAMES avcodec PATHS libraries/ffmpeg/lib)
find_library(AVUTIL_LIB NAMES avutil PATHS libraries/ffmpeg/lib)
find_library(SWSCALE_LIB NAMES swscale PATHS libraries/ffmpeg/lib)

# Add the source files and create the executable
add_executable(RTMP_Streamer src/main.cpp)

# Link the FFmpeg libraries
target_link_libraries(RTMP_Streamer ${AVFORMAT_LIB} ${AVCODEC_LIB} ${AVUTIL_LIB} ${SWSCALE_LIB})

# Copy FFmpeg DLL files to the output directory
set(FFMPEG_DLLS
    avcodec-61.dll
    avdevice-61.dll
    avfilter-10.dll
    avformat-61.dll
    avutil-59.dll
    postproc-58.dll
    swresample-5.dll
    swscale-8.dll
)

foreach(DLL_FILE ${FFMPEG_DLLS})
    configure_file(libraries/ffmpeg/dlls/${DLL_FILE} ${CMAKE_BINARY_DIR}/${DLL_FILE} COPYONLY)
endforeach()
