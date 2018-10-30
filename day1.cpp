#include <iostream>
#include <string>
using namespace std;

int main() {
  const char* hello = "Hello";
  char brank = ' ';
  char world[] = "World";

  /*

    helloは文字列リテラル, brankは文字リテラル, worldは文字リテラルの配列である.
    それぞれの変数が格納されている記憶領域の名称を出力ストリームを用いて出力せよ.
    またどの変数が書き換え不可能か, 出力ストリームを用いて変数の名称を出力せよ.

  */

  cout << hello << brank << world << '!' << endl;

  string whereHello = "[記憶領域の名称]",
         whereBrank = "[記憶領域の名称]",
         whereWorld = "[記憶領域の名称]",
         readOnly = "[変数の名称]";

  cout << "helloの記憶領域は" << whereHello << "である." << endl
  << "brankの記憶領域は" << whereBrank << "である." << endl
  << "worldの記憶領域は" <<  whereWorld << "である." << endl
  << "ゆえに" << readOnly << "は書き換え不可能である." << endl;

  return 0;
}
