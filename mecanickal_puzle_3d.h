#pragma once
#include <iostream>
#include <string>
using namespace std;



class mecanickal_puzle_3d
{
protected:
	int day;
	string name;
private:


	int how_many_element;
	string type;
	int guarantee_in_month;
	string material;


public:
	mecanickal_puzle_3d()
	{

	}
	int year;
	string owner;
	mecanickal_puzle_3d(int v_how_many_element, string v_type, int v_guarantee_in_month, string v_material, int v_day, string v_name, int v_year, string v_owner)
	{
		how_many_element = v_how_many_element;
		type = v_type;
		guarantee_in_month = v_guarantee_in_month;
		material = v_material;
		day = v_day;
		name = v_name;
		year = v_year;
		owner = v_owner;

	}




	void Inputhow_many_element();
	void outputhow_many_element();
	void Inputguarantee_in_month();
	void outputguarantee_in_month();
	void Inputmaterial();
	void outputmaterial();
	void Inputtype();
	void outputtype();
	void Inputday();
	void outputday();
	void Inputname();
	void outputname();
	void Inputyear();
	void outputyear();
	void Inputowner();
	void outputowner();
	~mecanickal_puzle_3d()
	{

	}
};
