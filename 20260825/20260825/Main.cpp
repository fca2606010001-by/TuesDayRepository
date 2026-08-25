#include <iostream>
#include <string>
using namespace std;

class Dog {
public:
    string Name;

    void ShowProfile() {
        cout << "名前：" << Name << endl;
    }
};

int main() {
    // Dogクラスをオブジェクト化
    Dog dog;

    // Nameで名前を設定
    dog.Name = "マルチーズ";

    // ShowProfileメソッドで名前を表示
    dog.ShowProfile();

    return 0;
}