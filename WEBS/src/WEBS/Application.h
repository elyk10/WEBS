#pragma once

#include "Core.h"

namespace WEBS {

	class WEBS_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// to be defined in client
	Application* CreateApplication(); 

}
