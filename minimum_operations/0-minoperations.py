#!/usr/bin/python3

"""Module that calculates the minimum number of operations needed
to reach exactly n H characters, using only Copy All and Paste.
"""


def minOperations(n):
    """
    Calculate the fewest number of operations (Copy All / Paste)
    needed to result in exactly n H characters in the file.

    Args:
        n (int): the target number of H characters.

    Returns:
        int: the minimum number of operations, or 0 if n is
            impossible to achieve (n <= 1).
    """
    if n <= 1:
        return 0

    operations = 0
    factor = 2

    while n > 1:
        while n % factor == 0:
            operations += factor
            n //= factor
        factor += 1

    return operations
