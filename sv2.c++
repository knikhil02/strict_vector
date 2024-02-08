#include <iostream>
#include <vector>

using namespace std;

//creating a template for vector
template <class T>
void display(vector<T> &v){
    cout<<"----------------------------------------------------"<<endl;
    cout<<"Your Vector is : ";
//Print out the vector elements using a range-based for loop to verify that 
// the vector element values were set correctly
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<< " ";//

    }
    cout<<endl;
    cout<<"----------------------------------------------------\n";
    cout<<endl;

}

int main(){
    vector<int> vec1;       //create the vector of int data type
    vector<float> vec2;     //create the vector of float data type
    vector<string> vec3;    //create the vector of string data type
    vector<double> vec4;    //create the vector of double data type
    vector<char> vec5;      //create the vector of char data type
    int element, choice, size, datatype;//element will store each value of int datatype entered by user,size 
    float element1;                     //element1 will store each value of float datatype entered by user
    string element2;                    //element2 will store each value of string datatype entered by user
    double element3;                    //element3 will store each value of double datatype entered by user
    char element4;                      //element4 will store each value of char datatype entered by user
    mainhome:               //create the statement
    cout<<"----------------------------------------------------\n";
    cout<<"\t========== HELLO USER ==========\n";
    cout<<"----------------------------------------------------\n";
    // we first prompt the user with two option 1. Enter the size of vector & 2.Proceed the vector. 
    // if user choose option 1 then we prompt user for the size of vector.  We then initialize a vector with this size,
    // and prompt the user for each element value and set the element value using the element index.
    cout<<"Choose the option from following to create vector\n\t1.Enter the size of your vector\n\t2.Proceed without size\n";
    cout<<"----------------------------------------------------\nEnter your choice: ";
    cin>>choice;                // prompt the user for the choice value and store it into the choice variabl
    if(choice==1){
        // prompt the user for the size and store it into the size variable
        cout<<"----------------------------------------------------\nEnter the size of your vector : ";
        cin>>size;
        home:
        cout<<"----------------------------------------------------\n";
        cout<<"1. int   2. float    3.string    4.double    5.char\nChoose the type of your vector : ";
        cin>>datatype;
        if(datatype==1){
            int a=0,b;
            cout<<"====================================================\n";
            cout << "Enter an element to add to this vector"<<endl;
            for (int i=0; i < size; i++)
            {
                cout<< "\tElement ["<< a << "]: ";
                cin>>element;// prompt the user for the value and store it into the element3 variable.
                vec1.push_back(element);//add the value as the next element in the vector using push_back().
                a++;// increment a so that the correct index is output when the user is prompted for the next element value
            }
            cout<<"====================================================\n";
            display(vec1);
            home1:
            cout<<"========== To remove the last element Enter 1 =========="<<endl;
            cin>>b;
            if(b==1){
                vec1.pop_back();//remove the last element of vector using pop_back()
                display(vec1);//display the vector
                goto home1;//jump to statement home1
            }
            else{
                cout<<endl;
            }
        }
        else if(datatype==2){
            int a=0;
            int b=0;
            cout<<"====================================================\n";
            cout << "Enter an element to add to this vector"<<endl;
            for (int i=0; i < size; i++)
            {
                cout<< "\tElement ["<< a << "]: ";
                cin>>element1;// prompt the user for the value and store it into the element1 variable.
                vec2.push_back(element1);//add the value as the next element in the vector using push_back().
                a++;// increment a so that the correct index is output when the user is prompted for the next element value
            }
            cout<<"====================================================\n";
            display(vec2);
            home2:
            cout<<"========== To remove the last element Enter 1 =========="<<endl;
            cin>>b;
            if(b==1){
                vec2.pop_back();//remove the last element of vector using pop_back()
                display(vec2);//display the vector
                goto home2;//jump to statement home2
            }
            else{
                cout<<endl;
            }
        }
        else if(datatype==3){
            int a=0,b;
            cout<<"====================================================\n";
            cout << "Enter an element to add to this vector"<<endl;
            for (int i=0; i < size; i++)
            {
                cout<< "\tElement ["<< a << "]: ";
                cin>>element2;// prompt the user for the value and store it into the element2 variable.
                vec3.push_back(element2);//add the value as the next element in the vector using push_back().
                a++;// increment a so that the correct index is output when the user is prompted for the next element value
            }
            cout<<"====================================================\n";
            display(vec3);
            home3:
            cout<<"========== To remove the last element Enter 1 =========="<<endl;
            cin>>b;
            if(b==1){
                vec3.pop_back();//remove the last element of vector using pop_back()
                display(vec3);//display the vector
                goto home3;//jump to statement home3
            }
            else{
                cout<<endl;
            }
        }
        else if(datatype==4){
            int a=0,b;
            cout<<"====================================================\n";
            cout << "Enter an element to add to this vector"<<endl;
            for (int i=0; i < size; i++)
            {
                cout<< "\tElement ["<< a << "]: ";
                cin>>element3;// prompt the user for the value and store it into the element3 variable.
                vec4.push_back(element3);//add the value as the next element in the vector using push_back().
                a++;// increment a so that the correct index is output when the user is prompted for the next element value
            }
            cout<<"====================================================\n";
            display(vec4);
            home4:
            cout<<"========== To remove the last element Enter 1 =========="<<endl;
            cin>>b;
            if(b==1){
                vec4.pop_back();//remove the last element of vector using pop_back()
                display(vec4);//display the vector
                goto home4;//jump to statement home4
            }
            else{
                cout<<endl;
            }
        }
        else if(datatype==5){
            int a=0,b;
            cout<<"====================================================\n";
            cout << "Enter an element to add to this vector"<<endl;
            for (int i=0; i < size; i++)
            {
                cout<< "\tElement ["<< a << "]: ";
                cin>>element4;// prompt the user for the value and store it into the element4 variable.
                vec5.push_back(element4);//add the value as the next element in the vector using push_back().
                a++;// increment a so that the correct index is output when the user is prompted for the next element value
            }
            cout<<"====================================================\n";
            display(vec5);
            home5:
            cout<<"========== To remove the last element Enter 1 =========="<<endl;
            cin>>b;
            if(b==1){
                vec5.pop_back();//remove the last element of vector using pop_back()
                display(vec5);//display the vector
                goto home5;//jump to statement home5
            }
            else{
                cout<<endl;
            }
        }
        else{
        cout<<"====================================================\n";
        cout<<"\t\tInvalid choice\n\tPlease choose the correct option"<<endl;
        goto home;                                       //jump to statement home
        }
    }
    // we first prompt the user with two option 1. Enter the size of vector & 2.Proceed the vector. 
    // if user choose option 2 then we don't know how many values the user will enter 
    // before we begin asking the user to provide the values.  We use a sentinel 
    // value (-1) to terminate user input in this case.  We create a vector with 
    // no initialize size provided and add vector elements using the push_back()
    // method until the sentinel value is entered.
    else if(choice==2){
        int a=0,b;
        cout<<"====================================================\n";
        cout<<"----------------------------------------------------\n";
        cout << "Note: Enter -1 To Complete Input!\n" ; // inform the user how to terminate user input with the -1 sentinel value
        cout<<"----------------------------------------------------\n";
        cout << "Enter an element to add to this vector"<<endl;
        while (true)                                    // the loop will run an indeterminate number of times.
        {
            cout << "\tElement ["<< a << "]: ";         // prompt the user for the value and store it into the element3 variable.
            cin >> element3;
            if (element3 == -1) break;                  //break the loop if prompt value is -1.
            vec4.push_back(element3);                   //add the value as the next element in the vector using push_back().
            a++;            // increment a so that the correct index is output when the user is prompted for the next element value
        }
        cout<<"====================================================\n";
        display(vec4);
            home6:
            cout<<"========== To remove the last element Enter 1 =========="<<endl;
            cin>>b;
            if(b==1){
                vec4.pop_back();                        //remove the last element of vector using pop_back().
                display(vec4);                          //display the vector
                goto home6;                             //jump to statement home6
            }
            else{
                cout<<endl;
            }
    }
    else{
        cout<<"====================================================\n";
        cout<<"\t\tInvalid choice\n\tPlease choose the correct option"<<endl;
        goto mainhome;                                  //jump to statement mainhome
    }
    return 0;
}