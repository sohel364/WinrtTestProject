#pragma once
#include "App.xaml.g.h"

namespace winrt::WinrtTestProject::implementation
{
    struct App : AppT<App>
    {
        App();

        void OnLaunched(Windows::ApplicationModel::Activation::LaunchActivatedEventArgs const&);
        void OnSuspending(IInspectable const&, Windows::ApplicationModel::SuspendingEventArgs const&);
        void OnNavigationFailed(IInspectable const&, Windows::UI::Xaml::Navigation::NavigationFailedEventArgs const&);

        void LoadData() {};
        void InitAsync();
        Windows::UI::Xaml::DispatcherTimer CreateAndStartDispatcherTimer(std::chrono::milliseconds interval, void(App::* onTick)(IInspectable sender, IInspectable e));

    private:
        void OnTimerTick(IInspectable sensder, IInspectable e) {};

    private:
        Windows::UI::Xaml::DispatcherTimer m_timer;
    };
}
