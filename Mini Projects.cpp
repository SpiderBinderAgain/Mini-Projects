#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    
}

int PrimeFinder(int primeCount)
{
	std::vector<int> primes;
	int num = 2;

	while (primes.size() < primeCount)
	{
		bool prime = true;
		for (int i = 0; i < primes.size() && sqrt(num) >= primes[i] && prime; i++)
		{
			if (num % primes[i] == 0)
			{
				prime = false;
			}
		}

		if (prime)
		{
			primes.push_back(num);
		}
	}


}