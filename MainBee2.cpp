#include <string>
#include <stdio.h>
#include <inttypes.h>
#include <string.h>

#include <stdio.h>
#include <bee2/defs.h>
#include <bee2/core/mem.h>
#include <bee2/core/hex.h>
#include <bee2/core/u32.h>
#include <bee2/core/util.h>
#include <bee2/core/word.h>
#include <bee2/crypto/belt.h>
#include <stdio.h>
#include <inttypes.h>
#include <string.h>
#include "../../apps/bsum/bsum.c"



extern "C"
{
	//__declspec(dllexport) void BeltHash(octet* content, uint8_t* result) {
	//	octet state[1024];
	//	octet hash[32];

	//	beltHash(hash, content, 32);
	//	
	//	for (int i = 0; i < sizeof(hash); i++)
	//	{
	//		result[i] = hash[i];
	//	}
	//}


	__declspec(dllexport) void BeltHash(octet* content, int contentSize, char* hash)
	{
		const char* result = bsumPrint(content, contentSize);

		std::string resultString = result;

		strcpy(hash, resultString.c_str());
	}
}
