#include "Vasav.h"


class Sandbox : public Vasav::Application
{

public:

	Sandbox()
	{


	}
	~Sandbox()
	{
	
	}



};



Vasav::Application* Vasav::CreateApplication()
{
	return new Sandbox;

}
