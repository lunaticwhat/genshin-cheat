#pragma once
#include <cheat-base/cheat/Feature.h>

namespace cheat::feature 
{

	class Debug : public Feature
    {
	public:

		static Debug& GetInstance();

		const FeatureGUIInfo& GetGUIInfo() const override;
		void DrawMain() override;

		virtual bool NeedStatusDraw() const override { return false; };
		void DrawStatus() override {};

		virtual bool NeedInfoDraw() const override { return false; };
		void DrawInfo() override {};
	
	private:
		Debug();
	};
}

