#pragma once
class Singleton
{
public:
	int getX();
	static Singleton& Instance();
	
private:
	int x;
	Singleton() ;
	~Singleton();
	Singleton(Singleton const&) =delete;
	Singleton& operator=(Singleton const&)=delete ;
};

