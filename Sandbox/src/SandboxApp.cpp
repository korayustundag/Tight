#include <Tight.h>

class Sandbox : public Tight::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

Tight::Application* Tight::CreateApplication()
{
	return new Sandbox();
}