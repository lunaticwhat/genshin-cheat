#pragma once
#include <cheat-base/cheat/Feature.h>
#include <cheat-base/config/Config.h>

#include <il2cpp-appdata.h>

namespace cheat::feature 
{

	class NoClip : public Feature
    {
	public:
		config::field::ToggleField m_Enabled;
		config::field::BaseField<float> m_Speed;
		config::field::BaseField<bool> m_CameraRelative;

		static NoClip& GetInstance();

		const FeatureGUIInfo& GetGUIInfo() const override;
		void DrawMain() override;

		virtual bool NeedStatusDraw() const override;
		void DrawStatus() override;

		virtual bool NeedInfoDraw() const override { return false; };
		void DrawInfo() override {};

		void OnGameUpdate();
		void OnMoveSync(uint32_t entityId, app::MotionInfo* syncInfo);
	private:
		NoClip();
	};
}

