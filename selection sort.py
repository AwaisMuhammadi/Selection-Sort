
list_of_numbers = []


def swap(a, b):
    c = list_of_numbers[a]
    list_of_numbers[a] = list_of_numbers[b]
    list_of_numbers[b] = c


def selection_sort():
    n = len(list_of_numbers)
    i = 0
    while i < n:
        j = 0
        max_index = 0
        while j < n-i:
            if list_of_numbers[max_index] < list_of_numbers[j]:
                max_index = j
            j = j + 1
        swap(max_index, n - i-1)
        i = i + 1


def take_input(n):
    for i in range(n):
        list_of_numbers.append(input("Enter number:"))


take_input(int(input("Enter Length of the list:")))
selection_sort()
print("Sorted List:")
print(list_of_numbers)