#include <iostream>
using namespace std;

int main(){
    int r = 5;
    double findCircle;

    // cout<<"Area of Circle"<<endl;
    // cout<<"input the radius = ";
    // cin>>r;

    findCircle = 3.14 * r * r;
    // cout<<"The area of circle is = "<<findCircle<<endl;

    float expectedArea = 78.5;

    if (expectedArea == findCircle)
    {
        cout<<"SUCCESSFULLY"<<endl; 
    }else
    {
        cout<<"FAILED"<<endl;
    }
    

    return 0;
}