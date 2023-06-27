#include <iostream>

using namespace std;

int main()
{
    int quant;
    int choice;

    //Quantity of Rooms and Food Items
    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qshake = 0, Qsandwich = 0, Qpizza = 0;

    //Sold Rooms and Food Items
    int Srooms = 0, Spasta = 0, Sburger = 0, Sshake = 0, Ssandwich = 0, Spizza = 0;

    //Total Rooms and Food Items
    int Total_Rooms = 0, Total_Pasta = 0, Total_Burger = 0, Total_Shake = 0, Total_Sandwich = 0, Total_Pizza = 0;

    //Owner will enter the quantities of item he/she have in his/her Hotel
    cout<<"\n\t Quantity of Items we have :)";
    cout<<"\n\t Rooms Available: "; //Quantity of Rooms Available
    cin>>Qrooms;

    cout<<"\n\t Quantity of Pasta: ";//Quantity of Pasta Available
    cin>>Qpasta;

    cout<<"\n\t Quantity of Burger: "; //Quantity of Burger Available
    cin>>Qburger;

    cout<<"\n\t Quantity of Shake: "; //Quantity of Shake Available
    cin>>Qshake;

    cout<<"\n\t Quantity of Sandwich: "; //Quantity of Sandwich Available
    cin>>Qsandwich;

    cout<<"\n\t Quantity of Pizza: "; //Quantity of Pizza Available
    cin>>Qpizza;

    //The user will select from the given options
    m:
    cout<<"\n\t\t\t Please select from the given menu options :)";
    cout<<"\n\n 1)Rooms";
    cout<<"\n 2)Pasta";
    cout<<"\n 3)Burger";
    cout<<"\n 4)Shake";
    cout<<"\n 5)Sandwich";
    cout<<"\n 6)Pizza";
    cout<<"\n 7)Information regarding Sales and Collection of Hotel";
    cout<<"\n 8)Exit";

    cout<<"\n Please select your Choice :) ";
    cin>>choice;

    switch(choice){
    case 1:
        cout<<"\n\n Enter the Number of rooms you want: ";
        cin>>quant;

        if(Qrooms-Srooms >= quant){
            Srooms = Srooms + quant;
            Total_Rooms = Total_Rooms + quant * 1200;
            cout<<"\n\n\t\t "<<quant<<" Room/Rooms have been alloted to you";
        }
        else{
            cout<<"\n\t Only"<<Qrooms-Srooms<<" are remaining in our Hotel";
        }
        break;

    case 2:
        cout<<"\n\n Pasta Quantity: ";
        cin>>quant;

        if(Qpasta-Spasta >= quant){
            Spasta = Spasta + quant;
            Total_Pasta = Total_Pasta + quant * 120;
            cout<<"\n\n\t\t "<<quant<<" Pasta will be ready Soon...";
        }
        else{
            cout<<"\n\t Only"<<Qpasta-Spasta<<" are remaining in our Hotel";
        }
        break;

    case 3:
        cout<<"\n\n Burger Quantity: ";
        cin>>quant;

        if(Qburger-Sburger >= quant){
            Srooms = Srooms + quant;
            Total_Burger = Total_Burger + quant * 80;
            cout<<"\n\n\t\t "<<quant<<" Burger will be ready soon...";
        }
        else{
            cout<<"\n\t Only"<<Qburger-Sburger<<" are remaining in our Hotel";
        }
        break;

    case 4:
        cout<<"\n\n Shake Quantity: ";
        cin>>quant;

        if(Qshake-Sshake >= quant){
            Sshake = Sshake + quant;
            Total_Shake = Total_Shake + quant * 70;
            cout<<"\n\n\t\t "<<quant<<" Shake will be ready soon...";
        }
        else{
            cout<<"\n\t Only"<<Qshake-Sshake<<" are remaining in our Hotel";
        }
        break;

    case 5:
        cout<<"\n\n Sandwich: ";
        cin>>quant;

        if(Qsandwich-Ssandwich >= quant){
            Ssandwich = Ssandwich + quant;
            Total_Sandwich = Total_Sandwich + quant * 110;
            cout<<"\n\n\t\t "<<quant<<"Sandwich will be ready soon...";
        }
        else{
            cout<<"\n\t Only"<<Qsandwich-Ssandwich<<" are remaining in our Hotel";
        }
        break;

    case 6:
        cout<<"\n\n Pizza Quantity: ";
        cin>>quant;

        if(Qpizza-Spizza >= quant){
            Spizza = Spizza + quant;
            Total_Pizza = Total_Pizza + quant * 180;
            cout<<"\n\n\t\t "<<quant<<"Pizza will be ready soon...";
        }
        else{
        cout<<"\n\t Only"<<Qpizza-Spizza<<" are remaining in our Hotel";
        }
        break;

    case 7:
        cout<<"\n\t\t Details regarding Sales and Collection";
        cout<<"\n\n Number of rooms we had: "<<Qrooms;
        cout<<"\n\n Number of rooms we gave for rent: "<<Srooms;
        cout<<"\n\n Remaining Rooms: "<<Qrooms-Srooms;
        cout<<"\n\n Total Rooms collection for the Day: "<<Total_Rooms;


        cout<<"\n\n Number of Pasta we had: "<<Qpasta;
        cout<<"\n\n Number of pasta we sold: "<<Spasta;
        cout<<"\n\n Remaining Pasta: "<<Qpasta-Spasta;
        cout<<"\n\n Total Pasta for the Day: "<<Total_Pasta;

        cout<<"\n\n Number of Burger we had: "<<Qburger;
        cout<<"\n\n Number of burger we sold: "<<Sburger;
        cout<<"\n\n Remaining Burger: "<<Qburger-Sburger;
        cout<<"\n\n Total Burger for the Day: "<<Total_Burger;

        cout<<"\n\n Number of Shake we had: "<<Qshake;
        cout<<"\n\n Number of shake we sold: "<<Sshake;
        cout<<"\n\n Remaining Shake: "<<Qshake-Sshake;
        cout<<"\n\n Total Shake for the Day: "<<Total_Shake;

        cout<<"\n\n Number of Sandwich we had: "<<Qsandwich;
        cout<<"\n\n Number of Sandwich we sold: "<<Ssandwich;
        cout<<"\n\n Remaining Snadwich: "<<Qsandwich-Ssandwich;
        cout<<"\n\n Total Sandwich for the Day: "<<Total_Sandwich;

        cout<<"\n\n Number of Pizza we had: "<<Qpizza;
        cout<<"\n\n Number of pizza we sold: "<<Spizza;
        cout<<"\n\n Remaining Pizza: "<<Qpizza-Spizza;
        cout<<"\n\n Total Pizza for the Day: "<<Total_Pizza;

        cout<<"\n\n\n Total Collection of the Day: "<<Total_Rooms+Total_Burger+Total_Pasta+Total_Sandwich+Total_Shake+Total_Pizza;
        break;

    case 8:
        exit(0);
        break;

    default:
        cout<<"\n\n Please select the numbers from above options :)";
        break;
    }
    goto m; //This goto statement will help us to again select the choice from menu
    return 0;
}
