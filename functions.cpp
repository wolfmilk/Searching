#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

const int ARRAY_SIZE = 5;

inline void initializeList(int list[])
{
    for (int index = 0; index < ARRAY_SIZE; index++)
        list[index] = -1;
}

inline bool numInList(int list[], int num)
{
    for (int index = 0; index < ARRAY_SIZE; index++)
        if (list[index] == num)
            return true;
    return false;
}

// part a
inline void getLottoNum(int list[])
{
    int count =0;
    while (count<ARRAY_SIZE)
    {
        int num = (rand()+time(0))%40+1;
        if (!numInList(list,num))
        {
            list[count] = num;
            count++;
        }
    }
    // set the items in "list" to random numbers between 1 and 40, inclusive
}


// part b
inline void sortLottoNum(int list[])
{
    int ind;
    int mind;
    int smallind;
    int temp;
    
    for(ind=0;ind < 5-1;ind++)
        
    {
        smallind = ind;
        
        for(mind = ind+1; mind < ARRAY_SIZE; mind ++)
            if(list[smallind]>list[mind])
                smallind = mind;
        
        temp=list[smallind];
        list[smallind]=list[ind];
        list[ind]=temp;
    }

    // sort the array containing the lottery numbers
}

inline void getCustNum(int list[])
{
    int num;
    int count=0;
    
    cout<<"Enter five different integers between 1 and 40 (inclusive):"
    <<endl;
    
    cout <<"Enter the first number:";
    while (count < ARRAY_SIZE)
    {
        cin >> num;
        cout<<endl;
        
        if(!numInList(list,num)&&num>=1&&num<41)
        {
            list [count] = num;
        }
        else if (num<1||num>40)
            cout<<"Number must be between 1 and 40. Select another."<<endl;
        else
            cout<<"Number already selected. Select another." <<endl;
        count++;
        if(count!=ARRAY_SIZE) cout<<"Enter the next number:";
    }
    // prompts the player to select 5 distinct numbers between 1 and 40, inclusive
    
    // ensure that the numbers are between 1 and 40, inclusive
    
    // store the numbers in "list"
}

// part d
bool checkLottoNum(int list1[], int list2[])
{
    for(int index=0; index<ARRAY_SIZE;index++)
        if(!numInList(list1,list2[index]))
            return false;
    return true;
}
bool numInlist(int list[],int num)
{
    for(int index=0;index<ARRAY_SIZE;index++)
        if(list[index]==num)
            return true;
    return false;
}


    // determine if the user has guessed all 5 numbers correctly


inline void printList(int list[])
{
    for (int i = 0; i < ARRAY_SIZE; i++)
        cout << list[i] << "  ";
    cout << endl;
}
