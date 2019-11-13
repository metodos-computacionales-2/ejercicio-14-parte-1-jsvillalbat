#include<iostream>
#include<cmath>

double funcion(double y, double t)
{
    return sin(t);
}


double euler(double y, double t,double h )
{
    return y + h*funcion(y,t);

}

int main()
{
    double y0 = 0.0,t0 = 0.0, h = 0.001;
    for(int i =0;i<100;i++)
    {
        std::cout<<t0<<"  "<<euler(y0,t0,h)<<std::endl;
        t0+=h;
        y0 = euler(y0,t0,h);
    }

   return 0;
}