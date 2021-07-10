#include<iostream>

using namespace std;

int list_of_number[5] = { 5, 1,8,2,4 };

void swap(int a, int b) {
    int c = list_of_number[a];
    list_of_number[a] = list_of_number[b];
    list_of_number[b] = c;
}


void selection_sort() {
    int n = sizeof(list_of_number) / sizeof(list_of_number[0]); //length of array
    int i = 0;
    for (int i = 0; i < n; i++) {
        int max_index = 0;
        for (int j = 0; j < n - i; j++) {
            if (list_of_number[max_index] < list_of_number[j]) {
                max_index = j;
            }
        }
        swap(max_index, n - i - 1);
    }
}

void print_array() {
    int n = sizeof(list_of_number) / sizeof(list_of_number[0]); //length of array
    for (int i = 0; i < n; i++) {
        cout << list_of_number[i] << ",";
    }
}

int main() {
    selection_sort();
    print_array();
    return 0;
}