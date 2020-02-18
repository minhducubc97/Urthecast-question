/**
 * Write a function that calculates the nth Fibonacci number in O(n) time 
 * or better without using any "for" or "while" loops. (Feel free to use 
 * the space below or submit a link to your work.)
 */

#include "fibonacci.h"
#include <map>

using std::map;

/**
 * Calculates the nth Fibonacci number
 * @param n The index of the number to be generated.
 * @return The nth Fibonacci number.
 */
unsigned long fibonacci(unsigned long n)
{
  if (n == 0)
  {
    return 0;
  }
  else if (n == 1)
  {
    return 1;
  }
  else
  {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}

/**
 * Calculates the nth Fibonacci number using memoization. (YES, I am trying to be fancy here ;))
 * @param n Which number to generate.
 * @return The nth Fibonacci number.
 */
unsigned long memoized_fibonacci(unsigned long n)
{
  static map<unsigned long, unsigned long> tMap = {{0, 0}, {1, 1}};

  auto lookup = tMap.find(n);
  if (lookup != tMap.end())
  {
    return lookup->second;
  }
  else
  {
    tMap[n] = memoized_fibonacci(n - 1) + memoized_fibonacci(n - 2);
    return tMap[n];
  }
  return 0;
}
