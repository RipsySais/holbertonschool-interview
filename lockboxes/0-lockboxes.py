#!/usr/bin/python3
"""Module that solves the Lockboxes problem."""


def canUnlockAll(boxes):
    """
    Determine if all boxes can be unlocked.

    Args:
        boxes (list of lists): boxes[i] contains the keys to
            other boxes.

    Returns:
        bool: True if all boxes can be opened, else False.
    """
    opened = [0]
    keys_to_try = boxes[0][:]

    while keys_to_try:
        key = keys_to_try.pop()

        if key < len(boxes) and key not in opened:
            opened.append(key)
            keys_to_try.extend(boxes[key])

    return len(opened) == len(boxes)
