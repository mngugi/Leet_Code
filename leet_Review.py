# -*- coding: utf-8 -*-
"""
Spyder Editor
Author: Peter Mwangi
Purpose: Leet Recap
This script demonstrates basic function usage in Python.
"""

import keyword  # Required for accessing Python's keyword list

# Function to return components of a house
def building_house():
    house = ["Foundation", "Walls", "Roof"]
    return house

print("House Components:", building_house())

# Function to return components of a commercial building
def building_commercial():
    commercial = ["Foundation", "Walls", "Roof", "Windows", "Doors"]
    return commercial

print("Commercial Building Components:", building_commercial())

# Function to return components of a shed
def building_shed():
    shed = ["Foundation", "Walls", "Roof", "Doors", "Columns"]
    return shed  # Fixed: was returning wrong variable (commercial)

print("Shed Components:", building_shed())  # Fixed: corrected print label and function

# Function to print Python soft keywords
def keywords():
    return keyword.softkwlist  # Requires Python 3.9+

print("Python Soft Keywords:", keywords())
