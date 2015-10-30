# include <iostream>
using namespace std;
// Hausaufgabe 1 Patrick Laermann 30.10.15
int main(){
  int N;
  int a=0;
  int b=1;
  int f;
  cout << "N=";
  cin >> N;
  if (N<2)
    cout << "result = " << N << endl;
  if (N>=2){
      for(int i=0; i<N-1; i++){
	f = a + b;
	a=b;
	b=f;
	}
     cout << "result = " << f << endl; 
  }
        
 
  return 0;
}