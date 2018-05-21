#pragma once
#include <vector>
#include "Screen.h"
class Window_mgr
{
public:

private:
	std::vector<Screen> screens{ Screen(20,80,' ') };
};

