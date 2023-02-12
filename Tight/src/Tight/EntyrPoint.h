#pragma once

#ifdef TIGHT_PLATFORM_WINDOWS

extern Tight::Application* Tight::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Tight::CreateApplication();
	app->Run();
	delete[] app;
}
#endif // TIGHT_PLATFORM_WINDOWS
