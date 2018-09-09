#pragma once
#include <map>
#include <string>
#include <vector>
#include "types.h"

namespace hui
{
class TextCache
{
public:
	TextCache();
	~TextCache();
	//TODO: warning for dynamic text that can change per frame, maybe that should not be cached
	// or just convert from utf8 to utf32 directly every frame, check speed
	UnicodeString* getText(const char* text);

protected:
	std::map<std::string, UnicodeString*> texts;
};

}