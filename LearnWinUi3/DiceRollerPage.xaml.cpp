#include "pch.h"
#include "DiceRollerPage.xaml.h"
#if __has_include("DiceRollerPage.g.cpp")
#include "DiceRollerPage.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::LearnWinUi3::implementation
{
    int32_t DiceRollerPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void DiceRollerPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void DiceRollerPage::myButton_Click(IInspectable const&, RoutedEventArgs const&)
    {
        myButton().Content(box_value(L"Clicked"));
    }
}
