#pragma once

#include "MidiExports.h"

class MIDI_API CSharedFunctionsMidi
{
public:
	CSharedFunctionsMidi(void);
	~CSharedFunctionsMidi(void);

	static int GetSizeFile(CString filename);
	static int HexToInt(char inChar);
	static unsigned long StringHexToLong(CString inString);
	static unsigned char StringToUnsignedChar(CString inString);
	static unsigned char StringToSignedChar(CString inString);
	static unsigned short StringToUnsignedShort(CString inString);
	static double round(double number);
};
