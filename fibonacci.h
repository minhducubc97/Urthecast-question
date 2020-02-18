/**
 * Header file for calculating the nth Fibonacci number using normal way and memoization
 */

#ifndef FIBONACCI_H
#define FIBONACCI_H

/**
 * Calculates the nth Fibonacci number
 * @param n The index of the number to be generated.
 * @return The nth Fibonacci number.
 */
unsigned long fibonacci(unsigned long n);

/**
 * Calculates the nth Fibonacci number using memoization.
 * @param n Which number to generate.
 * @return The nth Fibonacci number.
 */
unsigned long memoized_fibonacci(unsigned long n);

#endif /* FIBONACCI_H */
