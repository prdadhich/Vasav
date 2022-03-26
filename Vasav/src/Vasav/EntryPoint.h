#pragma once



#ifdef VS_PLATFORM_WINDOWS
extern Vasav::Application* Vasav::CreateApplication();
int main(int argc, char** argv )
{

	auto app = Vasav::CreateApplication();

	app->Run();

	delete  app;
}

#endif