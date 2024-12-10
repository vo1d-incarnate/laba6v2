#include <string>

using namespace std;

string center(const string& text, int width) {
    int padding = width - text.size();
    int padLeft = padding / 2;
    int padRight = padding - padLeft;
    return (string(padLeft, ' ') + text + string(padRight, ' '));
}