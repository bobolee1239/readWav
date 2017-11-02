// readWav.h

#ifndef WAVSTRUCT_H
#define WAVSTRUCT_H

struct wav_struct
{
	unsigned long file_size;
	unsigned short channel;
	unsigned long frequency;
	unsigned long Bps;
	unsigned short numBits_per_sample;
	unsigned long data_size;
	unsigned char *data;
};

int hex_char_value(vhar ss);
int hex2Dec(const char *s);

#endif
