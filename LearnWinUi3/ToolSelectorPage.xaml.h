#pragma once

#include "ToolSelectorPage.g.h"

namespace winrt::LearnWinUi3::implementation
{
    struct ToolSelectorPage : ToolSelectorPageT<ToolSelectorPage>
    {
        ToolSelectorPage()
        {
            // Xaml objects should not call InitializeComponent during construction.
            // See https://github.com/microsoft/cppwinrt/tree/master/nuget#initializecomponent
        }
        void diceRollerButton_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e);
        void initiativeTrackerButton_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e);
    };
}

namespace winrt::LearnWinUi3::factory_implementation
{
    struct ToolSelectorPage : ToolSelectorPageT<ToolSelectorPage, implementation::ToolSelectorPage>
    {
    };
}
