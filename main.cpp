#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include "functions.cpp"

using namespace std;

int main()
{
   // bool numInlist(int list[],int num);

    int lottoNum[ARRAY_SIZE];
    int custNum[ARRAY_SIZE];
   // int l[];
    char resp;
    
    cout << "Play lotto (Y/y)/(N/n): ";
    cin >> resp;
    cout << endl;
    
    while (resp == 'y' || resp == 'Y')
    {
        initializeList(lottoNum);
        getLottoNum(lottoNum);
        getLottoNum(lottoNum);
        getCustNum(custNum);
        //numInlist(lottoNum);
        
        if(checkLottoNum(lottoNum,custNum))
           cout<<"\n coutYou win!";
        else
        {
          cout<<" \n coutYou lose";
            cout<<"coutThe correct numbers are:";
            printList(lottoNum);
        }
        return 0;
    }
    
        // part d
        // using checkLottoNum, determine if the player has guessed correctly
    {
        cout<<"Play another  (Y/y)/(N/n): ";
        cin >> resp;
        cout << endl;
    }
    
    return 0;
}
