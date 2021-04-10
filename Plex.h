#pragma once
#include"Stack.h"
namespace Plex{
using namespace System::Drawing;
class TRoot
{
protected:
	bool Visible, Active;
public:
	//TRoot(Visible = NULL, Active = NULL);

};
class TPoint;
class TChart;
struct TLine
{
	TChart* pChart;
	TPoint* pFp,* pLp;
};
class TChart {
public:
	Stack<TLine> st;
	void Show(Graphics^ gr)
	{
		TLine CurrLine;
		TRoot* pr;
		TPoint* pp;
		CurrLine.pChart = this;
		CurrLine.pFp = CurrLine.pLp = NULL;
		st.Clear();
		st.Push(CurrLine);
		while (!st.Empty())
		{
			CurrLine
		}

	}
};
}
