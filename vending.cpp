#include<iostream>
using namespace std;

int Item_number,Coffe_Item,Tea_Item,Soups_Item,Beverages_Item;

int main()
{
    

    cout<<"****************************************************************************************"<<endl;
    cout<<"                                        WELCOME "<<endl;
    cout<<"                                          TO "<<endl;
    cout<<"                            FULLY AUTOMATIC VENDING MACHINE \n\n";

    cout<<"                                        MENU        "<<endl;
    cout<<"                            1. Coffee           2. Tea       "<<endl;
    cout<<"                            3.Soups             4. Beverage  \n\n";
    cout<<"****************************************************************************************"<<endl;

    cout<<" Enter your Item Number : ";
    cin>>Item_number;

    if(Item_number==1)
    {
        cout<<"****************************************************************************************"<<endl;
        cout<<"                              Select Coffee Item  \n\n                                         "<<endl;
        cout<<"                 1. Espresso Coffee          2. Cappuccino Coffee                         "<<endl;
        cout<<"                                    3. Latte Coffee  \n\n";
        cout<<"****************************************************************************************"<<endl;

        cout<<"\n";
        cout<<"Please Select Coffe Item Number : ";
        cin>>Coffe_Item;
        cout<<"\n";
        switch (Coffe_Item)
        {
        case 1:
            cout<<"Espresso Coffee \nEnjoy your Coffee";
            break;
        
        case 2:
            cout<<"Cappuccino Coffee \nEnjoy your Coffee";
            break;
        case 3:
            cout<<"Latte Coffee \nEnjoy your Coffee";
            break;
        default:
            cout<<"Please Select Valid Item Number.";
            break;

        }
        cout<<"\n";
   
    }

    if(Item_number==2)
    {
        cout<<"****************************************************************************************"<<endl;
        cout<<"                              Select Tea Item  \n\n                                        "<<endl;
        cout<<"                         1. Assam Tea         2. Ginger Tea                       "<<endl;
        cout<<"                         3. Cardamom Tea      4. Masala Tea                       "<<endl ;
        cout<<"                         5. Lemon Tea         6. Green Tea                      "<<endl ;
        cout<<"                                     7. Organic Darjeeling Tea     \n\n              "<<endl ;
        cout<<"***************************************************************************************"<<endl;

        cout<<"\n";
        cout<<"Please Select Tea Item Number: \n";
        cin>>Tea_Item;
        cout<<"\n";
        switch (Tea_Item)
        {
        case 1:
            cout<<"Assam Tea  \nEnjoy your Tea";
            break;
        case 2:
            cout<<"Ginger Tea  \nEnjoy your Tea";
            break;
        case 3:
            cout<<"Cardamom Tea  \nEnjoy your Tea";
            break;
        case 4:
            cout<<"Masala Tea  \nEnjoy your Tea";
            break;
        case 5:
            cout<<"Lemon Tea  \nEnjoy your Tea";
            break;
        case 6:
            cout<<"Green Tea \nEnjoy your Tea";
            break;
        case 7:
            cout<<"Organic Darjeeling Tea  \nEnjoy your Tea";
            break;

        default:
            cout<<"Please Select Valid Item Number.";
            break;
        }
        cout<<"\n";
    }

    if(Item_number ==3)
    {
        cout<<"****************************************************************************************"<<endl;
        cout<<"                              Select Soups Item \n \n                                         "<<endl;
        cout<<"                 1. Hot and Sour Soup          2. Veg Corn Soup                       "<<endl;
        cout<<"                 3. Tomato Soup                4. Spicy Tomato Soup \n\n";
        cout<<"****************************************************************************************"<<endl;

        cout<<"\n";
        cout<<"Please Select Soups Item Number: \n";
        cin>>Soups_Item;
        cout<<"\n";
        switch (Soups_Item)
        {
        case 1:
            cout<<"Hot and Sour Soup  \nEnjoy your Soups";
            break;
        case 2:
            cout<<"Veg Corn Soup   \nEnjoy your Soups";
            break;
        case 3:
            cout<<"Tomato Soup   \nEnjoy your Soups";
            break;
        case 4:
            cout<<"Spicy Tomato Soup \nEnjoy your Soups";
            break;
        
        default:
            cout<<"Please Select Valid Item Number.";
            break;
        }
        cout<<"\n";
    }

    if(Item_number==4)
    {
        cout<<"****************************************************************************************"<<endl;
        cout<<"                              Select Beverages Item  \n\n                                         "<<endl;
        cout<<"                         1. Hot Chocolate Drink         2. Badam Drink                      "<<endl;
        cout<<"                                           3. Badam-Pista Drink       \n  \n              "<<endl ;
        cout<<"***************************************************************************************"<<endl;

        cout<<"\n";
        cout<<"Please Select Beverages Item Number: ";
        cin>>Beverages_Item;
        cout<<"\n";
        switch (Beverages_Item)
        {
        case 1:
            cout<<"Hot Chocolate Drink  \nEnjoy your Beverages";
            break;
        case 2:
            cout<<"Badam Drink   \nEnjoy your Beverages";
            break;
        case 3:
            cout<<"Badam-Pista Drink   \nEnjoy your Beverages";
            break;
        
        default:
            cout<<"Please Select Valid Item Number.";
            break;
        }
        cout<<"\n";
    }

    if(Item_number !=1 && Item_number !=2 && Item_number !=3 && Item_number !=4)
    {
        cout<<" Please Enter Valid Item Number !.....\n";
        
    }



}