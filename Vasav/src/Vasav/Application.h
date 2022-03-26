#pragma once
#include "Core.h"

namespace Vasav
{
	class VASAV_API Application
	{
	public:
		Application();
	virtual ~Application();


		void Run();

	};

	Application* CreateApplication();
}

