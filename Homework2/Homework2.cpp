

#include <iostream>
using namespace std;

int main()
{
    //-1
    double  money1;
    cout << "Hello,print your summ\n";
    cin >> money1;
    double  money2 = money1 / 41.37;
    double  money3 = money1 / 45;
    double  money4 = money1 / 3481960;
    cout << "UAH:\n" << money1<<"\n" << "USD:\n" << money2<<"\n" << "EUR:\n" << money3<<"\n" << "BIT:" << money4<<"\n";
    //-2
    double kilometer;
    cout << "Hello,print your distance\n";
    cin >> kilometer;
    double  land = kilometer / 4.5;
    double  sea = kilometer / 1852;
    cout << "Kilometers:\n" << kilometer << "\n" << "In land:\n" << land << "\n" << "In sea:\n" << sea << "\n";
    //-3
    int a = 5;
    int b = 6;
    int c = b;
    b = a;
    cout << c << b << "\n";
    int d = 7;
    int e = 8;
    e = d;
    d = e;
    cout << e << d << "\n";
    //-4
    // Обьяснение: если мы разложим число на сотни десятки и единицы то можно будет поменять десятки
    // 1- тип int будет переводить в целое число без округления значит чтобы узнать сотню надо число поделить на сто 456/100=4(только если тип int)
    // 2- чтобы узнать десятки на нужно будет двухзначное число а чтобы это узнать нужно отнять сотни и остануться только десятки и единицы 456-4*100=56
    // 3- делаем также как с сотнями 56/10=5
    // 4- меняем десятки (например другое число 123 и мы таким же путём вычеслили десятки) (456-(5*10))+2*10=426
    int num1 ;
    int num2 ;
    cout << "Print first number:";
    cin >> num1;
    cout << "Print second number:";
    cin >> num2;
    int num3 = num1 / 100;
    int num4 = num1 - num3 * 100;
    int num5 = num4 / 10;
    int num6 = num2 / 100;
    int num7 = num2 - num6 * 100;
    int num8 = num7 / 10;
    int result = (num2 - (num8 * 10)) + num5 * 10;
    int result2 = (num1 - (num5 * 10)) + num8 * 10;

    cout <<"The first num:" <<num1<<","<<"The second num:"<<num2<<"\n";
    cout << "The result:" << result << "," << result2 << "\n";

    //-5
    int number;
    cout << "Print number:";
    cin >> number;
    int first = number / 1000;
    int second = (number-(first*1000))/100;
    int third = (number - (first * 1000)-(second*100)) / 10;
    int fourth = (number - (first * 1000) - (second * 100) - (third * 10));
    int firstresult = first+third;
    int secondresult = fourth - second;
    cout << "Result:" << firstresult<<"," << secondresult<<"\n";

    //-6
    int numdel;
    cout << "Print number:";
    cin >> numdel;
    int firstnum = numdel / 100;
    int secondnum = (numdel - (firstnum*100)) / 10;
    int thirdnum = (numdel - (firstnum * 100) - (secondnum * 10));
    int deleteop = firstnum * 10 + thirdnum;
    cout << "Result:" << deleteop <<  "\n";
    
    //-7
    double savings;
    cout << "Print your savings:";
    cin >> savings;
    double procent;
    cout << "Print your %:";
    cin >> procent;
    double summ = ((procent / 12) * savings) / 100 + savings;
    cout << "A month:\n" << summ << "\n";

    //-8
    double fynts;
    cout << "Print fynts:\n";
    cin >> fynts;
    double kilograms = fynts * 0.4059;
    cout << "Kilograms:\n" << kilograms << "\n";
    double kilog;
    cout << "Print kilograms:\n";
    cin >> kilog;
    double fynt = kilog / 0.4059;
    cout << "Fynts:\n" <<fynt  << "\n";

   //-9
    int numrev;
    cout << "Print number:\n";
    cin >> numrev;
    int rev1 = numrev / 100;
    int rev2 = (numrev - rev1*100) / 10;
    int rev3 = (numrev - (rev1 * 100 + rev2 * 10));
    int reverse = rev3 * 100 + rev2 * 10 + rev1;
    cout << reverse << "\n";





    

   


}


