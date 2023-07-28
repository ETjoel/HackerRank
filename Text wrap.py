import textwrap

def wrap(string, max_width):
    count = 0
    ans = ""
    t = len(string) // max_width
    i = 0
    while t >= 0:
        ans += string[i:i + max_width]
        ans += '\n'
        t -= 1
        i += max_width
    ans += string[i:len(string)]
    return ans

if __name__ == '__main__':
    string, max_width = input(), int(input())
    result = wrap(string, max_width)
    print(result)
