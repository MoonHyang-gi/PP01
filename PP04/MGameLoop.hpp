#pragma once
#include <chrono>
#include <thread>
#include "MConsolUtil.hpp"

using namespace std;


namespace MuSeoun_Engine
{
	class MGameLoop
	{
	private:
		bool _isGameRunning;
		MConsoleRenderer cRenderer;

	public:
		MGameLoop() { _isGameRunning = false; }
		~MGameLoop() {}

		void Run()
		{
			_isGameRunning = true;
			Initialize();

			while (_isGameRunning)
			{
				Input();
				Update();
				Render();
			}
			Release();
		}
		void Stop()
		{
			_isGameRunning = false;
		}

	private:

		void Initialize()
		{
			/*SetCursorState(false);
			p = new Player();*/
		}

		void Release()
		{
			//delete(p);
		}

		void Input()
		{
			/*if (GetAsyncKeyState(VK_SPACE) & 0x8000 || GetAsyncKeyState(VK_SPACE) & 0x8001)
			{

			}
			else
			{

			}*/
		}

		void Update()
		{

		}

		void Render()
		{
			chrono::system_clock::time_point startRenderTimePoint = chrono::system_clock::now();

			cRenderer.Clear();
			cRenderer.MoveCursor(10, 20);

			chrono::duration<double> renderDuration = chrono::system_clock::now() - startRenderTimePoint;

			string fps = "FPS(millisecond):" + to_string(renderDuration.count());
			cRenderer.DrawString(fps);

			cout << "FPS: " << renderDuration.count() * 60 << endl;
				
			int FPS = 60 - ((int)renderDuration.count() * 60.0f);
			if (FPS > 0)
				this_thread::sleep_for(chrono::microseconds(FPS));

		}
	};
}