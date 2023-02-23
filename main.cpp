/*  Sonigo
    Joachim
    3Ans
    Exercise: 2
    Seance : 4
    Version : 4
*/
#include <iostream>
#include <cmath>
using namespace std;
//-----------------------------------
// class point
//-----------------------------------
class point{
protected:
    double x;
    double y;
public:
    //methods
    point();
    point(double, double);
    void afficher(string);
    double La_distance(const point &);
};

//-----------------------------------
// class point_3D
//-----------------------------------
class point_3D:public point{

    double z;
public:
    //methods
    point_3D();
    point_3D(double, double,double);
    void afficher(string);
    double La_distance(const point_3D &);
};

//-----------------------------------
// class couleur
//-----------------------------------
class couleur{
protected:
    string coul;

public:
    //methods
    couleur();
    couleur(string);
    void afficher();

};

//-----------------------------------
// class point_couleur
//-----------------------------------
class point_couleur:public point,public couleur{

public:
    //methods
    point_couleur();
    point_couleur(double, double,string);
    void   afficher(string);
    double La_distance(const point_couleur &);

};

//-----------------------------------
//methodes de la classe point
//-----------------------------------
point::point() {x=0;y=0;}
point:: point(double a, double b):x(a),y(b){}


void point:: afficher(string s){
    cout<<"--------- "<<s<<"----------\n"<<endl; cout<<"x="<<x<<endl; cout<<"y="<<y<<endl;
}

double point::La_distance(const point &p){
    return (sqrt(pow(x-p.x, 2)+pow(y-p.y, 2)));
}
//-----------------------------------
//methodes de la classe point_3D
//-----------------------------------
point_3D::point_3D() {x=0;y=0;z=0;}
point_3D:: point_3D(double a, double b, double c):point(a,b),z(c){}


void point_3D:: afficher(string s){
    point::afficher(s); cout<<"z="<<z<<endl;
}

double point_3D::La_distance(const point_3D &p){
    return (sqrt(pow(point::La_distance(p), 2)+pow(z-p.z, 2)));
}

//-----------------------------------
//methodes de la classe couleur
//-----------------------------------
couleur::couleur(){coul="";}
couleur:: couleur(string c):coul(c){}

void couleur:: afficher(){
    cout<<"- couleur : " << coul <<endl ;
}

//-----------------------------------
//methodes de la classe point_couleur
//-----------------------------------
point_couleur:: point_couleur():point(), couleur(){}
point_couleur:: point_couleur(double a, double b, string c):point(a,b), couleur(c){}

void point_couleur:: afficher(string s){
    point::afficher(s);
    couleur::afficher();
}

double point_couleur::La_distance(const point_couleur &p){
    return (point::La_distance(p));

}
//-----------------------------------
//programme principal
//-----------------------------------
int main(){
    /*cout<<"---------------------------"<<endl;
    cout<<"Test de la classe point"<<endl;
    cout<<"---------------------------"<<endl;
    point p1,p2(1,1);
    p1.afficher("p1");
    p2.afficher("p2");
     double d = p1.La_distance(p2);
    cout<<"---------------------------"<<endl;
    cout<<"La distance entre p1 et p2 est : "<<d<<endl;
    cout<<"---------------------------"<<endl;

   cout<<"---------------------------"<<endl;
    cout<<"Test de la classe point_3D"<<endl;
    cout<<"---------------------------"<<endl;
    point_3D pp1,pp2(1,1,0);
    pp1.afficher("pp1");
    pp2.afficher("pp2");
     double d = pp1.La_distance(pp2);
    cout<<"---------------------------"<<endl;
    cout<<"La distance entre pp1 et pp2 est : "<<d<<endl;
    cout<<"---------------------------"<<endl;

    cout<<"---------------------------"<<endl;
    cout<<"Test de la classe couleur"<<endl;
    cout<<"---------------------------"<<endl;
    couleur c1, c2("pink");
    c1.afficher();
    c2.afficher();*/
    cout<<"---------------------------"<<endl;
    cout<<"Test de la classe point_couleur"<<endl;
    cout<<"---------------------------"<<endl;
    point_couleur pc1,pc2(1,1,"red");
    pc1.afficher("pc1");
    pc2.afficher("pc2");
    double d = pc1.La_distance(pc2);
    cout<<"---------------------------"<<endl;
    cout<<"La distance entre pc1 et pc2 est : "<<d<<endl;
    cout<<"---------------------------"<<endl;
    return 0;

}
