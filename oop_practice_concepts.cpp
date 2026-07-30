//#include<iostream>
//#include<cmath>
//using namespace std;
//class vectortype
//{
//
//	double* x;
//	double* y;
//	double* z;
//public:
//	vectortype(double a, double b, double c) {
//		parametrized ctr
//		x = new double;
//		*x = a;
//		y = new double;
//		*y = b;
//		z = new double;
//		*z = c;
//	}
//	vectortype()//default ctr
//	{
//		x = new double;
//		*x = 0;
//		y = new double;
//		*y = 0;
//		z = new double;
//		*z = 0;
//	}
//	vectortype(const vectortype& obj)//copy ctr
//	{
//		x = new double;
//		*x = *(obj.x);
//		y = new double;
//		*y = *(obj.y);
//		z = new double;
//		*z = *(obj.z);
//	}
//	vectortype& operator =(const vectortype& obj)//assignment
//	{
//		if (this != &obj)
//		{
//			delete x;
//			delete y;
//			delete z;
//			x = new double;
//			*x = *(obj.x);
//			y = new double;
//			*y = *(obj.y);
//			z = new double;
//			*z = *(obj.z);
//		}
//		return *this;
//	}
//	double operator *(const vectortype& obj)//u*v
//	{
//
//		return (*x * *(obj.x) + *y * *(obj.y) + *z * *(obj.z));
//	}
//
//	vectortype operator/(const vectortype& obj)
//	{
//		vectortype r;
//
//		if (*(obj.x) != 0)
//			*(r.x) = *x / *(obj.x);
//		else
//			*(r.x) = 0;
//
//		if (*(obj.y) != 0)
//			*(r.y) = *y / *(obj.y);
//		else
//			*(r.y) = 0;
//
//		if (*(obj.z) != 0)
//			*(r.z) = *z / *(obj.z);
//		else
//			*(r.z) = 0;
//
//		return r;
//	}
//	vectortype operator+(const vectortype& obj)const
//	{
//		vectortype r;
//		*(r.x) = *x + *(obj.x);
//		*(r.y) = *y + *(obj.y);
//		*(r.z) = *z + *(obj.z);
//		return r;
//	}
//
//	vectortype operator++(int)
//	{
//		vectortype temp = *this;
//		(*x)++; (*y)++; (*z)++;
//		return temp;
//	}
//
//	vectortype operator++()
//	{
//		*(x) = *x + 1;
//		*(y) = *y + 1;
//		*(z) = *z + 1;
//		return *this;
//	}
//
//	vectortype operator--(int)
//	{
//		vectortype temp = *this;
//		(*x)--; (*y)--; (*z)--;
//		return temp;
//	}
//
//	vectortype operator--()
//	{
//		*(x) = *x - 1;
//		*(y) = *y - 1;
//		*(z) = *z - 1;
//		return *this;
//	}
//	vectortype operator-(const vectortype& obj)
//	{
//		vectortype r;
//		*(r.x) = *x - *(obj.x);
//		*(r.y) = *y - *(obj.y);
//		*(r.z) = *z - *(obj.z);
//		return r;
//	}
//	double length()const
//	{
//		double len;
//		len = sqrt((*x) * (*x) + (*y) * (*y) + (*z) * (*z));
//		return len;
//
//	}
//	void display()
//	{
//		cout << "Vector :" << *x << " " << *y << " " << *z << endl;
//	}
//	void show(double a)
//	{
//		cout << a << endl;;
//	}
//
//	void angle(const vectortype& a)
//	{
//		double len1 = length();
//		double len2 = a.length();
//		if (len1 == 0 || len2 == 0)
//		{
//			cout << "Undefined angle (zero vector)\n";
//			return;
//		}
//		double dot = (*this) * a;
//		double val = dot / (len1 * len2);
//		 safety for acos domain (-1,1)
//		if (val > 1)
//			val = 1;
//		if (val < -1)
//			val = -1;
//		double s = acos(val);
//		cout << "Angle is: " << s << endl;
//	}
//
//
//	friend ostream& operator <<(ostream& output, vectortype& obj);
//	friend istream& operator >>(istream& input, vectortype& obj);
//	friend bool operator==(const vectortype& obj, const vectortype& obj1);
//	friend bool operator!=(const vectortype& obj, const vectortype& obj1);
//	friend bool operator<(const vectortype& obj1, const vectortype& obj2);
//	friend bool operator>(const vectortype& obj1, const vectortype& obj2);
//	~vectortype()
//	{
//		delete x;
//		delete y;
//		delete z;
//	}
//
//};
//ostream& operator <<(ostream& output, vectortype& obj)
//{
//	output << "vector: ";
//	output << *(obj.x) << " " << *(obj.y) << " " << *(obj.z);
//	output << endl;
//	return output;
//
//}
//istream& operator >>(istream& input, vectortype& obj)
//{
//	cout << "Enter a vector";
//	input >> *(obj.x) >> *(obj.y) >> *(obj.z);
//	cout << endl;
//	return input;
//}
//bool operator==(const vectortype& obj, const vectortype& obj1)
//{
//	return ((*obj.x == *obj1.x) && (*obj.y == *obj1.y) && (*obj.z == *obj1.z));
//}
//
//bool operator!=(const vectortype& obj, const vectortype& obj1)
//{
//	return ((*obj.x != *obj1.x) || (*obj.y != *obj1.y) || (*obj.z != *obj1.z));
//}
//
//bool operator<(const vectortype& obj1, const vectortype& obj2)
//{
//	return obj1.length() < obj2.length();
//}
//
//bool operator>(const vectortype& obj1, const vectortype& obj2)
//{
//	return obj1.length() > obj2.length();
//}
//int main()
//{
//	vectortype u;
//	vectortype v;
//	cin >> u >> v;
//	cout << u;
//	cout << v;
//	vectortype a, b;
//	u.angle(v);
//	a = u + v;
//	b = u - v;
//	cout << "Addition of ";
//	a.display();
//	cout << "Subtraction of ";
//	b.display();
//	++u;
//	cout << "vector u after pre increment: ";
//	u.display();
//	vectortype p = u++;
//	cout << "value of vector u at time of post increment: ";
//	p.display();
//	cout << "vector u after post increment: ";
//	u.display();
//
//	vectortype p1 = --u;
//	cout << "vector u after pre decrement: ";
//	p1.display();
//	vectortype p2 = u--;
//	cout << "vector u after post decrement: ";
//	u.display();
//	cout << "value of u at time of post deccrement: ";
//	p2.display();
//	if (u < v)
//		cout << "u is smaller than v\n";
//
//	if (u > v)
//		cout << "u is greater than v\n";
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//q2
//#include<iostream>
//using namespace std;
//class num
//{
// char* str;
//public:
//
// num()
// {
// str = new char[1];
// str[0] = '\0';
// }
//
// num( char* s)
// {
// int len = 0;
// while (s[len] != '\0')
// {
// len++;
// }
// str = new char[len + 1];
// for (int i = 0; i <= len; i++)
// str[i] = s[i];
// }
// copy constructor
// num(const num& other)
// {
// int len = 0;
// while (other.str[len] != '\0') len++;
//
// str = new char[len + 1];
//
// for (int i = 0; i <= len; i++)
// str[i] = other.str[i];
// }
//
// int length()
// {
// int i = 0;
// while (str[i] != '\0') i++;
// return i;
// }
// length
// int length(char*s)
// {
// int i = 0;
// int len = 0;
// while (s[i] != '\0')
// {
// len++;
// i++;
// }
// return len;
// }
// uppercase
// void upperc()
// {
// int i = 0;
// while (str[i] != '\0') {
// if (str[i] >= 'a' && str[i] <= 'z')
// {
// str[i] = str[i] - 32;
// }
// i++;
// }
// }
// lowercase
// void lowerc()
// {
// int i = 0;
// while (str[i] != '\0') {
// if (str[i] >= 'A' && str[i] <= 'Z')
// {
// str[i] = str[i] +32;
// }
// i++;
// }
// }
//character at index
// char at(int index)
// {
//
// return str[index];
// }
// substring
// num substring(int start, int end)
// {
// char temp[100];
//
// int j = 0;
// for (int i = start; i <= end; i++)
// temp[j++] = str[i];
//
// temp[j] = '\0';
//
// return num(temp);
// }
//
//
// int compare(const num& other) const
// {
// int i = 0;
// while (str[i] != '\0' && other.str[i] != '\0')
// {
// if (str[i] > other.str[i])
// return 1;
// if (str[i] < other.str[i])
// return -1;
// i++;
// }
// if (str[i] == '\0' && other.str[i] == '\0')
// return 0;
// if (str[i] == '\0')
// return -1;
// return 1;
// }
//
//
// int findindex(const num& sub1)
// {
// int len1 = 0, len2 = 0;
//
// while (str[len1] != '\0')
// len1++;
//
// while (sub1.str[len2] != '\0')
// len2++;
//
// for (int i = 0; i <= len1 - len2; i++)
// {
// int j = 0;
// while (j < len2 && str[i + j] == sub1.str[j])
// {
// j++;
// }
// if (j == len2)
// return i;
// }
// return -1;
// }
// void concatenate(char* s)
// {
// int len1 = length();
// int len2 = length(s);
// char* temp = new char[len1 + len2 + 2];
// int i = 0;
// for (int j = 0; j < len1; j++)
// temp[i++] = str[j];
// temp[i++] = ' ';
// for (int j = 0; j < len2; j++) {
// temp[i++] = s[j];
// }
// temp[i] = '\0';
// delete[] str;
// str = temp;
// }
// void concatenate(char c)
// {
// int len1 = length(str);
// char* temp = new char[len1 + 3]; //space,ch,'\0
// int i = 0;
//
// for (int j = 0; j < len1; j++) {
// temp[i++] = str[j];
// }
// temp[i++] = ' ';  
// temp[i++] = c;    
// temp[i] = '\0';
// delete[] str;
// str = temp;
// }
//
// void concatenate(int n)
// {
// char temp[20];
// int i = 0;
// if (n < 0)
// {
// temp[i++] = '-';
// n = -n;
// }
// if (n == 0)
// {
// temp[i++] = '0';
// }
// else
// {
// char nums[20];
// int j = 0;
// while (n > 0)
// {
// nums[j++] = (n % 10) + '0';
// n = n / 10;
// }
// for (int k = j - 1; k >= 0; k--)
// {
// temp[i++] = nums[k];
// }
// }
// temp[i] = '\0';
// concatenate(temp);
// }
//
// void concatenate(float f)
// {
// char temp[50];
// int i = 0;
//
// if (f < 0)
// {
// temp[i++] = '-';
// f = -f;
// }
//
// int intpart = (int)f;
//
// char nums[20];
// int j = 0;
//
// if (intpart == 0)
// temp[i++] = '0';
// else
// {
// while (intpart > 0)
// {
// nums[j++] = (intpart % 10) + '0';
// intpart /= 10;
// }
//
// for (int k = j - 1; k >= 0; k--)
// temp[i++] = nums[k];
// }
//
// temp[i++] = '.';
//
// float frac = f - (int)f;
//
// for (int k = 0; k < 2; k++)
// {
// frac *= 10;
// int digit = (int)frac;
// temp[i++] = digit + '0';
// frac -= digit;
// }
//
// temp[i] = '\0';
//
// concatenate(temp);
// }
//
// void concatenate(num s)
// {
// int len1 = length();
// int len2 = s.length();
// char* temp = new char[len1 + len2 + 2];
// int i = 0;
// for (int j = 0; j < len1; j++){
// temp[i++] = str[j];
// }
// temp[i++] = ' ';
// for (int j = 0; j < len2; j++) {
// temp[i++] = s.str[j];
// }
// temp[i] = '\0';
// delete[] str;
// str = temp;
// }
//
// void prepend(char* s)
// {
// int len1 = length(s);
// int len2 = length(str);
// char* temp = new char[len1 + len2 + 3];
// int i = 0;
// for (int j = 0; j < len1; j++) {
// temp[i++] = s[j];
// }
// temp[i++] = ' ';
// for (int j = 0; j < len2; j++){
// temp[i++] = str[j];
// }
// temp[i] = '\0';
// delete[] str;
// str = temp;
// }
//
//
// void prepend(char c)
// {
// int len2 = length(str);
// char* temp = new char[len2 + 3];
// int i = 0;
// temp[i++] = c;
// temp[i++] = ' ';
// for (int j = 0; j < len2; j++){
// temp[i++] = str[j];
// }
// temp[i] = '\0';
// delete[] str;
// str = temp;
// }
//
// void prepend(int n)
// {
// char temp[20];
// int i = 0;
// if (n < 0)
// {
// temp[i++] = '-';
// n = -n;
// }
// if (n == 0)
// {
// temp[i++] = '0';
// }
// else
// {
// char nums[20];
// int j = 0;
//
// while (n > 0)
// {
// nums[j++] = (n % 10) + '0';
// n = n / 10;
// }
// for (int k = j - 1; k >= 0; k--){
// temp[i++] = nums[k];
// }
// }
// temp[i] = '\0';
// prepend(temp);
// }
// void prepend(float f)
// {
// char temp[50];
// int i = 0;
//
// if (f < 0)
// {
// temp[i++] = '-';
// f = -f;
// }
//
// int intpart = (int)f;
//
// char nums[20];
// int j = 0;
//
// if (intpart == 0)
// temp[i++] = '0';
// else
// {
// while (intpart > 0)
// {
// nums[j++] = (intpart % 10) + '0';
// intpart /= 10;
// }
//
// for (int k = j - 1; k >= 0; k--)
// temp[i++] = nums[k];
// }
// temp[i++] = '.';
// float frac = f - (int)f;
// for (int k = 0; k < 2; k++)
// {
// frac *= 10;
// int digit = (int)frac;
// temp[i++] = digit + '0';
// frac -= digit;
// }
// temp[i] = '\0';
// prepend(temp);
// }
//
// void prepend(num s)
// {
// int len1 = s.length();
// int len2 = length();
// char* temp = new char[len1 + len2 + 1];
// int i = 0;
// for (int j = 0; j < len1; j++) {
// temp[i++] = s.str[j];
// }
// for (int j = 0; j < len2; j++){
// temp[i++] = str[j];
// }
// temp[i] = '\0';
// delete[] str;
// str = temp;
// }
//
// num operator+(char* s)
// {
// num temp(*this);
// temp.concatenate(s);
// return temp;
// }
// num operator+(char c)
// {
// num temp(*this);
// temp.concatenate(c);
// return temp;
// }
// num operator+(int n)
// {
// num temp(*this);
// temp.concatenate(n);
// return temp;
// }
// num operator+(float f)
// {
// num temp(*this);
// temp.concatenate(f);
// return temp;
// }
// num operator+(num s)
// {
// num temp(*this);
// temp.concatenate(s);
// return temp;
// }
//
// friend num operator+(char* s, num obj)
// {
// obj.prepend(s);
// return obj;
// }
// friend num operator+(char c, num obj)
// {
// obj.prepend(c);
// return obj;
// }
// friend num operator+(int n, num obj)
// {
// obj.prepend(n);
// return obj;
// }
// friend num operator+(float f, num obj)
// {
// obj.prepend(f);
// return obj;
// }
// friend ostream& operator<<(ostream& out, const num& obj)
// {
// out << obj.str;
// return out;
// }
// friend istream& operator>>(istream& in, num& obj)
// {
// char temp[1000];
// in.getline(temp, 1000);
// obj = num(temp);
// return in;
// }
//
// num& operator=(const num& obj)
// {
// if (this != &obj)
// {
// delete[] str;
//
// int len = 0;
// while (obj.str[len] != '\0')
// {
// len++;
// }
//
// str = new char[len + 1];
//
// for (int i = 0; i <= len; i++)
// str[i] = obj.str[i];
// }
// return *this;
// }
//
// char& operator[](int index)
// {
// if (index < 0 || index >= length())
// {
// cout << "Invalid index";
// return str[0];
// }
// return str[index];
// }
//
// bool operator==(const num& obj)
// {
// return compare(obj) == 0;
// }
//
// bool operator<(const num& obj) const
// {
// return compare(obj) == -1;
// }
//
// bool operator>(const num& obj)
// {
// return compare(obj) == 1;
// }
//
// bool operator!=(const num& obj)
// {
// return compare(obj) != 0;
// }
// void display()
// {
// cout << str;
// cout << endl;
// }
//
// ~num()
// {
// delete[] str;
// }
//
//};
//int main()
//{
// num s;
// cout << "Enter your string: ";
// cin >> s;
// cout << s;
// cout << endl;
// cout << "Length of string: ";
// cout<<s.length();
// cout << endl;
// cout << endl;
//
// cout << "String in uppercase: ";
// s.upperc();
// s.display();
//
// cout << "String in lowercase: ";
// s.lowerc();
// s.display();
// cout << endl;
//
// int index;
// do
// {
// cout << "Enter index: ";
// cin >> index;
//
// if (index < 0 || index >= s.length())
// {
// cout << "Invalid index! Try again.\n";
// }
// } while (index < 0 || index >= s.length());
// cout << "Character at index: " << s.at(index) << endl;
// cout << endl;
// int start, end;
//
// do
// {
// cout << "Enter starting index: ";
// cin >> start;
//
// cout << "Enter ending index: ";
// cin >> end;
//
// if (start < 0 || end < start || end >= s.length()||end<0)
// {
// cout << "Invalid range! Try again.\n";
// }
//
// } while (start < 0 || end < start || end >= s.length()||end<0);
//
// num sub = s.substring(start, end);
// cout << "Substring: " << sub << endl;
// int idx = s.findindex(sub);
// cout << "Starting index of substring: " << idx << endl;
//
// char* strr;
// strr = new char[100];
// cout << endl;
// cout << "Enter your string: ";
// cin.ignore(100, '\n');
// cin.getline(strr, 100);
// num s3 = s + strr;
//
// char c;
// cout << "Enter a character: ";
// cin >> c;
// num s4 = s + c;
//
// int n;
// cout << "Enter a number(integer): ";
// cin >>n;
// num s5 = s + n;
//
// float f;
// cout << "Enter a number(float): ";
// cin >> f;
// num s6 = s + f;
//
// num s0;
// cout << "Enter your string(as an obj): ";
// cin.ignore(1000, '\n');
// cin >> s0;
//
// num s2(s0);
// num s7 = s + s0;
//
// cout << "\n\t\t\tConcatenation (+):\n";
// s3.display();
// s4.display();
// s5.display();
// s6.display();
// s7.display();
//
// num s8 = s0 + s;
// num s9 = c + s;
// num s10 = n + s;
// num s11 = f + s;
// num s12 = s0 + s;
// cout << "\n\t\t\tPrepend (+):\n";
// s8.display();
// s9.display();
// s10.display();
// s11.display();
// s12.display();
// cout << endl;
// assigment operator
// num s13;
// s13 = s;
// cout << "Asigned value of s1:";
// s13.display();
// if (s13 == s)
// cout << "Both" << " " << s13 << " and " << " " << s << " strings are equal" << endl;;
// if(s13!=s)
// cout << "Both"<<" " << s13 << " and "<<" " << s << " strings are not equal" << endl;
// if(s>s0)
// cout << s<<" is greater than "<<s0<<endl;
// if (s < s0)
// cout << s << " is less  than " << s0<<endl;
//
//
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Roman {
//    int value;
//    string roman;
//
//public:
//    Roman()
//    {
//        roman = "";
//        value = 0;
//    }
//
//    Roman(string s)
//    {
//        if (!isvalid(s))
//        {
//            cout << "Invalid Roman number" << endl;
//            value = 0;
//            roman = "";
//            return;
//        }
//
//        roman = s;
//        value = romanToInt(s);
//    }
//
//    void setRoman(string s)
//    {
//        if (!isvalid(s))
//        {
//            cout << "Invalid Roman number" << endl;
//            value = 0;
//            roman = "";
//            return;
//        }
//
//        roman = s;
//        value = romanToInt(s);
//    }
//
//    bool isvalid(string s)
//    {
//        int i = 0;
//
//          VALID CHARACTER CHECK
//        while (i < s.length())
//        {
//            if (s[i] != 'I' && s[i] != 'V' && s[i] != 'X'
//                && s[i] != 'L' && s[i] != 'C'
//                && s[i] != 'D' && s[i] != 'M')
//            {
//                cout << "Invalid" << endl;
//                return false;
//            }
//
//            i++;
//        }
//
//          V, L, D CANNOT REPEAT
//        i = 0;
//
//        while (i < s.length() - 1)
//        {
//            if ((s[i] == 'V' && s[i + 1] == 'V') ||
//                (s[i] == 'L' && s[i + 1] == 'L') ||
//                (s[i] == 'D' && s[i + 1] == 'D'))
//            {
//                cout << "Invalid" << endl;
//                return false;
//            }
//
//            i++;
//        }
//
//          I, X, C MAX 3 TIMES CONSECUTIVE
//        int count = 1;
//
//        for (int i = 1; i < s.length(); i++)
//        {
//            if (s[i] == s[i - 1])
//            {
//                count++;
//
//                if (count > 3 &&
//                    (s[i] == 'I' || s[i] == 'X'
//                        || s[i] == 'C' || s[i] == 'M'))
//                {
//                    return false;
//                }
//            }
//            else
//            {
//                count = 1;
//            }
//        }
//
//          I can only be before V or X
//          X can only be before L or C
//          C can only be before D or M
//
//        for (int i = 0; i < s.length() - 1; i++)
//        {
//            int curr = 0;
//            int next = 0;
//
//            if (s[i] == 'I')
//                curr = 1;
//            else if (s[i] == 'V')
//                curr = 5;
//            else if (s[i] == 'X')
//                curr = 10;
//            else if (s[i] == 'L')
//                curr = 50;
//            else if (s[i] == 'C')
//                curr = 100;
//            else if (s[i] == 'D')
//                curr = 500;
//            else if (s[i] == 'M')
//                curr = 1000;
//
//            if (s[i + 1] == 'I')
//                next = 1;
//            else if (s[i + 1] == 'V')
//                next = 5;
//            else if (s[i + 1] == 'X')
//                next = 10;
//            else if (s[i + 1] == 'L')
//                next = 50;
//            else if (s[i + 1] == 'C')
//                next = 100;
//            else if (s[i + 1] == 'D')
//                next = 500;
//            else if (s[i + 1] == 'M')
//                next = 1000;
//
//            if (curr < next)
//            {
//                if (s[i] == 'I')
//                {
//                    if (s[i + 1] != 'V' && s[i + 1] != 'X')
//                        return false;
//                }
//                else if (s[i] == 'X')
//                {
//                    if (s[i + 1] != 'L' && s[i + 1] != 'C')
//                        return false;
//                }
//                else if (s[i] == 'C')
//                {
//                    if (s[i + 1] != 'D' && s[i + 1] != 'M')
//                        return false;
//                }
//                else
//                {
//                    return false;
//                }
//            }
//        }
//
//        return true;
//    }
//
//    int romanToInt(string s)
//    {
//        int i = 0;
//        int result = 0;
//
//        while (i < s.length())
//        {
//            int curr = 0;
//            int next = 0;
//
//             current value
//            if (s[i] == 'I')
//                curr = 1;
//            else if (s[i] == 'V')
//                curr = 5;
//            else if (s[i] == 'X')
//                curr = 10;
//            else if (s[i] == 'L')
//                curr = 50;
//            else if (s[i] == 'C')
//                curr = 100;
//            else if (s[i] == 'D')
//                curr = 500;
//            else if (s[i] == 'M')
//                curr = 1000;
//
//             next value
//            if (i + 1 < s.length())
//            {
//                if (s[i + 1] == 'I')
//                    next = 1;
//                else if (s[i + 1] == 'V')
//                    next = 5;
//                else if (s[i + 1] == 'X')
//                    next = 10;
//                else if (s[i + 1] == 'L')
//                    next = 50;
//                else if (s[i + 1] == 'C')
//                    next = 100;
//                else if (s[i + 1] == 'D')
//                    next = 500;
//                else if (s[i + 1] == 'M')
//                    next = 1000;
//                else
//                    next = 0;
//            }
//            else
//            {
//                next = 0;
//            }
//
//             rule XIV =14
//            if (curr < next)
//                result = result - curr;
//            else
//                result = result + curr;
//
//            i++;
//        }
//
//        return result;
//    }
//
//    string intToRoman(int num)
//    {
//        IF num >= value:  add symbol subtract value
//
//        string result = "";
//
//        while (num >= 1000)
//        {
//            result += "M";
//            num -= 1000;
//        }
//
//        while (num >= 900)
//        {
//            result += "CM";
//            num -= 900;
//        }
//
//        while (num >= 500)
//        {
//            result += "D";
//            num -= 500;
//        }
//
//        while (num >= 400)
//        {
//            result += "CD";
//            num -= 400;
//        }
//
//        while (num >= 100)
//        {
//            result += "C";
//            num -= 100;
//        }
//
//        while (num >= 90)
//        {
//            result += "XC";
//            num -= 90;
//        }
//
//        while (num >= 50)
//        {
//            result += "L";
//            num -= 50;
//        }
//
//        while (num >= 40)
//        {
//            result += "XL";
//            num -= 40;
//        }
//
//        while (num >= 10)
//        {
//            result += "X";
//            num -= 10;
//        }
//
//        while (num >= 9)
//        {
//            result += "IX";
//            num -= 9;
//        }
//
//        while (num >= 5)
//        {
//            result += "V";
//            num -= 5;
//        }
//
//        while (num >= 4)
//        {
//            result += "IV";
//            num -= 4;
//        }
//
//        while (num >= 1)
//        {
//            result += "I";
//            num -= 1;
//        }
//
//        return result;
//    }
//
//    bool operator==(const Roman& obj) const
//    {
//        return value == obj.value;
//    }
//
//    bool operator!=(const Roman& obj) const
//    {
//        return value != obj.value;
//    }
//
//    bool operator<(const Roman& obj) const
//    {
//        return value < obj.value;
//    }
//
//    bool operator>(const Roman& obj) const
//    {
//        return value > obj.value;
//    }
//
//    Roman operator++()
//    {
//        value++;
//        roman = intToRoman(value);
//        return *this;
//    }
//
//    Roman operator++(int)
//    {
//        Roman temp = *this;
//
//        value++;
//        roman = intToRoman(value);
//
//        return temp;
//    }
//
//    Roman operator--()
//    {
//        if (value <= 1)
//        {
//            cout << "Invalid Roman value" << endl;
//            value = 1;
//        }
//        else
//        {
//            value--;
//        }
//
//        roman = intToRoman(value);
//
//        return *this;
//    }
//
//    Roman operator--(int)
//    {
//        Roman temp = *this;
//
//        if (value <= 1)
//        {
//            cout << "Invalid Roman value" << endl;
//            value = 1;
//        }
//        else
//        {
//            value--;
//        }
//
//        roman = intToRoman(value);
//
//        return temp;
//    }
//
//    Roman operator+(const Roman& obj)
//    {
//        Roman temp;
//
//        temp.value = value + obj.value;
//
//        if (temp.value > 3999)
//        {
//            cout << "Result exceeds" << endl;
//            temp.value = 0;
//            temp.roman = "";
//            return temp;
//        }
//
//        temp.roman = intToRoman(temp.value);
//
//        return temp;
//    }
//
//    Roman operator-(const Roman& obj)
//    {
//        Roman temp;
//
//        temp.value = value - obj.value;
//
//        if (temp.value <= 0)
//        {
//            cout << "Invalid result" << endl;
//            temp.value = 0;
//            temp.roman = "";
//            return temp;
//        }
//
//        temp.roman = intToRoman(temp.value);
//
//        return temp;
//    }
//
//    Roman operator*(const Roman& obj)
//    {
//        Roman temp;
//
//        temp.value = value * obj.value;
//
//        if (temp.value > 3999)
//        {
//            cout << "Result exceeds m" << endl;
//            temp.value = 0;
//            temp.roman = "";
//            return temp;
//        }
//
//        temp.roman = intToRoman(temp.value);
//
//        return temp;
//    }
//
//    Roman operator/(const Roman& obj)
//    {
//        Roman temp;
//
//        if (obj.value == 0)
//        {
//            cout << "Division by zero error" << endl;
//            temp.value = 0;
//            temp.roman = "";
//            return temp;
//        }
//
//        temp.value = value / obj.value;
//        temp.roman = intToRoman(temp.value);
//
//        return temp;
//    }
//
//    void display()
//    {
//        cout << roman << endl;
//    }
//};
//
//int main()
//{
//    cout << " I=1\n V=5\n X=10\n L=50\n C=100\n D=500\n M=1000\n";
//
//    Roman r2("XIV");
//    Roman r1("XX");
//
//    r1.display();
//    r2.display();
//
//    Roman r3 = r1 + r2;
//
//    cout << "Addition: " << endl;
//    r3.display();
//
//    Roman r4 = r1 - r2;
//
//    cout << "Subtraction: " << endl;
//    r4.display();
//
//    Roman r5 = r1 / r2;
//
//    cout << "Division: " << endl;
//    r5.display();
//
//    Roman r6 = r1 * r2;
//
//    cout << "Multiplication: " << endl;
//    r6.display();
//
//    cout << "Initial values:\n";
//
//    cout << "r1 = ";
//    r1.display();
//
//    cout << "r2 = ";
//    r2.display();
//
//     PRE INCREMENT
//    ++r1;
//
//    cout << "After pre-increment r1: ";
//    r1.display();
//
//     POST INCREMENT
//    Roman p = r1++;
//
//    cout << "Value at time of post-increment : ";
//    p.display();
//
//    cout << "r1 after post-increment: ";
//    r1.display();
//
//     PRE DECREMENT
//    Roman p1 = --r2;
//
//    cout << "After pre-decrement r2: ";
//    p1.display();
//
//     POST DECREMENT
//    Roman p2 = r2--;
//
//    cout << "r2 after post-decrement: ";
//    r2.display();
//
//    cout << "Value at time of post-decrement : ";
//    p2.display();
//
//    if (r1 == r3)
//        cout << "r1 is equal to r3" << endl;
//
//    if (r1 != r2)
//        cout << "r1 is NOT equal to r2" << endl;
//
//    if (r1 < r2)
//        cout << "r1 is less than r2" << endl;
//
//    if (r2 > r1)
//        cout << "r2 is greater than r1" << endl;
//
//    return 0;
//}