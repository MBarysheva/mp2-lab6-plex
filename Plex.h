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
			CurrLine = st.Pop();
			while (CurrLine.pFp == NULL)
			{
				pr = CurrLine.pChart->GetFirst();
				pp = dynamic_cast<TPoint*>(pr);
				if (pp != NULL)
				{
					CurrLine.pFp = pp;
					pp->Show(gr);
				}
				else
				{
					st.Push(CurrLine);
				    CurrLine.pChart = dynamic_cast<TChart*>(pr);
				}
			}
			if (CurrLine.pLp == NULL)
			{
				pr = CurrLine.pChart->GetLast();
				pp = dynamic_cast<TPoint*>(pr);
				if (pp != NULL)
				{
					CurrLine.pLp = pp;
					pp->Show(gr);
				}
				else
				{
					st.Push(CurrLine);
					CurrLine.pChart = dynamic_cast<TChart*>(pr);
					CurrLine.pFp = NULL;
					st.Push(CurrLine);
				}
			}
			if (CurrLine.pFp != NULL && CurrLine.pLp != NULL)
			{
				gr->DrawLine(Pens::Black, CurrLine.pFp = GetX(), CurrLine.pFp = GetY(), CurrLine.pLp = GetX(), CurrLine.pLp = GetY());
				pp = CurrLine.pLp;
				if (!st.Empty())
				{
					CurrLine = st.Pop();
					if (CurrLine.pFp == NULL)
					{
						CurrLine.pLp = pp;

					}
				}
				st.Push(CurrLine);
			}
		}

	}
};

