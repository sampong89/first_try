def coutDigit(a):
    static intctr = 0
    if(a != 0):
        coutDigit(a/10)

    return ctr

a = int(input("Enter the number: "))
print(a," have ",coutDigit(a)," digits")