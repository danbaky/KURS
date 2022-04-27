#pragma once
#include "RKS.h"

namespace KUR2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ ANIME
	/// </summary>
	public ref class ANIME : public System::Windows::Forms::Form
	{
	public:
		ANIME(void)
		{
			InitializeComponent();
			this->DoubleBuffered = true;//ƒ¬ќ…Ќјя Ѕ”‘
			//
			//TODO: добавьте код конструктора
			//
		}
	private: System::Windows::Forms::TextBox^ x0_text;
	private: System::Windows::Forms::TextBox^ vy0_text;
	public:

	public:

	private: System::Windows::Forms::TextBox^ vx0_text;

	private: System::Windows::Forms::TextBox^ y0_text;

	private: System::Windows::Forms::TextBox^ kx_text;
	private: System::Windows::Forms::TextBox^ ky_text;
	private: System::Windows::Forms::TextBox^ b_text;



	private: System::Windows::Forms::TextBox^ m_text;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~ANIME()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnSTART;
	private: System::Windows::Forms::Button^ btnEND;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnSTART = (gcnew System::Windows::Forms::Button());
			this->btnEND = (gcnew System::Windows::Forms::Button());
			this->x0_text = (gcnew System::Windows::Forms::TextBox());
			this->vy0_text = (gcnew System::Windows::Forms::TextBox());
			this->vx0_text = (gcnew System::Windows::Forms::TextBox());
			this->y0_text = (gcnew System::Windows::Forms::TextBox());
			this->kx_text = (gcnew System::Windows::Forms::TextBox());
			this->ky_text = (gcnew System::Windows::Forms::TextBox());
			this->b_text = (gcnew System::Windows::Forms::TextBox());
			this->m_text = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Window;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(54, 37);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(501, 431);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// btnSTART
			// 
			this->btnSTART->Location = System::Drawing::Point(609, 37);
			this->btnSTART->Name = L"btnSTART";
			this->btnSTART->Size = System::Drawing::Size(75, 35);
			this->btnSTART->TabIndex = 1;
			this->btnSTART->Text = L"START";
			this->btnSTART->UseVisualStyleBackColor = true;
			this->btnSTART->Click += gcnew System::EventHandler(this, &ANIME::btnSTART_Click);
			// 
			// btnEND
			// 
			this->btnEND->Location = System::Drawing::Point(734, 37);
			this->btnEND->Name = L"btnEND";
			this->btnEND->Size = System::Drawing::Size(75, 35);
			this->btnEND->TabIndex = 2;
			this->btnEND->Text = L"END";
			this->btnEND->UseVisualStyleBackColor = true;
			this->btnEND->Click += gcnew System::EventHandler(this, &ANIME::btnEND_Click);
			// 
			// x0_text
			// 
			this->x0_text->Location = System::Drawing::Point(734, 103);
			this->x0_text->Name = L"x0_text";
			this->x0_text->Size = System::Drawing::Size(67, 22);
			this->x0_text->TabIndex = 3;
			this->x0_text->Text = L"0";
			// 
			// vy0_text
			// 
			this->vy0_text->Location = System::Drawing::Point(734, 219);
			this->vy0_text->Name = L"vy0_text";
			this->vy0_text->Size = System::Drawing::Size(67, 22);
			this->vy0_text->TabIndex = 4;
			this->vy0_text->Text = L"5";
			// 
			// vx0_text
			// 
			this->vx0_text->Location = System::Drawing::Point(734, 178);
			this->vx0_text->Name = L"vx0_text";
			this->vx0_text->Size = System::Drawing::Size(67, 22);
			this->vx0_text->TabIndex = 5;
			this->vx0_text->Text = L"10";
			// 
			// y0_text
			// 
			this->y0_text->Location = System::Drawing::Point(734, 140);
			this->y0_text->Name = L"y0_text";
			this->y0_text->Size = System::Drawing::Size(67, 22);
			this->y0_text->TabIndex = 6;
			this->y0_text->Text = L"8";
			// 
			// kx_text
			// 
			this->kx_text->Location = System::Drawing::Point(617, 140);
			this->kx_text->Name = L"kx_text";
			this->kx_text->Size = System::Drawing::Size(67, 22);
			this->kx_text->TabIndex = 10;
			this->kx_text->Text = L"2";
			// 
			// ky_text
			// 
			this->ky_text->Location = System::Drawing::Point(617, 178);
			this->ky_text->Name = L"ky_text";
			this->ky_text->Size = System::Drawing::Size(67, 22);
			this->ky_text->TabIndex = 9;
			this->ky_text->Text = L"3";
			// 
			// b_text
			// 
			this->b_text->Location = System::Drawing::Point(617, 219);
			this->b_text->Name = L"b_text";
			this->b_text->Size = System::Drawing::Size(67, 22);
			this->b_text->TabIndex = 8;
			this->b_text->Text = L"1";
			// 
			// m_text
			// 
			this->m_text->Location = System::Drawing::Point(617, 103);
			this->m_text->Name = L"m_text";
			this->m_text->Size = System::Drawing::Size(67, 22);
			this->m_text->TabIndex = 7;
			this->m_text->Text = L"1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(561, 103);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(19, 17);
			this->label1->TabIndex = 11;
			this->label1->Text = L"m";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(561, 140);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 17);
			this->label2->TabIndex = 12;
			this->label2->Text = L"kx";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(561, 178);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(22, 17);
			this->label3->TabIndex = 13;
			this->label3->Text = L"ky";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(561, 219);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(16, 17);
			this->label4->TabIndex = 14;
			this->label4->Text = L"b";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(807, 106);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(22, 17);
			this->label5->TabIndex = 15;
			this->label5->Text = L"x0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(807, 143);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(23, 17);
			this->label6->TabIndex = 16;
			this->label6->Text = L"y0";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(807, 178);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(29, 17);
			this->label7->TabIndex = 17;
			this->label7->Text = L"vx0";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(807, 219);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(30, 17);
			this->label8->TabIndex = 18;
			this->label8->Text = L"vy0";
			// 
			// ANIME
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(877, 537);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->kx_text);
			this->Controls->Add(this->ky_text);
			this->Controls->Add(this->b_text);
			this->Controls->Add(this->m_text);
			this->Controls->Add(this->y0_text);
			this->Controls->Add(this->vx0_text);
			this->Controls->Add(this->vy0_text);
			this->Controls->Add(this->x0_text);
			this->Controls->Add(this->btnEND);
			this->Controls->Add(this->btnSTART);
			this->Controls->Add(this->pictureBox1);
			this->DoubleBuffered = true;
			this->Name = L"ANIME";
			this->Text = L"ANIME";
			this->Load += gcnew System::EventHandler(this, &ANIME::ANIME_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ANIME::ANIME_Paint);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	RKS* difur = new RKS();//глобальный дифур
	Timer^ timer1 = gcnew Timer();
	Graphics^ g;
	Pen^ p;
	SolidBrush^ br = gcnew SolidBrush(System::Drawing::Color::Red);
	int WIDHT;
	int HEIGHT;
	Point zen;


	private: System::Void ANIME_Load(System::Object^ sender, System::EventArgs^ e) {
		timer1->Interval = 30;
		//timer1->Enabled = true;
		timer1->Tick += gcnew EventHandler(this, &ANIME::timer1_Tick);
		WIDHT	= pictureBox1->Width;
		HEIGHT	= pictureBox1->Height;
		zen = Point(WIDHT / 2, HEIGHT / 2);
		
	}
	private: System::Void btnSTART_Click(System::Object^ sender, System::EventArgs^ e) {

		g = pictureBox1->CreateGraphics();
		p = gcnew Pen(Color::Black, 1.5f);
		timer1->Enabled = true;
		double m	= Convert::ToDouble(m_text	->Text);
		double kx	= Convert::ToDouble(kx_text	->Text);
		double ky	= Convert::ToDouble(ky_text	->Text);
		double x0	= Convert::ToDouble(x0_text	->Text);
		double y0	= Convert::ToDouble(y0_text	->Text);
		double b	= Convert::ToDouble(b_text	->Text);
		double vx0	= Convert::ToDouble(vx0_text->Text);
		double vy0	= Convert::ToDouble(vy0_text->Text);

		double A = (kx + ky) / m, B = b / m;

		difur	->setInitialValue({ 0.1,0,100,{vx0,x0,vy0,y0} }, 4)
				->setAB(A, B);
		
	}
	private: System::Void btnEND_Click(System::Object^ sender, System::EventArgs^ e) {
		this->timer1->Enabled = false;
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

		Bitmap^ buffer = gcnew Bitmap(WIDHT, HEIGHT);
		System::Drawing::Graphics^ gfx = Graphics::FromImage(buffer);
		DrawPic(gfx);
		pictureBox1->Image = buffer;

		//pictureBox1->Refresh();
		//this->Invalidate(); //самое главное... вызовет, в том числе, обработчик Paint
	}
private: System::Void ANIME_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	
}
	   void DrawPic(System::Drawing::Graphics^ G) {

		   VecR X = difur->RK_step();
		   double	x = X[1],
			   y = X[3];
		   Point P = ToPoint(x, y);
		   SprX(G,P);
		   SprY(G,P);
		   Ball(G,P);
	   }
	   void Ball(System::Drawing::Graphics^ G, int x, int y) {
		   int a = 20,b = a/2;
		   G->DrawEllipse(p, x - b, y - b, a, a);
		   G->FillEllipse(br, x - b, y- b, a, a);
	   }
	   void Ball(System::Drawing::Graphics^ G, Point p) {
		   Ball(G,p.X, p.Y);
	   }
	   Point ToPoint(double x, double y) {
		   int scale = 20;
		   int X = zen.X + WIDHT * x / scale;
		   int Y = zen.Y - HEIGHT * y / scale;
		   return Point(X, Y);
	   }
	   bool isInBox(Point p) {
		   return (p.X > 0 && p.X < WIDHT)
			   && (p.Y > 0 && p.Y < HEIGHT);
	   }
	   void SprX(System::Drawing::Graphics^ G,Point b) {
		   Point Xfix = Point(zen.X, zen.Y + HEIGHT / 2);
		   Spring(G,Xfix, b);
	   }
	   void SprY(System::Drawing::Graphics^ G,Point b) {
		   Point Yfix = Point(zen.X - WIDHT/2, zen.Y);
		   Spring(G,Yfix, b);
	   }
	   void Spring(System::Drawing::Graphics^ G,Point fixed,Point b) {
		   int n = 5;//чисто виткоы
		   double l = 20/2;//ƒлинна частей пружины(половина)

			//начало пружины x
		   
		   double hX = (b.X - fixed.X)/(n+1)/2;//половина шага
		   double hY = (b.Y - fixed.Y)/(n+1)/2;


		   double h = sqrt(hX * hX + hY * hY);
		   double	cos = hX / h,
					sin = hY / h;

		   double	ly = l * cos,
					lx = l * sin;

		   int x = fixed.X, 
			   y = fixed.Y;

		   Ball(G,x, y);

		   for (int i = 0; i < n; ++i) {
			   if (i == 0) {
				   x += 2*hX; y += 2*hY;
				   Point next = Point(x, y);
				   G->DrawLine(p, fixed, next);
			   }
			   else {
				   Point p1 = Point(x + hX - lx,
									y + hY + ly);
				   Point p2 = Point(x + hX + lx,
									y + hY - ly);
				   if (isInBox(p1) && isInBox(p2)&&isInBox(Point(x, y))) {
					   G->DrawLine(p, Point(x, y), p1);
					   G->DrawLine(p, p2, p1);
				   }
				   x += 2 * hX;
				   y += 2 * hY;
				   if (isInBox(Point(x, y)) && isInBox(p2))
					   G->DrawLine(p, Point(x, y), p2);
			   }
		   }
		   G->DrawLine(p, Point(x, y), Point(x+2*hX,y+2*hY));

	   }
};
}
