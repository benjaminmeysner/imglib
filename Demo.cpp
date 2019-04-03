#include "BasicFuncImpl.h"

#include <assert.h>

using namespace ImLib::Controls;

int main()
{
	std::vector<float> image
	{
		1, 1, 1, 1, 1, 1, 1, 1,
		1, 1, 1, 1, 1, 1, 1, 1,
		1, 1, 1, 1, 1, 1, 1, 1,
		1, 1, 1, 1, 1, 1, 1, 1,
		1, 1, 1, 1, 1, 1, 1, 1,
		1, 1, 1, 1, 1, 1, 1, 1,
		1, 1, 1, 1, 1, 1, 1, 1,
		1, 1, 1, 1, 1, 1, 1, 1,
	};

	auto out = PadImage(image, 8, 8, 1, 1, 1, 1, 7.0f);

	std::vector<float> expectedImage
	{
		7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
		7, 1, 1, 1, 1, 1, 1, 1, 1, 7,
		7, 1, 1, 1, 1, 1, 1, 1, 1, 7,
		7, 1, 1, 1, 1, 1, 1, 1, 1, 7,
		7, 1, 1, 1, 1, 1, 1, 1, 1, 7,
		7, 1, 1, 1, 1, 1, 1, 1, 1, 7,
		7, 1, 1, 1, 1, 1, 1, 1, 1, 7,
		7, 1, 1, 1, 1, 1, 1, 1, 1, 7,
		7, 1, 1, 1, 1, 1, 1, 1, 1, 7,
		7, 7, 7, 7, 7, 7, 7, 7, 7, 7
	};

	assert(!(image == expectedImage));

	return 0;
}