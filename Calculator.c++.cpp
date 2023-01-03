#include <iostream>
#include <cmath>
using namespace std;
class Point {
private:
    int x, y;
public :
    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }

    int getX() { return x; }

    int getY() { return y; }
};
class calculator{
	public:
		void mohasebe1(int, int);	
		void mohasebe2(double, double);
		void mohasebe3(float, float);
		int solve(int, int, int);
		double getDistance(Point *p1, Point *p2) {
      	  return sqrt(pow(p1->getX() - p2->getX(), 2) + pow(p1->getY() - p2->getY(), 2));
    }

};

	void calculator::mohasebe1(int a, int b){
		int zarb=0, jam=0, taghsim=0, tafrigh=0;
		zarb = a*b;
		cout << zarb << endl;
		jam = a+b;
		cout << jam << endl;
		taghsim = a/b;
		cout << taghsim << endl;
		tafrigh = a-b;
		cout << tafrigh << endl;
	}
	void calculator::mohasebe2(double a, double b){
		double zarb=0.0, jam=0.0, taghsim=0.0, tafrigh=0.0;
		zarb = a*b;
		cout << zarb;
		jam = a+b;
		cout << jam;
		taghsim = a/b;
		cout << taghsim;
		tafrigh = a-b;
		cout << tafrigh;
	}
	void calculator::mohasebe3(float a, float b){
		double zarb=0.0, jam=0.0, taghsim=0.0, tafrigh=0.0;
		zarb = a*b;
		cout << zarb;
		jam = a+b;
		cout << jam;
		taghsim = a/b;
		cout << taghsim;
		tafrigh = a-b;
		cout << tafrigh;
	}
	int calculator::solve(int m, int n, int k){
		int delta, x1, x2;
		delta = (n*n)-(4*m*k);
		if(delta>0){
			x1 = ((-n) + ((int)sqrt(delta))) / (2*m);
			x2 = ((-n) - ((int)sqrt(delta))) / (2*m);
			return x1, x2;
		}
		if(delta==0){
			x1 = ((-n) / (2*m));
			return x1;
		}
		if(delta<0){
			cout << "nothing!";
		}
	}

	int main(){
		int a, b, m, n, k, p1, p2;
		calculator c;
		cin >> a >> b;
		cout <<	c.mohasebe1(a, b);
		cin >> m >> n >> k;
		cout << c.solve(m, n, k) << endl;
		point *p1 = point(0,0);
		point *p2 = point(10,10);
		cout << c.getdistance(p1, p2);
	}
