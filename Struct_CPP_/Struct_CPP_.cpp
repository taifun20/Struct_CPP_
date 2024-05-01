
#include <iostream>
#include <vector>


//	keyword struct numeStruct
//	{ corpul structurii }
struct Punct
{
	int idStruct = 0;
	int x = 0;
	int y = 0;

	void Coords()
	{
		std::cout << "	ID Struct: " << idStruct << std::endl << "	Coord x: " << x << std::endl << "	Coord y: " << y << std::endl << std::endl;
	}

	void MoveCoords(int LV_Switch, bool LV_bUp, bool LV_bRight)
	{
		if (LV_Switch == 1) { 
			if (LV_bUp == true) {// Move Up
				y++;
			}
			else if (LV_bUp == false) {// Move Down
				if (y > 0) {
					y--;
				}
			}
		}
		else if (LV_Switch == 2) {
			if (LV_bRight == true) {// Move Right
				x++;
			}
			else if (LV_bRight == false) {// Move Left
				if (x > 0) {
					x--;
				}
			}
		}

	}
};

int main()
{

	//int x1 = 5;
	//int y1 = 25;
	//std::cout << "Coordonatele lui P1 sunt " << x1 << " " << y1 << std::endl;

	Punct p1;// instantiez un p1 de tip Punct

	p1.idStruct = 1;
	p1.x = 5;
	p1.y = 25;
	p1.Coords();

	Punct p2;// instantiez un p2 de tip Punct

	p2.idStruct = 2;
	p2.x = 45;
	p2.y = 32;
	p2.Coords();

	Punct p3;// instantiez un p3 de tip Punct
	p3.idStruct = 3;
	p3.Coords();

	std::vector<Punct> Coordonate;
	Coordonate.push_back(p1);
	Coordonate.push_back(p2);
	Coordonate.push_back(p3);

}

// Tema 
// CONTACTE
// 1.Afisare NUME | NUMAR
// 2.Stergere/Inregistrare

// CAR LOT ?