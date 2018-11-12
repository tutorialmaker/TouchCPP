#include <iostream>

using namespace std;

/*

  構造体として定義されたMonsterをクラスとして再定義せよ.
  setStatusにセッターとして適切なコードを記せ.
  また, 以下の条件を満たすTITLE(title)とSEPをマクロで定義せよ.

  - TITLE("STATUS")は"*@*@*@*STATUS*@*@*@*"に置換する.
  - SEPは"____________________"に置換する.

  定義したTITLE(title)とSEPを用いて40行目および45行目を書き換えよ.

  MonsterのsetStatusおよびgetStatusを用いたサンプルをmain()に示せ.

*/

struct Monster {
  void setStatus(string name, int hp, int atk, int def);
  void getStatus();

private:
  string name;
  int hp;
  int atk;
  int def;
};

void Monster::setStatus(string name, int hp, int atk, int def) {
/*

  セッターとして適切なコードを記せ.

*/
}

void Monster::getStatus() {
  cout << "*@*@*@*STATUS*@*@*@*" << endl
  << "NAME : " << this->name << endl
  << "HP : " << this->hp << endl
  << "ATK : " << this->atk << endl
  << "DEF : " << this->def << endl
  << "____________________" << endl;
}

int main() {
/*

  MonsterのsetStatusおよびgetStatusを用いたサンプルを示せ.

*/
  return 0;
}
