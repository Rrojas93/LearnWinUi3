#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif


using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::LearnWinUi3::implementation
{
	void MainWindow::TabView_AddTabButtonClick(Controls::TabView const& sender, Windows::Foundation::IInspectable const& args)
	{
		// Create a new tab showing the tool selection page.

		auto frame = Controls::Frame();

		auto tabText = Controls::TextBlock();
		tabText.Text(hstring(L"Select Tool"));

		auto tabIcon = Controls::SymbolIconSource();
		tabIcon.Symbol(Controls::Symbol::Add);
		
		auto newTab = Controls::TabViewItem();
		newTab.Header(tabText);
		newTab.Content(frame);
		newTab.IconSource(tabIcon);

		frame.Navigate(xaml_typename<LearnWinUi3::ToolSelectorPage>());
		sender.TabItems().Append(newTab);
	}

	void MainWindow::TabView_TabCloseRequested(Controls::TabView const& sender, Controls::TabViewTabCloseRequestedEventArgs const& args)
	{
		// Remove the tab item
		uint32_t tabIndex = 0;
		sender.TabItems().IndexOf(args.Tab(), tabIndex);
		sender.TabItems().RemoveAt(tabIndex);

		// Close the window if there are no more tabs.
		if (sender.TabItems().Size() == 0)
		{
			this->Close();
		}
	}
}



