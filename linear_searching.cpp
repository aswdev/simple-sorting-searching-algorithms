#include <iostream>

using namespace std;
void fillthearray(int *arr, int s);
int linearsearch(int *arr, int s);
int main()
{
    int s;
    cout << "Hello! Let's make an array" << endl;
    cout << "What's the size of the array?" << endl;
    cin >> s;
    while(s<=0)
    {
        cout << "Array size has to be greater than 0! Try again: ";
        cin >> s;
    }
    int *arr = new int [s];
    fillthearray(arr,s);
    linearsearch(arr,s);
    delete [] arr;
    return 0;
}
void fillthearray(int *arr, int s)
{
    for(int i=0; i<s; i++)
    {
        cout<<"T["<<i<<"]=";
        cin >> arr[i];
    }
}
int linearsearch(int *arr, int s)
{
        int number;
        cout<<"What are you looking for? Enter the number:";
        cin>>number;
        for(int i=0; i<s; i++)
        {
            if(arr[i]==number)
            {
                cout<<"We found your number on position "<<i<<endl;
                return 0;
            }
        }
        cout<<"The number you are looking for does not exsist"<<endl;
        return 1;
}
