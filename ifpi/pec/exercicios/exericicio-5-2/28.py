def alfabeto(s):
    if (s == 'a'or s == 'e' or s == 'i' or s == 'o' or s == 'u' or s == 'A'or s == 'E' or s == 'I' or s == 'O' or s == 'U'):
        s = False
    elif(s.isalpha()):
        s = True
    else:
        s = False
    return s

def main():
    s = str(input().strip())
    print(alfabeto(s))
    
if __name__ == '__main__':
    main()
