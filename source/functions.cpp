#include <cstdlib>
#include <vector>
#include "primegen.h"
std::vector<int> prime_amount(int num)
{
	std::vector<int> primes;
	primes.push_back(2);
	primes.push_back(3);
	while (primes.size() < num)
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
			}
		}
		primes.push_back(nextprime);
	}
	return (primes);
}
std::vector<int> prime_upto(int lim)
{
	std::vector<int> primes;
	primes.push_back(2);
	primes.push_back(3);
	while (primes.back() < lim)
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
			}
		}	
		primes.push_back(nextprime);
	}
	return (primes);
}
