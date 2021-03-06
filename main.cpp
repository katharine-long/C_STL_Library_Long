

//Top level solution folder: C_STL_Library_Long

//create a single main.cpp that contains code samples and implementations of each of the following topics */

#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <cassert>
#include <stack>
#include <set>
#include <utility>
#include <map>
using namespace std; 

bool less_than_7(int);

typedef map<string, int> MapT;  //map declaration
typedef MapT::const_iterator MapIterT; //map iterator

//Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added
class MyClassVector1 
{ 
  private:  
      vector<int> vec; 
  public: 
      MyClassVector1 (vector<int> v)  //parameterized constructor
      { 
        vec = v; 
      } 
      void print() 
      { 
          /// print the value of vector 
          for (int i = 0; i < vec.size(); i++) 
          {
              cout << vec[i] << " "; 
          }    
      } 
};

class MyClassVector2 
{ 
  private:  
      vector<double> vdb; 
  public: 
      MyClassVector2 (vector<double> v)  //parameterized constructor
      { 
        vdb = v; 
      } 
      void print() 
      { 
          /// print the value of vector 
          for (int i = 0; i < vdb.size(); i++) 
          {
              cout << vdb[i] << " "; 
          }    
      } 
};

class MyClassVector3 
{ 
  private:  
      vector<string> vst; 
  public: 
      MyClassVector3 (vector<string> v)  //parameterized constructor
      { 
        vst = v; 
      } 
      void print() 
      { 
          /// print the value of vector 
          for (int i = 0; i < vst.size(); i++) 
          {
              cout << vst[i] << " "; 
          }    
      } 
};

int main() 
{
    /****Section_Name***Vectors*/ 
    //Write the base code for: 5. std::vector example
    vector<double> vd; //vd elments are floating point numbers
    vector<int> vi; //vi elements are integer numbers 
    vector<string> vs; //vs elements are string objects 

    //Expand this code to:

    //add 3 elements to the vd vector
    vd.push_back(1);
    vd.push_back(2);
    vd.push_back(3);
    vd.push_back(55.4); 

    //add 3 elements to the vi vector
    vi.push_back(4);
    vi.push_back(5);
    vi.push_back(6);

   // add 3 elements to the vs vector
   vs.push_back("7");
   vs.push_back("8");
   vs.push_back("9");

   // display the 3 elements in the vd vector
   cout << "\nValues in vd: \n"; 
   for(double vals : vd)
   {
     cout << vals << endl; 
   }
   cout << "\nAnother way to print vector: " << endl; 
   for(int i = 0; i < vd.size(); i++)
   {
     cout << vd[i] << endl; 
   }

    //display the 3 elements in the vi vector
    cout << "\nValues in vi: \n"; 
   for(int vals : vi)
   {
     cout << vals << endl; 
   }
   cout << "\nAnother way to print vector: " << endl; 
   for(int i = 0; i < vi.size(); i++)
   {
     cout << vi[i] << endl; 
   }

   // display the 3 elements in the vs vector
   cout << "\nValues in vs: \n"; 
   for(string vals : vs)
   {
     cout << vals << endl; 
   }
   cout << "\nAnother way to print vector: " << endl; 
   for(int i = 0; i < vs.size(); i++)
   {
     cout << vs[i] << endl; 
   }

    /****Section_Name***Vector_as_Class_Member*/ 
    //Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/

   cout << "\nVector1_as_Class_Member" << endl; 
    vector<int> vec; 
        for (int i = 1; i <= 5; i++) 
            vec.push_back(i); 
        MyClassVector1 obj(vec); 
        obj.print(); 
        cout << endl;
      
      //Continue with MyClassVector2 and MyClassVector3

      cout << "\nVector2_as_Class_Member" << endl; 
      vector<double> vdb; 
        for (int i = 1; i <= 5; i++) 
            vdb.push_back(i); 
        MyClassVector2 ob(vdb); 
        ob.print();
        cout << endl;

        cout << "\nVector3_as_Class_Member" << endl; 
        vector<string> vst;  
            vst.push_back("1"); 
            vst.push_back("2");
            vst.push_back("3");
            vst.push_back("4");
            vst.push_back("5");
        MyClassVector3 o(vst); 
        o.print();
        cout << endl;

    /****Section_Name***STL_Iterators*/ 
    
    vector<int> vint(3); //vector with 3 integer numbers
    vint[0] = 10;
    vint[1] = 20;
    vint[2] = 30;

    //Display the elements of the vector:
    cout << "\nDisplay the elements of vint: " << endl;
    vector<int>::iterator it;
    for (it = vint.begin(); it != vint.end(); ++it) {
      cout << *it << " ";
      cout << endl;
      //like a pointer, iterator is dereferenced to
      //access the value of the element pointed by it.
    }

    /****Section_Name*** Stack*/

    stack<int> st;

    st.push(100); //Push number on the stack
    assert(st.size() == 1); //Verify 1 element is on the stack
    assert(st.top() == 100); //Verify element value

    cout << "\nThe current value at the top of the stack: " << st.top() << endl;

    st.top() = 456; //Assign new value
    assert(st.top() == 456);

    cout << "\nThe new value at the top of the stack: " << st.top() << endl;

    st.pop(); //Remove element
    assert(st.empty() == true);
    cout << endl;


    /****Section_Name**** Set*/
    //Write the code as presented in: 3. std::set

    set<int> iset; //Set of unique integer numbers

    iset.insert(11); //Populate set with some Values
    iset.insert(-11);
    iset.insert(55);
    iset.insert(22);
    iset.insert(22);

    if (iset.find(55) != iset.end()) { //Is the value already stored?
      iset.insert(55);
    }

    assert(iset.size() == 4); 
    set<int>::iterator i;

    for(i = iset.begin(); i != iset.end(); i++) {
      cout << *i << " ";
    }
    cout << endl;

    /****Section_Name****Pair_Structure*/
    //Write the code as presented in: 4. std::pair structure

      pair<string, string> strstr; //declare a pair of two strings
      strstr.first = "Hello"; //populate the pair
      strstr.second = "World";

      cout << "\nHere is the first pair: " << strstr.first << " " << strstr.second << endl;

      pair <int, string> intstr; //declare a pair with one int and one string
      intstr.first = 1; //populate the pair
      intstr.second = "one";

      cout << "\nHere is the second pair: " << intstr.first << " " << intstr.second << endl;

      pair <string, int> strint("two", 2); //declare a pair with one string and one int
      assert(strint.first == "two"); 
      assert(strint.second == 2);

      cout << "\nHere is the third pair: " << strint.first << " " << strint.second << endl;
      cout << endl;


    /****Section_Name**** Map_Insert*/
    //Write the code as presented in: 14. std::map::insert

      MapT amap; //map declaration in main
      pair<MapIterT, bool> result = amap.insert(make_pair("Fred", 45)); //fill map
      assert(result.second == true); //make sure result is set to true
      assert(result.first->second == 45);


      result = amap.insert(make_pair("Fred", 54)); //change the value
      //Fred was already in the map, result.first simply points there now

      assert(result.second == false); //change result to false
      assert(result.first->second == 45);

    /****Section_Name****Map_Summary*/
    //Write the code as presented in: 16. Map summary

      map<string, string> phone_book; //declare map
      phone_book["411"] = "Directory"; //fill map
      phone_book["911"] = "Emergency";
      phone_book["508-678-2811"] = "BCC";

      if (phone_book.find("411") != phone_book.end()) { //check if already in map
        phone_book.insert(make_pair(string("411"), string("Directory")));
      }

      assert(phone_book.size() == 3);

      map<string, string>::const_iterator itr; //make an iterator for the map

      for (itr = phone_book.begin(); itr != phone_book.end(); ++itr) { //print the map
        cout << itr->first << " " << itr->second << endl;
      }
      cout << endl;

    /****Section_Name**** Sort_Algorithm*/
    //Write the code as presented in: 23. sort example

    int arr[100]; //declare array
    sort(arr, arr + 100); //sort array

    vector<int> v1; //declare vector
    sort(v1.begin(), v1.end()); //sort vector
    
    /****Section_Name****Predicate_Algorithm*/
    //Write the code as presented in: 25. count_if and predicate function

      vector<int> v10;
      int count_less = std::count_if(v10.begin(), v1.end(), less_than_7);

      return 0; 
 }

 bool less_than_7(int value) 
      {
        return value < 7;
      }