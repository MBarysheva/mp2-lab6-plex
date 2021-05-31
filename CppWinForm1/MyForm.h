#pragma once
#include "Plex.h"

TChart* Plex;
TPoint* CurrPoint;
Point* p = new Point;
Point* Tmp = new Point;
TChart* LineNew;
TPoint* PointsForm;

namespace CppWinForm1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			BackColor = Color::White;
			gr = CreateGraphics();
			Plex = new TChart;
			Plex->SetVisible(false);
			CurrPoint = new TPoint;
			CurrPoint->SetX(0);
			CurrPoint->SetY(0);
		}





	public:

	public:


	public:
	public:
		Graphics^ gr;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 24);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Show";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(141, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(114, 24);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Hide";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(261, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(108, 24);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Move";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(385, 16);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(57, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(473, 16);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(57, 20);
			this->textBox2->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(382, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(14, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Х";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(470, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(14, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Y";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(808, 511);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		TPoint* A = new TPoint(100, 200);
		TPoint* B = new TPoint(150, 180);
		TPoint* C = new TPoint(200, 100);
		TPoint* D = new TPoint(250, 150);
		TPoint* E = new TPoint(330, 140);
		TPoint* F = new TPoint(270, 200);
		TPoint* G = new TPoint(300, 270);
		TPoint* H = new TPoint(250, 250);
		TPoint* I = new TPoint(200,290);
		TPoint* J = new TPoint(170, 220);
		TPoint* K = new TPoint(270, 400);
		TPoint* L = new TPoint(300, 500);
		TPoint* M = new TPoint(220, 200);

		TPoint* S = new TPoint(400, 300);
		TPoint* s = new TPoint(440, 300);

		TChart* AB = new TChart;
		TChart* BC = new TChart;
		TChart* CD = new TChart;
		TChart* DE = new TChart;
		TChart* EF = new TChart;
		TChart* FG = new TChart;

		TChart* GH = new TChart;
		TChart* SH = new TChart;

		TChart* HI = new TChart;
		TChart* IJ = new TChart;
		TChart* JA = new TChart;
		TChart* AM = new TChart;
		TChart* MK = new TChart;
		TChart* KS = new TChart;
		TChart* Ss = new TChart;
		TChart* sK = new TChart;
		TChart* KL = new TChart;

		CurrPoint->SetX(-1);
		CurrPoint->SetY(-1);

		AB->SetFirst(A);
		AB->SetLast(B);
		BC->SetFirst(AB);
		BC->SetLast(C);
		CD->SetFirst(BC);
		CD->SetLast(D);
		DE->SetFirst(CD);
		DE->SetLast(E);
		EF->SetFirst(DE);
		EF->SetLast(F);
		FG->SetFirst(EF);
		FG->SetLast(G);
		GH->SetFirst(FG);
		GH->SetLast(H);
		HI->SetFirst(GH);
		HI->SetLast(I);
		IJ->SetFirst(HI);
		IJ->SetLast(J);
		JA->SetFirst(IJ);
		JA->SetLast(A);
		AM->SetFirst(JA);
		AM->SetLast(M); 
		MK->SetFirst(AM);
		MK->SetLast(K); 
		KS->SetFirst(MK);
		KS->SetLast(S);
		Ss->SetFirst(KS);
		Ss->SetLast(s);
		sK->SetFirst(Ss);
		sK->SetLast(K);
		KL->SetFirst(sK);
		KL->SetLast(L);


		Plex->SetFirst(sK);
		Plex->SetLast(L);
		Plex->Show(gr, Pens::Red);
		Plex->SetVisible(true);

	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Plex->GetVisible())
	{
		Plex->Hide(gr, Pens::White);
		Plex->SetVisible(false);
	}
}
	   //перенос
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int x = Convert::ToInt32(textBox1->Text);
	int y = Convert::ToInt32(textBox2->Text);

	Plex->Hide(gr, Pens::White);
	Plex->MoveTo(x, y);
	Plex->Show(gr, Pens::Red);
	Plex->Reset();
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (Plex->GetVisible())
	{
		*p = PointToClient(Control::MousePosition);
		CurrPoint = Plex->SetCurrPoint(gr, Pens::Black, p->X, p->Y);
	}
}
private: System::Void MyForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (Plex->GetVisible() && CurrPoint->GetX() > 0 && CurrPoint->GetY() > 0 && e->X != CurrPoint->GetX() && e->Y != CurrPoint->GetY())
	{
		*Tmp = PointToClient(Control::MousePosition);

		PointsForm = new TPoint(Tmp->X, Tmp->Y);
		LineNew = new TChart;

		LineNew->SetFirst(PointsForm);
		LineNew->SetLast(CurrPoint);

		Plex->AddLine(gr, Pens::Red, CurrPoint, LineNew);
		Plex->Show(gr, Pens::Red);
	}
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int x = Convert::ToInt32(textBox3->Text);
	int y = Convert::ToInt32(textBox4->Text);

	TPoint* M = new TPoint(x,y);

}
};
}
