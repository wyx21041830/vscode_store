from re import I

def fact (x):
    if x==1:
        return 1
    return x*fact(x-1)




print(fact(20))