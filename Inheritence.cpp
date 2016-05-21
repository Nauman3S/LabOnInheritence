// Inheritence.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>

using namespace std;
class MusicianBand{
protected:
	int count;
	virtual int getTotalCount()=0;
};

class MetalBand:public MusicianBand{
private:
	int pyroCount;
	int memberCount;
	int total;

public:
	
	void addPyro();
	MetalBand(){
	count=0;
	pyroCount=0;
	memberCount=0;
	total=0;
	}
	void removePyro();
	void addBandMember();
	void removeMember();
	//int checkMembersCount();
	int getMembersCount();
	int getPyroCount();
	int getTotalCount();
};

void MetalBand::addPyro(){
	total++;
	pyroCount++;
	count=total;
}
void MetalBand::removePyro(){
		total--;
	pyroCount--;
	count=total;
}
void MetalBand::addBandMember(){
	total++;
	memberCount++;
	count=total;
}
void MetalBand::removeMember(){
	total--;
	memberCount--;
	count=total;
}
int MetalBand::getMembersCount(){
	return memberCount;
}
int MetalBand::getPyroCount(){
	return pyroCount;
	}
int MetalBand::getTotalCount(){
	return count;
}


class Symphony:public MusicianBand{
	private:
		int conductorCount;
		int memberCount;
		int total;
	public:
		Symphony();
	void addConductor();
	void addBandMember();
	void removeConductor();
	void removeBandMember();
	//int getMembersCount();
	int getConductorCount();
	int getMembersCount();
	int getTotalCount();
};
 Symphony::Symphony(){
			count=0;
			conductorCount=0;
			memberCount=0;
			total=0;
}
void Symphony::removeConductor(){
	this->conductorCount-=1;
	this->total-=1;
	count--;
}
void Symphony::removeBandMember(){
	this->memberCount-=1;
	this->total-=1;
	count--;
}

void Symphony::addConductor(){
	this->conductorCount+=1;
	this->total+=1;
	count=total;
}
void Symphony::addBandMember(){
	this->memberCount+=1;
	this->total+=1;
	count=total;
}
	
int Symphony::getTotalCount(){
	return count;
}
int Symphony::getConductorCount(){
	return this->conductorCount;
}
int Symphony::getMembersCount(){
	return this->memberCount;
}


int _tmain(int argc, _TCHAR* argv[])
{
	Symphony ss;
	MetalBand mm;
	
	ss.addBandMember();
	ss.addConductor();
	
	cout<<"\nTotal Count Symphony"<<ss.getTotalCount()<<endl;

	ss.removeBandMember();
	cout<<"\nTotal Count Symphony"<<ss.getTotalCount()<<endl;

	mm.addBandMember();
	mm.addPyro();

	cout<<"\nTotal Count MetalBand"<<mm.getTotalCount()<<endl;

	int a;
	cin >>a;
	return 0;
}

