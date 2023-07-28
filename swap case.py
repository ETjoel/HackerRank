def swap_case(s):
    ans = ""
    for i in range(len(s)):
        if s[i].islower():
            ans += s[i].upper()
        elif s[i].isupper():
            ans += s[i].lower()
        else:
            ans += s[i]
    return ans

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
