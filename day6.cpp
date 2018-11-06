#include <iostream>
using namespace std;


void callByValue(int i) {
  cout << &i << endl;
}

void callByPointer(int* i) {
  cout << i << endl;
}

void callByReference(const int& i) {
  cout << &i << endl;
 }

int main() {
  int code[] = {2, 5, 0, 1};

  /*
    文字列中の[空欄1]から[空欄3]を適切な語句に置換せよ.
  */

  cout << endl
  << "callByValueでは, 仮引数は実引数の[空欄1]で初期化される." << endl
  << "実引数のアドレスは" << &code[0] << "であり, " << endl
  << "仮引数のアドレスは" << endl;

  /*
    文脈上適切なコードを記せ.
  */

  cout << "であった." << endl;

  cout << endl
  << "callByPointerでは, 仮引数は実引数の[空欄2]で初期化される." << endl
  << "実引数のアドレスは" << &code[0] << "であり, " << endl
  << "仮引数のアドレスは" << endl;

  /*
    文脈上適切なコードを記せ.
  */

  cout << "であった." << endl;

  cout << endl
  << "callByReferenceでは, 仮引数は実引数の[空欄3]で初期化される." << endl
  << "実引数のアドレスは" << &code[0] << "であり, " << endl
  << "仮引数のアドレスは" << endl;

  /*
    文脈上適切なコードを記せ.
  */

  cout << "であった." << endl;

  cout << endl
  << "次に, 引数に与えられたintによる配列の全要素を"
  << "一行ごとに出力する関数dispAnyを定義し, 実行する." << endl;

  /*

    新たにdispAnyを定義し, 文脈上適切なコードを記せ.

  */


  return 0;
}
