#pragma once

#include "Core.h"

namespace Hazel {

	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application(); // this class will be inherited by the sandbox application

		void Run();
	};

}