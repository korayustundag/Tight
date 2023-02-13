#pragma once

#ifdef TIGHT_PLATFORM_WINDOWS

extern Tight::Application* Tight::CreateApplication();

int main(int argc, char** argv)
{
	Tight::Log::Init();
	TIGHT_CORE_WARN("Core WRN!");
	int a = 5;
	TIGHT_INFO("App INF! Var={0}", a);

	auto app = Tight::CreateApplication();
	app->Run();
	delete[] app;
}
#endif // TIGHT_PLATFORM_WINDOWS
