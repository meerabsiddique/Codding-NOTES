#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size n: ";
    cin >> n;

    cout << "\n1. Solid Square\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) cout << "*";
        cout << endl;
    }
    cout << endl;
    cout << endl;
    /*
    Output for n=4:
    ****
    ****
    ****
    ****
    */

    cout << "\n2. Hollow Square\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    /*
    Output:
    ****
    *  *
    *  *
    ****
    */

    cout << "\n3. Right-Angled Triangle (Solid)\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++) cout << "*";
        cout << endl;
    }
    cout << endl;
    cout << endl;
    /*
    Output:
    *
    **
    ***
    ****
    */

    cout << "\n4. Right-Angled Triangle (Hollow)\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i || i == n) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    /*
    Output:
    *
    **
    * *
    ****
    */

    cout << "\n5. Pyramid (Solid)\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++)
            cout << "*";
        cout << endl;
    }
    cout << endl;
    cout << endl;
    /*
    Output:
       *
      ***
     *****
    *******
    */

    cout << "\n6. Pyramid (Hollow)\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    /*
    Output:
       *
      * *
     *   *
    *******
    */


    cout << endl;
    cout << endl;
    //opposute triangle

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";

        }
        /* *******
          *****
           ***
            **/

        cout << endl;
        cout << endl;
        cout << "\n7. Diamond (Solid)\n";
        // Upper pyramid
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n - i; j++)
                cout << " ";
            for (int j = 1; j <= 2 * i - 1; j++)
                cout << "*";
            cout << endl;
        }
        // Lower inverted pyramid
        for (int i = n - 1; i >= 1; i--)
        {
            for (int j = 1; j <= n - i; j++)
                cout << " ";
            for (int j = 1; j <= 2 * i - 1; j++)
                cout << "*";
            cout << endl;
        }
        cout << endl;
        cout << endl;
        /*
        Output:
           *
          ***
         *****
        *******
         *****
          ***
           *
        */

        cout << "\n8. Diamond (Hollow)\n";
        // Upper half
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n - i; j++)
                cout << " ";
            for (int j = 1; j <= 2 * i - 1; j++) {
                if (j == 1 || j == 2 * i - 1)
                    cout << "*";
                else cout << " ";
            }
            cout << endl;
        }
        // Lower half
        for (int i = n - 1; i >= 1; i--)
        {
            for (int j = 1; j <= n - i; j++)
                cout << " ";
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                if (j == 1 || j == 2 * i - 1)
                    cout << "*";
                else cout << " ";
            }
            cout << endl;
        }
        cout << endl;
        cout << endl;
        /*
        Output:
           *
          * *
         *   *
        *     *
         *   *
          * *
           *
        */
        cout << endl;
        cout << endl;
        cout << "\n9. Upper Right-Angled Triangle\n";
        for (int i = n; i >= 1; i--)
        {
            for (int j = 1; j <= i; j++)
                cout << "*";
            cout << endl;
        }
        cout << endl;
        cout << endl;
        /*
        Output:
        ****
        ***
        **
        *
        */
        cout << endl;
        cout << endl;
        cout << "\n10. Lower Right-Angled Triangle\n";
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++) cout << "*";
            cout << endl;
        }
        /*
        Output:
        *
        **
        ***
        ****
        */



        cout << endl;
        cout << endl;
        //Heart shape
        for (int i = 1; i <= n; i++)
        {

            for (int j = 1; j <= n - i; j++)
                cout << " ";
            for (int j = 1; j <= 2 * i - 1; j++)
                cout << "*";

            for (int j = 1; j <= n - i; j++)
                cout << "  ";
            for (int j = 1; j <= 2 * i - 1; j++)
                cout << "*";
            cout << endl;
        }

        for (int i = 2 * n; i >= 1; i--)
        {
            for (int j = 1; j <= 2 * n - i; j++)
                cout << " ";
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                cout << "*";
            }
            cout << endl;
        }







        int z;
        cout << "Enter size n: ";
        cin >> z;
        cout << endl;
        cout << endl;
        cout << "\n1. Row-wise Incremental Pattern\n";
        for (int i = 1; i <= z; i++)
        {
            for (int j = 1; j <= z; j++)
            {
                cout << (i - 1) * z + j << "\t";
            }
            cout << endl;
        }
        /*
        Output:
        1   2   3   4
        5   6   7   8
        9  10  11  12
        13 14  15  16
        */
        cout << endl;
        cout << endl;
        cout << "\n2. Column-wise Incremental Pattern\n";
        for (int i = 1; i <= z; i++) {
            for (int j = 1; j <= z; j++) {
                cout << i + z * (j - 1) << "\t";
            }
            cout << endl;
        }
        /*
        Output:
        1   5   9   13
        2   6  10   14
        3   7  11   15
        4   8  12   16
        */
        cout << endl;
        cout << endl;
        cout << "\n3. Column-wise Zig-Zag Pattern\n";
        for (int i = 1; i <= z; i++) {
            for (int j = 1; j <= z; j++) {
                if (j % 2 == 1)
                    cout << i + z * (j - 1) << "\t";
                else
                    cout << j * (z - i) + 1 << "\t";
            }
            cout << endl;
        }
        cout << endl;
        cout << endl;
        /*
        Output:
        1   8   9   16
        2   7  10   15
        3   6  11   14
        4   5  12   13
        */

        cout << endl;
        cout << endl;
        cout << "\n4. Row-wise Snake Pattern\n";
        for (int i = 1; i <= z; i++) {
            for (int j = 1; j <= z; j++) {
                if (i % 2 == 1)
                    cout << (i - 1) * z + j << "\t";
                else
                    cout << i * (z - j) + 1 << "\t";
            }
            cout << endl;

            /*
            Output:
            1   2   3   4
            8   7   6   5
            9  10  11  12
            16 15  14 13
            */
        }
    }
}