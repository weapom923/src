#include <cstdio>
#include "./kmu.h"

namespace kmu
{
	void initialize(Config &config)
	{
		printf("%d\n", config.dummy);
	}

	void initialize()
	{
		auto config = Config();
		initialize(config);
	}

	void finalize()
	{
		printf("See you!\n");
	}
}

