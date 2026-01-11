#include <WEBS.h>

class Sandbox : public WEBS::Application
{
public:
	Sandbox() 
	{

	}

	~Sandbox()
	{

	}
};

WEBS::Application* WEBS::CreateApplication()
{
	return new Sandbox();
}