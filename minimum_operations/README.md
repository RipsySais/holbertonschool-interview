# Minimum Operations

## Description
This project solves the "Minimum Operations" technical interview
problem: given a text file starting with a single `H` character and
only two available operations (`Copy All` and `Paste`), determine
the fewest number of operations needed to reach exactly n `H`
characters.

## Files

### 0-minoperations.py
Contains the function `minOperations(n)` which returns the minimum
number of operations needed to reach n H characters, or 0 if it is
impossible (n <= 1). The solution is based on summing the prime
factors of n, since multiplying the current count by a prime factor
p costs exactly p operations (1 Copy All + (p-1) Paste).

## Requirements
- Python 3.4.3 on Ubuntu 14.04 LTS
- PEP 8 style (version 1.7.x)
- All files executable and end with a new line
