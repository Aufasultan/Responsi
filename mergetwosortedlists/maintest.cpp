#include <iostream>
using namespace std;
int main() {
    int n1 = 3;
    int n2 = 4;
    // cout <<"Input the first number" << endl;
    // cin >> n1;
    int list1[3] = {2, 3, 4};

    // for (int i = 0; i < n1; i++) // loop over for the first number
    // {
    //     cout << "Enter element " << i + 1 << " of list 1: ";
    //     cin >> list1[i]; 
    // }

    // cout << "Input the second number" << endl;
    // cin >> n2;
    int list2[4] = {2, 3, 4, 5};

    // for (int i = 0; i < n2; i++)
    // {
    //     cout << "Enter element " << i + 1 << " of list 2: ";
    //     cin >> list2 [i];
    // }
    int merged[n1+n2], i = 0, j = 0, k = 0; 

    while (i < n1 && j < n2)
    {
        if (list1[i] < list2[j])
            merged[k++] = list1[i++];
        else
            merged[k++] = list2[j++];
    }
    while (i < n1)
    {
        merged[k++] = list1[i++];
    }
    while (j < n2)
    {
        merged[k++] = list2[j++];
    }

    // cout << "The merged list is: ";
    for (int i = 0; i < n1 + n2; i++)
    {
        cout << merged[i] << " ";
    }

    int expectedOutput = 2, 2, 3, 3, 4, 4, 5;

    if ( expectedOutput == merged)
    {
          cout<<"SUCCESSFULLY"<<endl; 
    }else
    {
        cout<<"FAILED"<<endl;
    }
    
    
    
    
    return 0;
}


