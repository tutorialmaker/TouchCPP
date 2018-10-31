#include <iostream>
#include <cmath>
using namespace std;

int main() {
  /*

    以下の変数に文脈上適切な数値を格納せよ.
    octet

    以下の変数に文脈上適切な関数を用いて値を格納せよ.
    sizeOfShort, rangeOfShort, sizeOfInt, rangeOfInt, sizeOfLong, rangeOfLong

  */

  int8_t octet;
  short sizeOfShort;
  int rangeOfShort;

  cout << endl
  << "shortのサイズは" << sizeOfShort << "バイトである." << endl
  << "つまり" << sizeOfShort * octet << "ビットであり, 正負合わせて"
  << rangeOfShort << "個の整数を扱える." << endl;

  short sizeOfInt;
  double rangeOfInt;

  cout << endl
  << "intのサイズは" << sizeOfInt << "バイトである." << endl
  << "つまり" << sizeOfInt * octet << "ビットであり, 正負合わせて"
  << rangeOfInt << "個の整数を扱える." << endl;

  short sizeOfLong;
  double rangeOfLong;

  cout << endl
  << "longのサイズは" << sizeOfLong << "バイトである." << endl
  << "つまり" << sizeOfLong * octet << "ビットであり, 正負合わせて"
  << rangeOfLong << "個の整数を扱える." << endl;

  return 0;
}
