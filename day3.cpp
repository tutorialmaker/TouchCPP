#include <iostream>
using namespace std;


int main() {
  /*

    "[空欄1]"から"[空欄8]"を文脈上適切な関数や演算子などを用いて数値に置換せよ.

  */
  double coords[] = {35.699389, 139.741389};

  cout << "double coords[] = {35.699389, 139.741389};" << endl;

  for (double* p=coords; p<&coords[2]; p++) {
    cout << "coordsの" << "[空欄1]" << "番目の要素は" << "[空欄2]" << "であり, "
    << "アドレスは" << "[空欄3]" << "である." << endl;
  }


  double N = 35.918069,
         E = 139.910255; // :-)

  cout << endl;
  cout << "double N = 35.918069, " << endl
       << "       E = 139.910255;" << endl;

  double* p_N = &N,
        * p_E = &E;

  cout << "Nの値は" << "[空欄4]" << "であり, "
  << "アドレスは" << "[空欄5]" << "である." << endl;
  cout << "Eの値は" << "[空欄6]" << "であり, "
  << "アドレスは" << "[空欄7]" << "である." << endl;

  long long subOfPointer = p_N - p_E;

  cout << endl;
  cout << "NのアドレスからEのアドレスを引いた値は"
  << subOfPointer << "であり, すなわちEのポインタ変数に"
  << subOfPointer << "を足したものに関節演算子を適用すれば, "
  << "Nの値を参照するはずである." << endl
  << "実際に実行した結果を以下に示す." << endl
  << "[空欄8]" << endl;

  return 0;
}
