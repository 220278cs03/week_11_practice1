//
//  main.cpp
//  week_11_practice
//
//  Created by Gulnoza Sabirjonova on 22/11/22.
//

#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> name){
    for(int i : name){
        cout << i << " ";
    }
}

int main() {
//    int y = 3;
//    int *y_ptr;
//    y_ptr = &y;
//    cout << y_ptr << endl << *y_ptr << endl;
    
    //Problem 1
//    int input;
//    cin >> input;
//    cout << &input << endl;
    
    //Problem 2
//    int input;
//    cin >> input;
//    int *ptr;
//    ptr = &input;
//    cout << ptr << endl;
    
    //Problem 3
//    int a, b;
//    cin >> a >> b;
//    int *ptrA, *ptrB;
//
//    ptrA = &a;
//    ptrB = &b;
//
//    cout << *ptrA << endl << *ptrB << endl;
    
    //Problem 4
//    int num;
//    cin >> num;
//    int *nump;
//    nump = &num;
//    cout << *nump << endl;
    
    //Problem 5
//    int a;
//    cin >> a;
//    int *a_p;
//    a_p = &a;
//    cout << *a_p << endl;
    
    //Problem 6
//    int num1, num2;
//    cin >> num1 >> num2;
//    int *num1_p, *num2_p;
//    num1_p = &num1;
//    num2_p = &num2;
//    cout << *num1_p + *num2_p << endl;
    
    //Problem 7
//        int num1, num2;
//        cin >> num1 >> num2;
//        int *num1_p, *num2_p;
//        num1_p = &num1;
//        num2_p = &num2;
//        cout << *num1_p * *num2_p << endl;
    
    //Problem 8
//    int n1, n2, n3;
//    cin >> n1 >> n2 >> n3;
//    int *n1_p = &n1, *n2_p = &n2, *n3_p = &n3;
//    if(*n1_p > *n2_p && *n1_p > *n3_p)
//        cout << "Max is " << *n1_p << endl;
//    else if(*n2_p > *n1_p && *n2_p > *n3_p)
//        cout << "Max is " << *n2_p << endl;
//    else
//        cout << "Max is " << *n3_p << endl;
    
    //Problem 9
//        int n1, n2, n3;
//        cin >> n1 >> n2 >> n3;
//        int *n1_p = &n1, *n2_p = &n2, *n3_p = &n3;
//        if(*n1_p < *n2_p && *n1_p < *n3_p)
//            cout << "Min is " << *n1_p << endl;
//        else if(*n2_p < *n1_p && *n2_p < *n3_p)
//            cout << "Min is " << *n2_p << endl;
//        else
//            cout << "Min is " << *n3_p << endl;
    
    
    //Problem 10
//    vector<int> marks = {2,3,4,5,6};
    
    //Problem 11
    //    vector<int> marks = {2,3,4,5,6};
    //    for(int element : marks)
    //        cout << element << " ";
    
    //Problem 12
//        vector<int> marks = {2,3,4,5,6};
//        marks.push_back(3);
//    for(int e : marks)
//        cout << e << " ";
    
    //Problem 13
//    vector<int> marks = {2,3,4,5,6};
//    marks.pop_back();
//for(int e : marks)
//    cout << e << " ";
    
    //Problem 14
//        vector<int> marks = {1,2,3,4,5,6};
//    print(marks);
    
    //Problem 15
//    int arr[4][2];
//    for(int i = 0; i < 4; i++){
//        for(int j = 0; j < 2; j++){
//            cout << arr[i][j] << " ";
//        }
//        cout << endl;
//    }
    
    
    
    
    //Problem 1
    int n = 0;
    int m = n;
    cout << &n << endl << &m << endl;
    ++m;
    cout << n << endl << m << endl;
    int r;
    int *n_p = &r;
    cout << &n_p << endl << &r << endl;
    ++r;
    cout << n << endl << r << endl;
    
    
    
    
    return 0;
}
