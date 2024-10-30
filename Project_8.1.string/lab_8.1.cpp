#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int Count(const string& s) {
    int k = 0;
    size_t pos = 0;
    size_t pos_no, pos_on;

    while (true) {
        pos_no = s.find("no", pos);
        pos_on = s.find("on", pos);

        if (pos_no == string::npos && pos_on == string::npos) break; 
        pos = min(pos_no, pos_on);
        if (pos == string::npos) pos = max(pos_no, pos_on);

        k++;      
        pos += 2; 
    }
    return k;
}

string Change(string& s) {
    size_t pos = 0;
    size_t pos_no, pos_on;

    while (true) {
        pos_no = s.find("no", pos);
        pos_on = s.find("on", pos);

        if (pos_no == string::npos && pos_on == string::npos) break;
        pos = min(pos_no, pos_on);
        if (pos == string::npos) pos = max(pos_no, pos_on);

        s.replace(pos, 2, "***"); 
        pos += 3;                 
    }
    return s;
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    cout << "String contains " << Count(str) << " pairs of 'no' or 'on'" << endl;

    string modifiedStr = Change(str);
    cout << "Modified string (param) : " << str << endl;
    cout << "Modified string (result): " << modifiedStr << endl;

    return 0;
}

//#include <iostream>
//#include <string>
//using namespace std;
//
//int Count(const string s) {
//    int k = 0;
//    size_t pos = 0;
//
//    while (true) {
//        size_t pos_no = s.find("no", pos);
//        size_t pos_on = s.find("on", pos);
//
//        // якщо жодного з п≥др€дк≥в б≥льше немаЇ, виходимо з циклу
//        if (pos_no == string::npos && pos_on == string::npos) break;
//
//        // ¬ибираЇмо найближчу позиц≥ю дл€ "no" або "on"
//        if (pos_no != string::npos && (pos_on == string::npos || pos_no < pos_on)) {
//            pos = pos_no;
//        }
//        else {
//            pos = pos_on;
//        }
//
//        k++;      // «б≥льшуЇмо л≥чильник
//        pos += 2; // ѕерем≥щуЇмо позиц≥ю п≥сл€ знайденого п≥др€дка
//    }
//
//    return k;
//}
//
//string Change(string& s) {
//    size_t pos = 0;
//
//    while (true) {
//        size_t pos_no = s.find("no", pos);
//        size_t pos_on = s.find("on", pos);
//
//        // якщо жодного з п≥др€дк≥в б≥льше немаЇ, виходимо з циклу
//        if (pos_no == string::npos && pos_on == string::npos) break;
//
//        // ¬ибираЇмо найближчу позиц≥ю дл€ "no" або "on"
//        if (pos_no != string::npos && (pos_on == string::npos || pos_no < pos_on)) {
//            pos = pos_no;
//        }
//        else {
//            pos = pos_on;
//        }
//
//        s.replace(pos, 2, "***"); // «ам≥нюЇмо "no" або "on" на "***"
//        pos += 3;                 // ѕерем≥щуЇмо позиц≥ю п≥сл€ зам≥ни
//    }
//
//    return s;
//}
//
//int main() {
//    string str;
//    cout << "Enter string:" << endl;
//    getline(cin, str);
//
//    cout << "String contains " << Count(str) << " pairs of 'no' or 'on'" << endl;
//
//    string dest = Change(str);
//    cout << "Modified string (param) : " << str << endl;
//    cout << "Modified string (result): " << dest << endl;
//
//    return 0;
//}
