#include "Simple_window.h"
#include "Graph.h"
#include "MyClasses.h"
#include "GUI.h"
#include "MyWindow.h"
#include "std_lib_facilities.h"

using namespace Graph_lib;

int main() {
    Button_window my{Point{20, 20}, 1000, 800, "cool"};

    my.wait_for_button();




}



/*
int main ()
try {
    Lines_window win(Point{100, 100}, 600, 400, "lines");
    return gui_main();
} catch (exception &e)
{
    cerr << "exception: " << e.what() << "\n";
    return 1;
} catch (...) {
    cout << "some exception" << "\n";
    return 2;
}
*/
