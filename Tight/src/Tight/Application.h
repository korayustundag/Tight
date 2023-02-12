#pragma once
#include "Core.h"

namespace Tight {
	class TIGHT_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	Application* CreateApplication();
}

