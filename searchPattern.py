"""
In this snippet, we are searching for a pattern in a text by finding all subarrays of that specific size and checking if any of them match the pattern. If a match is found, a flag is set to True.
"""

text = input()

pattern = input()

sz = len(pattern)

flag = False
for i in range(0,len(text)):
    if i+sz >= len(text) : 
        pass
    found = True
    for k in range(i,i+sz):
        if text[k] == pattern[k-i]:
            pass
        else:
            found = False
            break
    if(found == True):
        flag = True
        break

if flag == True:
    print("pattern found")
else:
    print("Pattern Not Found")