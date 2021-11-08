#include <iostream> 
#include <cstdlib>
#include <cctype> 

using namespace std;

class Month
{


public:
  Month(); 
  Month(char m1, char m2, char m3) {
    if (m1 == 'j' && m2 == 'a' && m3 == 'n') 
      mnth = 1;
    else if (m1 == 'f' && m2 == 'e' && m3 == 'b')
      mnth = 2;
    else if (m1 == 'm' && m2 == 'a' && m3 == 'r')
      mnth = 3;
    else if (m1 == 'a' && m2 == 'p' && m3 == 'r')
      mnth = 4;
    else if (m1 == 'm' && m2 == 'a' && m3 == 'y')
      mnth = 5;
    else if (m1 == 'j' && m2 == 'u' && m3 == 'n') 
      mnth = 6;
    else if (m1 == 'j' && m2 == 'u' && m3 == 'l') 
      mnth = 7;
    else if (m1 == 'a' && m2 == 'u' && m3 == 'g')
      mnth = 8;
    else if (m1 == 's' && m2 == 'e' && m3 == 'p')
      mnth = 9;
    else if (m1 == 'o' && m2 =='c' && m3 == 't')
      mnth = 10;
    else if (m1 == 'n' && m2 =='o' && m3 == 'v')
      mnth = 11;
    else if (m1 == 'd' && m2 == 'e' && m3 == 'c')
      mnth = 12;
    else {
      cout << m1 << m2 << m3 << " is not a valid month.";
    }  
  }
  Month(int monthNumber) { 
    mnth = monthNumber; 
  }           
  void getMonthByNumber(istream& in) { 
    in >> mnth;
  }
  void getMonthByName(istream& in) {
    char m1, m2, m3;
    in >> m1 >> m2 >> m3;
    m1 = tolower(m1);
    m2 = tolower(m2);
    m3 = tolower(m3);
    if (m1 == 'j' && m2 == 'a' && m3 == 'n') 
      mnth = 1;
    else if (m1 == 'f' && m2 == 'e' && m3 == 'b')
      mnth = 2;
    else if (m1 == 'm' && m2 == 'a' && m3 == 'r')
      mnth = 3;
    else if (m1 == 'a' && m2 == 'p' && m3 == 'r')
      mnth = 4;
    else if (m1 == 'm' && m2 == 'a' && m3 == 'y')
      mnth = 5;
    else if (m1 == 'j' && m2 == 'u' && m3 == 'n') 
      mnth = 6;
    else if (m1 == 'j' && m2 == 'u' && m3 == 'l') 
      mnth = 7;
    else if (m1 == 'a' && m2 == 'u' && m3 == 'g')
      mnth = 8;
    else if (m1 == 's' && m2 == 'e' && m3 == 'p')
      mnth = 9;
    else if (m1 == 'o' && m2 =='c' && m3 == 't')
      mnth = 10;
    else if (m1 == 'n' && m2 =='o' && m3 == 'v')
      mnth = 11;
    else if (m1 == 'd' && m2 == 'e' && m3 == 'c')
      mnth = 12;
    else {
      cout << m1 << m2 << m3 << " is not a valid month. ";
    }  
  }   
  void outputMonthNumber(ostream& out) { 
    out << mnth;
  }
  void outputMonthName(ostream& out) {
    if (mnth == 1) out << "Jan";
    else if (mnth == 2) out << "Feb";
    else if (mnth == 3) out << "Mar";
    else if (mnth == 4) out << "Apr";
    else if (mnth == 5) out << "May";
    else if (mnth == 6) out << "Jun";
    else if (mnth == 7) out << "Jul";
    else if (mnth == 8) out << "Aug";
    else if (mnth == 9) out << "Sep";
    else if (mnth == 10) out << "Oct";
    else if (mnth == 11) out << "Nov";
    else if (mnth == 12) out << "Dec";
    else out << "Enter a valid number for a month. ";
  }
  Month nextMnth(istream& in) {
    in >> mnth;
    int nextMnth;
    if (mnth == 12) {
      nextMnth = 1;
    }
    else {
      nextMnth = mnth + 1;
    }
    return nextMnth;
  }
  private:
  int mnth;
};

int main() {
  
  cout << "Constructor test for Month(char, char, char): " << endl;
  Month m1 ('j', 'a', 'n');
  m1.outputMonthNumber(cout); cout << " ";
  m1.outputMonthName(cout); cout << endl;
  Month m2 ('f', 'e', 'b');
  m2.outputMonthNumber(cout); cout << " ";
  m2.outputMonthName(cout); cout << endl;
  Month m3('m', 'a', 'r');
  m3.outputMonthNumber(cout); cout << " ";
  m3.outputMonthName(cout); cout << endl;
  Month m4('a', 'p', 'r');
  m4.outputMonthNumber(cout); cout << " ";
  m4.outputMonthName(cout); cout << endl;
  Month m5('m', 'a', 'y');
  m5.outputMonthNumber(cout); cout << " ";
  m5.outputMonthName(cout); cout << endl;
  Month m6('j', 'u', 'n');
  m6.outputMonthNumber(cout); cout << " ";
  m6.outputMonthName(cout); cout << endl;
  Month m7('j', 'u', 'l');
  m7.outputMonthNumber(cout); cout << " ";
  m7.outputMonthName(cout); cout << endl;
  Month m8('a', 'u', 'g');
  m8.outputMonthNumber(cout); cout << " ";
  m8.outputMonthName(cout); cout << endl;
  Month m9('s', 'e', 'p');
  m9.outputMonthNumber(cout); cout << " ";
  m9.outputMonthName(cout); cout << endl;
  Month m10('o', 'c', 't');
  m10.outputMonthNumber(cout); cout << " ";
  m10.outputMonthName(cout); cout << endl;
  Month m11('n', 'o', 'v');
  m11.outputMonthNumber(cout); cout << " ";
  m11.outputMonthName(cout); cout << endl;
  Month m12('d', 'e', 'c');
  m12.outputMonthNumber(cout); cout << " ";
  m12.outputMonthName(cout); cout << endl;

  cout << "\nConstructor test for Month(int): " << endl;
  int i = 1;
  while ( i <= 12) {
    Month ma(i);
    ma.outputMonthNumber(cout); cout << " ";
    ma.outputMonthName(cout); cout << endl;
    i++;
  }

  cout << "\nTest for getMonthByName and outputMonth." << endl <<
          "Enter the first three letters of a month: " << endl;
  i = 1;
  while (i <=12) {
    m1.getMonthByName(cin);
    cout << "The result of the three letter month is: ";
    m1.outputMonthNumber(cout); cout << endl;
    
    i++;
  }
    
  cout << "\nTest for getMonthByNumber and outputMonth." << endl <<
                  "Enter the number of the month: " << endl;
  i = 1;
  while (i <=12) {
    m1.getMonthByNumber(cin);
    cout << "The result of the month number is: ";
    m1.outputMonthName(cout); cout << endl; 
    i++;
  }

  cout << "\nTest for nextMnth." << endl <<
          "Enter the number of the months to show the next month. " << endl;
  i = 1;
  while (i <=12) {
    m1 = m1.nextMnth(cin);
    cout << "The next month is: ";
    m1.outputMonthNumber(cout); cout << " "; 
    m1.outputMonthName(cout); cout << endl; 
    i++;
  }
  return 0;
}
