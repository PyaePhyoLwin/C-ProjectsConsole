#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
//    vector<int> vec_arr {12,3,56};
//    vector<float> vec_float (3, 120.0);
//    vec_arr.at(1) = 79;
//    int arr[10]{};
//    arr[0] = 10;
//    arr[9] = 100;
//    cout << arr[0] << endl;
//    cout << arr[9] << endl;
//    cout << vec_arr.at(1) << endl;
//    vec_arr.push_back(6789);
//    cout << vec_arr.at(3);
//    cin >> arr[10];
//    cout << "The last array : " << arr[10] <<  endl;
//    cout << "The value  of float 1 : " << vec_float.at(0) <<  endl;
//    cout << "The value  of float 2 : " << vec_float.at(2) <<  endl;
//    cout << "The size : " << vec_float.size() <<  endl;
//    vector<int> vector1;
//    vector<int> vector2;
//    
//    vector1.push_back(10);
//    vector1.push_back(20);
//    
//    cout << "The first value of vector1 : " << vector1.at(0) <<  endl;
//    cout << "The second value of vector1 : " << vector1.at(1) <<  endl;
//    cout << "The size of vector1 : " << vector1.size() <<  endl;
//    
//    vector2.push_back(100);
//    vector2.push_back(200);
//    
//    cout << "The first value of vector2 : " << vector2.at(0) <<  endl;
//    cout << "The second value of vector2 : " << vector2.at(1) <<  endl;
//    cout << "The size of vector2 : " << vector2.size() <<  endl;
//    
//    vector<vector<int>> vector_2d;
//    
//    vector_2d.push_back(vector1);
//    vector_2d.push_back(vector2);
//
//    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
//    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
//    
//    vector1.at(0) = 1000;
//    
//    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
//    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
//    
//    cout << vector1.at(0) << endl;
//    cout << vector1.at(1) << endl;

    int money {0};
    int dollar {100};
    int quarter {25};
    int dime {10};
    int nickel {5};
    int penny {1};
    
    cout << "Enter your amount in cents: ";
    cin >> money;
    
//    if(money >= dollar){
//        cout << "dollars : " << money / dollar << endl;
//        money = money % dollar;
//    }
//        
//    if(money >= quarter){
//        cout << "quarters : " << money / quarter  << endl;
//        money = money % quarter;
//    }
//        
//    if(money >= dime){
//        cout << "dime : " << money / dime << endl;
//        money = money % dime;
//    }
//        
//    if(money >= nickel){
//        cout << "nickels : " << money / nickel << endl;
//        money = money % nickel;
//    }
//        
//    if(money >= penny)
//        cout << "pennies : " << money / penny << endl;
    cout << "dollars  : " << money / dollar << endl;
    cout << "quarters : " << (money % dollar) / quarter  << endl;
    cout << "dime     : " << (money % dollar % quarter) / dime << endl;
    cout << "nickels  : " << (money % dollar % quarter % dime) / nickel << endl;
    cout << "pennies  : " << (money % dollar % quarter % dime % nickel) / penny << endl;
	return 0;
}
