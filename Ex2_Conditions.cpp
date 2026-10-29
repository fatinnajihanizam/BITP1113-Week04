#include <iostream>
using namespace std;

int main()
{
    int battery = 15;   // test value for battery (0-100)
    int charging = 0;   // test value for charging (1: yes, 0: no)

    // Print the value (1 or 0) of these five conditions, one per line, each with a label:
    
    // 1. battery < 20 and battery < 20 && !charging
    cout << ((battery < 20) && (battery < 20 && !charging)) << endl; // Or follow exact prompt requirement below:
    
    // Let's write the 5 required conditions precisely as specified under "YOUR PROGRAM MUST":
    
    // Condition 1: battery < 20 and battery < 20 && !charging
    cout << ((battery < 20) && (battery < 20 && !charging)) << endl; // battery saver condition
    
    // Condition 2: battery == 100 || charging
    cout << ((battery == 100) || (charging)) << endl;                 // battery == 100 || charging
    
    // Condition 3: battery >= 0 && battery <= 100
    cout << ((battery >= 0) && (battery <= 100)) << endl;           // battery >= 0 && battery <= 100
    
    // Condition 4: 0 <= battery <= 100 (keep it, then explain it)
    // Note: In C++, "0 <= battery <= 100" evaluates left-to-right as (0 <= battery) first (yielding 0 or 1), 
    // and then compares that boolean result with 100. Always join two comparisons with &&!
    cout << ((0 <= battery) && (battery <= 100)) << endl;           // correct range formulation

    return 0;
}