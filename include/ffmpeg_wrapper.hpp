extern "C" {
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
}
#include <string>

 static void getFfmpegVersion() {

	std::cout << "FFmpeg version: " << av_version_info() << std::endl;
}

 // add other wrapper functions here