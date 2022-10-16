#include <iostream>
int Euclid_Alg(int j,int k) {
    while (j != k){
        if (j > k) {
           j =  j - k;}
        else {
           k = k - j;}
           }
    return j;
    }
int main() {
int N;
std::cin >> N;
char op;
int a,b,c,d;
for (int i =0; i<N ;i++){
std::cin >> op;
std::cin >> a;
std::cin >> b;
std::cin >> c;
std::cin >> d;
if (b==0 || d==0){
    std::cout << "error\n";
}
else {
    switch (op) {
        case '+' : 
          if ((a*d + c *b) % (b *d ) != 0) {
            std::cout << (a*d + c *b) / (b * d) <<" "<< ((a*d + c *b) % (b *d )) / Euclid_Alg((a*d + c *b) % (b *d ),b *d) <<" "<<(b *d) /  Euclid_Alg((a*d + c *b) % (b *d ),b *d)  <<"\n"; }
          else { std::cout << (a*d + c *b) / (b * d) <<" "<< 0 << "\n"; }
        break;
        case '-' :
          if ( (a*d - c *b) != 0) {
           std::cout << (a*d - c *b) / (b * d) <<" "<< ((a*d - c *b) % (b *d ))/ Euclid_Alg((a*d - c *b) % (b *d ),b *d) <<" "<< (b *d)/ Euclid_Alg((a*d - c *b) % (b *d ),b *d) << "\n";}
          else { std::cout << (a*d - c *b) / (b * d) <<" "<< 0 << "\n"; }
        break;
        case '*' :
          if ((a*c ) % (b *d ) != 0) {
         std::cout << (a *c) / (b * d) <<" "<< ( ( a *c) % ( b* d )) /Euclid_Alg((a*c ) % (b *d ),b *d ) <<" "<< (b *d)/Euclid_Alg((a*c ) % (b *d ),b *d) << "\n"; }
          else { std::cout << (a* c) / ( b *d) << " " << 0 <<"\n"; }
        break;
        case '/' : 
          if (c !=0 && (a*d ) % (b *c ) != 0 ) {
             std::cout << (a *d) / (b * c) <<" "<< (( a * d) % ( b* c ))/Euclid_Alg((a*d ) % (b *c ),b *c)<<" "<<(b *c)/Euclid_Alg((a*d ) % (b *c ),b *c)<< "\n";
        }
          else if ( c !=0 && (a*d ) % (b *c ) == 0) {
             std::cout << (a* d) / ( b *c) << " " << 0 <<"\n";
          }
          else { 
             std::cout << "error\n";
          } 
        break;
        default : std::cout << "error\n";
    }
}

}
}
