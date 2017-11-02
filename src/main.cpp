// main.cpp
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <bitset>
#include <iomanip>
using std::cout;
using std::endl;

#include "readWav.h"

std::string FILENAME = "./wav.wav";

int main(int argc, char **argv)
{
	fstream fs;
	wav_struct WAV;

	fs.open(FILENAME.c_string(), ios::binary | ios::in)

	

	return 0;
}
