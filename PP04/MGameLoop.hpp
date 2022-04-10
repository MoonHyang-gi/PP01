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

			string fps = "FPS(milliseconds):" + to_string(renderDuration.count());
			cRenderer.DrawString(fps);



			//지금은 랜더듀레이션 (시작포인트~끝포인트까지 시작 재는거), 프레임퍼세컨드 구하기
			//millisecond->second 나누기임!!

			////cout << "Rendering speed : " << renderDuration.count() << "sec" << endl;

			//int remainingFrameTime = 100 - (int)(renderDuration.count() * 1000.0);
			//if (remainingFrameTime > 0)
				//this_thread::sleep_for(chrono::milliseconds(remainingFrameTime));
		}
	};
}