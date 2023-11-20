#include "pch.h"
#include "ToolSelectorPage.xaml.h"
#if __has_include("ToolSelectorPage.g.cpp")
#include "ToolSelectorPage.g.cpp"
#endif

using namespace winrt;
using namespace winrt::Windows::Foundation;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::LearnWinUi3::implementation
{
	void ToolSelectorPage::diceRollerButton_Click(IInspectable const& sender, RoutedEventArgs const& e)
	{
		this->Frame().Navigate(xaml_typename<LearnWinUi3::DiceRollerPage>());
	}

	void ToolSelectorPage::initiativeTrackerButton_Click(IInspectable const& sender, RoutedEventArgs const& e)
	{

	}
}



