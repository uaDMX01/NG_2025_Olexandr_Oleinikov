#include <iostream>
using namespace std;

int main() {
    const char* maze[] = {
        "**********",
        "         *",
        " ******* *",
        " *     * *",
        " * *** * *",
        " * * * * *",
        " * *   * *",
        " * ***** *",
        " *       *",
        " *********"
    };

    int height = sizeof(maze) / sizeof(maze[0]);

    for (int i = 0; i < height; ++i) {
        cout << maze[i] << endl;
    }

    return 0;
}
