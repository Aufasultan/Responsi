#include <iostream>
using namespace std;

void mergeSortedLists(int list1[], int n1, int list2[], int n2, int merged[]) {
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (list1[i] < list2[j])
            merged[k++] = list1[i++];
        else
            merged[k++] = list2[j++];
    }

    while (i < n1)
        merged[k++] = list1[i++];
    while (j < n2)
        merged[k++] = list2[j++];
}

int main() {
    int list1[] = {1, 3, 5};
    int n1 = 3;
    int list2[] = {2, 4, 6};
    int n2 = 3;
    int expectedMerged[] = {1, 2, 3, 4, 5, 6};
    int merged[n1 + n2];

    mergeSortedLists(list1, n1, list2, n2, merged);

    bool success = true;
    for (int i = 0; i < n1 + n2; i++) {
        if (merged[i] != expectedMerged[i]) {
            success = false;
            break;
        }
    }

    if (success) {
        cout << "SUCCESSFULLY" << endl;
    } else {
        cout << "FAILED" << endl;
    }

    return 0;
}
