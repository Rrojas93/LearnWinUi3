#pragma once

#include "DiceRollerPage.g.h"

namespace winrt::LearnWinUi3::implementation
{
    struct DiceRollerPage : DiceRollerPageT<DiceRollerPage>
    {
        DiceRollerPage()
        {
            // Xaml objects should not call InitializeComponent during construction.
            // See https://github.com/microsoft/cppwinrt/tree/master/nuget#initializecomponent
        }

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void myButton_Click(IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::LearnWinUi3::factory_implementation
{
    struct DiceRollerPage : DiceRollerPageT<DiceRollerPage, implementation::DiceRollerPage>
    {
    };
}
