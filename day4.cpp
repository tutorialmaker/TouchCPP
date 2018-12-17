#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {
  /*

    "[空欄1]"から"[空欄3]"を文脈上適切な関数や演算子などを用いて数値に置換せよ.

  */

  string tail = "ella";
  string heads[] = {"mozzar", "cinder", "salmon"};
  vector<string> words;

  cout << "headsの先頭のアドレスはアドレス演算子を用いて得られ" << endl
  << "[空欄1]" << endl
  << "であった." << endl
  << "イテレータを用いても得ることができ, 同様に" << endl
  << "[空欄2]" << endl
  << "であった." << endl;

  cout << endl;

  cout << "イテレータを用いてheadsの各要素を出力すると, " << endl;

  /*
    文脈上適切なコードを記せ.
  */

  cout << "範囲for文を用いれば, より簡潔にheadsの各要素を出力できる." << endl;

  /*
    文脈上適切なコードを記せ.
  */

  cout << endl;

  cout << "wordsはstringのvectorであり, 現在"
  << "[空欄3]"
  << "個の要素を持つ." << endl
  << "headsの各要素の末尾にtailを追加してwordsに追加すると, " << endl;

  /*
    文脈上適切なコードを記せ.
  */

  cout << "結果, wordsは" << "[空欄3]" << "個の要素を持ち, "
  << "範囲for文を用いてwordsの各要素を出力すると, " << endl;

  /*
    文脈上適切なコードを記せ.
  */

  return 0;
}
