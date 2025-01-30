#include <iostream>


template <size_t N>
static int getArrayLength(int(&arr)[N]) {
	return N;
}

int main() {
	std::cout << "RTMP Streamer Initialized!!" << std::endl;

	int myArray[] = { 1, 2, 3, 4, 5 };

	int length = sizeof(myArray) / sizeof(int);

	std::cout << length << "\n";

	for (int i = 0; i < getArrayLength(myArray); i++) {

		std::cout << myArray[i] << "\n";

	}
	return 0;
}