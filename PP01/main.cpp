#include <iostream>
#include <string>

using namespace std; //std)standard library

bool is_game_running = false;

class GameObject
{
public:
	GameObject()
	{
		cout << "게임 오브젝트 생성!\n";
	}
	virtual ~GameObject()
	{
		cout << "게임 오브젝트 소멸!\n";
	}

	virtual void Start()
	{
		cout << "게임 오브젝트 스타트!\n";
	}
	virtual void Update()
	{
		cout << "게임 오브젝트 업데이트!\n";
	}
};

class Player : public GameObject
{
public :
	int HP = 100;
	
	Player()
	{
		cout << "향기 생성!!!\n";
	}
	~Player()
	{
		cout << "향기 소멸!\n";
	}

	void Start()
	{
		cout << "향기의 HP는 " << HP << "입니다!\n";
	}
	void Update()
	{
		cout << "향기 업데이트!!!\n";
	}
};

class Enemy : public GameObject
{
public :

	int HP = 100;

	Enemy()
	{
		cout << "문 생성!\n";
	}
	~Enemy()
	{
		cout << "문 소멸!\n";
	}

	void Start()
	{
		cout << "문의 HP는 " << HP << "입니다!\n";
	}
	void Update()
	{
		cout << "문 업데이트!!!\n";
	}
};

int main()
{
	is_game_running = true;

	GameObject* p = new Player();
	GameObject* e = new Enemy();

	p->Start();
	e->Start();

	while (is_game_running)
	{
		p->Update();
		e->Update();

		cout << "입력해주세요! (1: 게임종료, 2: 게임 계속)";
		int input;
		cin >> input;
		if(input==1)
			is_game_running = false;
	}

	delete(p);
	delete(e);

	return 0;
}
