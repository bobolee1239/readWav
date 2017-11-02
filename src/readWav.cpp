// readWav.cpp
#include <iostream>
#include <cmath>

#include "readWav.h"

int hex_char_value(char ss)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a'&& c <= 'f')
		return ((c - 'a') + 10);
	else if (c >= 'A' && c <= 'F')
		return ((c - 'A') + 10);
	
	std::cerr << "Sth Wrong when converting " << ss << " to interger!" << endl;

	return 0;
}

int hex2Dec(const char *s)
{
	int len = 2;
	int ans = 0;
	for (int i=0; i<len; i++)
		result += (int)pow(float(16), int(len - i - 1)) * hex_char_value(s[i]);
	return ans;
}
