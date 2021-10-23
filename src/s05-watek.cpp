#include <thread>
#include <iostream>
#include <string>


auto f(int x, int y) -> void
{
	std::cout << x << " " << y << "\n";
}

std::thread watek;



auto main() -> int
{
	for(int i = 1; i <= 5; i ++)
	{

		for(int j = 1; j <= 5; j++) {
			watek = std::thread{f, i, j};
			if(j < 5) watek.detach();
		}
		watek.join();
		std::cout << "---" << "\n";
	}

	return 0;
}
