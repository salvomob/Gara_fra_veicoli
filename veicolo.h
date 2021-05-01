#ifndef VEICOLO_H
#define VEICOLO_H

#include<iostream>

class Veicolo{
private:
	int nRuote;
	float pos_in;
	float pos_f;
	float vel;
	float acc;
	
protected:

	float vel_m;
	float acc_m;

public:
	
	Veicolo(){}

	Veicolo(int nRuote) : nRuote(nRuote), pos_in(0.f), pos_f(0.f), vel(0.f),acc(0.f),vel_m(vel_m),acc_m(acc_m){}
	
	int getR(){
		return nRuote;
	}
	
	float getPosI(){
		return pos_in;
	}
	
	float getPosF(){
		return pos_f;
	}
	
	float getVel(){
		return vel;
	}
	
	float getAcc(){
		return acc;
	}
	
	void accelera(){
		if(acc < acc_m && vel+acc < vel_m+0.005f)
			acc = acc + 0.005f;
	}
	
	void decelera(){
		if(acc > 0.005 && vel+acc > 0.005)
			acc = acc - 0.005f;
	}
	
	void setNR(int nRuote){
		this->nRuote = nRuote;
	}
	
	void setVel(float vel){
		this->vel = vel;
	}
	
	void setAcc(float acc){
		this->acc = acc;
	}
	
	void setVelM(float vel_m){
		this->vel_m = vel_m;
	}
	
	void setAccM(float acc_m){
		this->acc_m = acc_m;
	}
	
	void move(){
		float v = this->vel + this->acc;
		float pos = this->pos_f + (this->acc/2) + v;
		this->pos_f = pos;
	}
};
#endif

