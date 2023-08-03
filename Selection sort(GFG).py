class Solution: 
    def select(self, arr, i):
        l = i
        for j in range(i, len(arr)):
            if arr[l] > arr[j]:
                l = j
        return l
    
    def selectionSort(self, arr,n):
        for i in range(n):
            l = self.select(arr, i)
            arr[i], arr[l] = arr[l], arr[i]
            #print(arr, l)
