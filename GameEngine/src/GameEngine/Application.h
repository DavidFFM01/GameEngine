#pragma once

# include "Core.h"
namespace GameEngine {
	class GAMEENGINE_API Application
	{
	public:
		Application();
		virtual ~Application(); // virtual deconstructor, as this will be subclassed by sandbox
		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}

