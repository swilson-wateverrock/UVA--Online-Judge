#include <bits/stdc++.h>
using namespace std;
 
int main (){
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
    int test;
 
    while (cin >> test) {
 
        if (test == -1)
        return 0;
 
        char solution [10000], guess [10000];
        cin >> solution;
        cin >> guess;
        int length = strlen (solution);
        list <char> l (&solution [0], &solution [length]);
        
        for(int i = 0; i < length; i++){
        	l.get_allocator(i);
		}
		puts("");
 
        int flag = 0;
        length = strlen (guess);
        for (int i = 0; i < length; i++) {
            if (!l.empty()) {
                int size = l.size ();
                l.remove (guess [i]);
                if (size == l.size ())
                flag++;
            }
            else
            break;
        }
 
        if (l.empty () && flag < 7) {
            cout << "Round " << test << endl;
            cout << "You win." << endl;
        }
        else if (!l.empty () && flag < 7) {
            cout << "Round " << test << endl;
            cout << "You chickened out." << endl;
        }
        else {
            cout << "Round " << test << endl;
            cout << "You lose." << endl;
        }
    }
 
    return 0;
}
