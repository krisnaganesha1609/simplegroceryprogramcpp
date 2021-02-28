#include <iostream>
using namespace std;

int main() {
    int li_product_code;
    string ls_continue;

    cout<<"------------------------------------------------------"<<endl;
    cout<<"\tWelcome To This Simple Grocery Program!"<<endl;
    cout<<"------------------------------------------------------"<<endl;

    cout<<"Today Available Product : "<<endl;
    cout<<"[1]Rice \n[2]Salmon Fillet \n[3]Chicken Nugget \n[4]Chocolate \n[5]Milk Tea "<<endl;
    cout<<"Please Input The Product Code To Buy The Product You Want : ";
    cin>>li_product_code;

    while(li_product_code<6) {
        if(li_product_code == 1) {
            cout<<"You've Bought 1 Bag Of Rice!"<<endl;
            cout<<"Type 'Y' To Continue Buying Or 'N' To Finish Buying : ";
            cin>>ls_continue;
            if(ls_continue == "y" || ls_continue == "Y") {
                cout<<"\nToday Available Product : "<<endl;
                cout<<"[1]Rice \n[2]Salmon Fillet \n[3]Chicken Nugget \n[4]Chocolate \n[5]Milk Tea "<<endl;
                cout<<"Added 1 Bag Of Rice To The Cart!"<<endl;
                cout<<"Please Input The Product Code To Buy The Product You Want : ";
                cin>>li_product_code;
            }
            else if(ls_continue == "n" || ls_continue == "N") {
                cout<<"Thank You For Shopping Using This Program"<<endl;
                cout<<"See You In The Next Program!"<<endl;
                return 0;
            }
            else {
                cout<<"ERROR!! Incorrect Code, Please Restart The Program!"<<endl;
                return 0;
            }
        }
        else if(li_product_code == 2) {
            cout<<"You've Bought 1 Piece Of Salmon Fillet!"<<endl;
            cout<<"Type 'Y' To Continue Buying Or 'N' To Finish Buying : ";
            cin>>ls_continue;
            if(ls_continue == "y" || ls_continue == "Y") {
                cout<<"\nToday Available Product : "<<endl;
                cout<<"[1]Rice \n[2]Salmon Fillet \n[3]Chicken Nugget \n[4]Chocolate \n[5]Milk Tea "<<endl;
                cout<<"Added 1 Piece Of Salmon Fillet To The Cart!"<<endl;
                cout<<"Please Input The Product Code To Buy The Product You Want : ";
                cin>>li_product_code;
            }
            else if(ls_continue == "n" || ls_continue == "N") {
                cout<<"Thank You For Shopping Using This Program"<<endl;
                cout<<"See You In The Next Program!"<<endl;
                return 0;
            }
            else {
                cout<<"ERROR!! Incorrect Code, Please Restart The Program!"<<endl;
                return 0;
            }
        }
        else if(li_product_code == 3) {
            cout<<"You've Bought 1 Pack Of Chicken Nugget!"<<endl;
            cout<<"Type 'Y' To Continue Buying Or 'N' To Finish Buying : ";
            cin>>ls_continue;
            if(ls_continue == "y" || ls_continue == "Y") {
                cout<<"\nToday Available Product : "<<endl;
                cout<<"[1]Rice \n[2]Salmon Fillet \n[3]Chicken Nugget \n[4]Chocolate \n[5]Milk Tea "<<endl;
                cout<<"Added 1 Pack Of Chicken Nugget To The Cart!"<<endl;
                cout<<"Please Input The Product Code To Buy The Product You Want : ";
                cin>>li_product_code;
            }
            else if(ls_continue == "n" || ls_continue == "N") {
                cout<<"Thank You For Shopping Using This Program"<<endl;
                cout<<"See You In The Next Program!"<<endl;
                return 0;
            }
            else {
                cout<<"ERROR!! Incorrect Code, Please Restart The Program!"<<endl;
                return 0;
            }
        }
        else if(li_product_code == 4) {
            cout<<"You've Bought 1 Bar Of Chocolate!"<<endl;
            cout<<"Type 'Y' To Continue Buying Or 'N' To Finish Buying : ";
            cin>>ls_continue;
            if(ls_continue == "y" || ls_continue == "Y") {
                cout<<"\nToday Available Product : "<<endl;
                cout<<"[1]Rice \n[2]Salmon Fillet \n[3]Chicken Nugget \n[4]Chocolate \n[5]Milk Tea "<<endl;
                cout<<"Added 1 Bar Of Chocolate To The Cart!"<<endl;
                cout<<"Please Input The Product Code To Buy The Product You Want : ";
                cin>>li_product_code;
            }
            else if(ls_continue == "n" || ls_continue == "N") {
                cout<<"Thank You For Shopping Using This Program"<<endl;
                cout<<"See You In The Next Program!"<<endl;
                return 0;
            }
            else {
                cout<<"ERROR!! Incorrect Code, Please Restart The Program!"<<endl;
                return 0;
            }
        }
        else if(li_product_code == 5) {
            cout<<"You've Bought 1 Cup Of Milk Tea!"<<endl;
            cout<<"Type 'Y' To Continue Buying Or 'N' To Finish Buying : ";
            cin>>ls_continue;
            if(ls_continue == "y" || ls_continue == "Y") {
                cout<<"\nToday Available Product : "<<endl;
                cout<<"[1]Rice \n[2]Salmon Fillet \n[3]Chicken Nugget \n[4]Chocolate \n[5]Milk Tea "<<endl;
                cout<<"Added 1 Cup Of Milk Tea To The Cart!"<<endl;
                cout<<"Please Input The Product Code To Buy The Product You Want : ";
                cin>>li_product_code;
            }
            else if(ls_continue == "n" || ls_continue == "N") {
                cout<<"Thank You For Shopping Using This Program"<<endl;
                cout<<"See You In The Next Program!"<<endl;
                return 0;
            }
            else {
                cout<<"ERROR!! Incorrect Code, Please Restart The Program!"<<endl;
                return 0;
            }
        }
        else {
            cout<<"Oops, Wrong Code/Unavailable Product! Please Restart The Program!"<<endl;
            return 0;
        }
    }
    return 0;
}