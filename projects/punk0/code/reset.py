# create a new list
# with the value 0,0,0,1
# returns:
#   [0,0,0,1]
def reset():
    r = []
    # start from 1, upto but not
    # including 5
    for i in range(1, 5):
        v = 0
        if i == 3:
            v = 1
        r.append(v)

    return r


print(reset())