# Write an immutable function that merges the following inputs into a single list. (Feel free to use the space below or submit a link to your work.)

# Inputs
# - Original list of strings
# - List of strings to be added
# - List of strings to be removed

# Return
# - List shall only contain unique values
# - List shall be ordered as follows
# --- Most character count to least character count
# --- In the event of a tie, reverse alphabetical

# Other Notes
# - You can use any programming language you like
# - The function you submit shall be runnable

# For example:

# Original List = ['one', 'two', 'three',]
# Add List = ['one', 'two', 'five', 'six]
# Delete List = ['two', 'five']
# Result List = ['three', 'six', 'one']

def sortList(inputList, addList, deleteList):
    strDict = dict()
    combineList = [inputList, addList]

    for l in combineList:
        for e in l:
            strDict.setdefault(e, None)
    for e in deleteList:
        if (strDict[e] == None):
            strDict.pop(e)

    resultList = sorted(sorted(strDict, reverse=True), key=len, reverse=True)
    return resultList

inputList = ['one', 'two', 'three']
addList = ['one', 'two', 'five', 'six']
deleteList = ['two', 'five']
resultList = sortList(inputList, addList, deleteList)
print("The returning list: ", resultList)