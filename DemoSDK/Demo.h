#pragma once

class Demo
{

	private:

		String name;
		String party;

		Splash splash;

		Version version;

		Time tmax;

		vector<Timer> timers;

		Setup setup;

		Intro intro;
		vector<Scene> scenes;
		Credits credits;

		DAT dat;

	public:
	
		Demo();
		~Demo();

		bool splash(float t);

		bool info(void);

		bool init(int width, int height, int hz, ...);
		bool shut(void);

		bool load(DAT* path);

		bool setup();

		bool setAPI(int type, int api);

};

