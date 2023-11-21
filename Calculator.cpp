#include <iostream>
using namespace std;

int main() {
    float x, y, res;
    char op;

	cout << "Calculator" << endl;
    cout << "Write your operation: ";
    cin >> x >> op >> y;
	
    switch(op)
	{
		case '+':
			res = x + y;
			break;
		case '-':
			res = x - y;
			break;
		case '*':
		case 'x':
			res = x * y;
			break;
		case '/':
			if(y != 0)
                res = x / y;
			else cout << "Cannot divide by 0";
			break;
		default:
			cout << "Invalid operation" << endl;
            return 1;
			break;
	}
	cout << x << " " << op << " " << y << " = " << res << endl;
	return 0;
}
