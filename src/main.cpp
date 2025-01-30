#include <iostream>
extern "C" {
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
}

template <size_t N>
static int getArrayLength(int(&arr)[N]) {
	return N;
}

int main() {
	// Initialize FFmpeg library

	// Print FFmpeg version
	std::cout << "FFmpeg version: " << av_version_info() << std::endl;

	std::cout << "RTMP Streamer Initialized" << std::endl;

	return 0;
}