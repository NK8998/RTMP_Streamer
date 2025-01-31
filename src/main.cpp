#include <iostream>
#include <include/ffmpeg_wrapper.hpp>
extern "C" {
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
}

template <size_t N>
static int getArrayLength(int(&arr)[N]) {
	return N;
}

int main() {

	// Print FFmpeg version
	getFfmpegVersion();

	std::cout << "RTMP Streamer Initialized" << std::endl;

	return 0;
}