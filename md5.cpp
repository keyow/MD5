#include "md5.h"

using namespace std;

void MD5_starter(string line) {
    MD5_context::LoadString(line);
    MD5_context::Align();
    MD5_context::AddLineLength(line.length());
    MD5_context::MainLoop();

    cout << "Hash: " << hex;
    for (int i = 0; i < 4; i++) {
        cout << setfill('0') << setw(8) << MD5_context::result[i] << endl;
    }

    MD5_context::Reset();
}

int main()
{
    string message;
    char answer = ' ';
    cout << "Message: \t";
    cin >> answer;

    cout << endl;
    MD5_starter(message);

    system("pause");
    return 0;
}
