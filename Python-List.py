if __name__ == '__main__':
    N = int(input())
    arr = []
    for i in range(N):
        a = list(input().strip().split())
        if a[0] == "insert":
            arr.insert(int(a[1]), int(a[2]))
        elif a[0] == "print":
            print(arr)
        elif a[0] == "remove":
            arr.remove(int(a[1]))
        elif a[0] == "append":
            arr.append(int(a[1]))
        elif a[0] == "sort":
            arr = sorted(arr)
        elif a[0] == "pop":
            arr.pop()
        elif a[0] == "reverse":
            arr = arr[::-1]
        a.clear()
