#include <iostream>
#include <cstdlib>
#include <vector>
std::vector<int> primegen(int lim)
{
	std::vector<int> primes;
	primes.push_back(2);
	primes.push_back(3);
	while (primes.size() < lim)
	{
		int nextprime = primes.back() + 2;
		while (true)
		{
			bool isprime = true;
			for(int i = 0; i < primes.size(); i++)
			{
				if (nextprime % primes[i] == 0)
				{
					isprime = false;
					break;
				}
			}
			if (isprime)
			{
				break;
			}
			else{
				nextprime += 2;	
				break;
			}
		}
		primes.push_back(nextprime);
	}
	return (primes);
}
int main(int argc, char *argv[])
{
	int num = std::atoi(argv[1]);
	std::vector<int> p = primegen(num);
	for (int i = 0; i < p.size(); i++)
	{
		std::cout << p[i] << " | ";
	}
	std::cout << std::endl;
}
