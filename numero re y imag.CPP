#include <iostream.h>
#include <conio.h>

class complejo{
   friend double suma_real(complejo &a, complejo &b);
   friend double suma_imag(complejo &a, complejo &b);

   private:
       double real, imag;
   public:
       complejo(double=0, double=0);
       void mostrar();
};
 complejo::complejo(double r, double i){
   real=r;
   imag=i;
}

double suma_real(complejo &a, complejo &b){
  return (a.real+b.real);
}

double suma_imag(complejo &a, complejo &b){
  return (a.imag+b.imag);
}

void complejo::mostrar(){
  cout<<real<<",  "<<imag<<"i"<<endl;
}

int main(){
    complejo n1(3.2, 5.6), n2(8.1, 1.4);
    double re, im;

    n1.mostrar();
    n2.mostrar();

    re=suma_real(n1, n2);
    im=suma_imag(n1, n2);

    complejo res;(re, im);
    cout<<" la suma de los numero complejos es:";
    res.mostrar();

    getch();
    return 0;
}
