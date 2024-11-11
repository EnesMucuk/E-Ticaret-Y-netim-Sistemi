#pragma once
#include "AdminGiris.h"
#include "PersonelGiris.h"

namespace ETicaretYönetimSistemi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// GirisEkrani için özet
	/// </summary>
	public ref class GirisEkrani : public System::Windows::Forms::Form
	{
	public:
		GirisEkrani(void)
		{
			InitializeComponent();
			//
			//TODO: Oluþturucu kodunu buraya ekle
			//
		}

	protected:
		/// <summary>
		///Kullanýlan tüm kaynaklarý temizleyin.
		/// </summary>
		~GirisEkrani()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button3;


	private:
		/// <summary>
		///Gerekli tasarýmcý deðiþkeni.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Tasarýmcý desteði için gerekli metot - bu metodun 
		///içeriðini kod düzenleyici ile deðiþtirmeyin.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GirisEkrani::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Location = System::Drawing::Point(165, 147);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 106);
			this->button1->TabIndex = 0;
			this->button1->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &GirisEkrani::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Location = System::Drawing::Point(27, 147);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 106);
			this->button2->TabIndex = 1;
			this->button2->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &GirisEkrani::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(56, 128);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"ADMÝN";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(175, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"PERSONEL";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->label3->Location = System::Drawing::Point(66, 30);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(166, 50);
			this->label3->TabIndex = 3;
			this->label3->Text = L"A-Z\r\n     E-TÝCARET";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Location = System::Drawing::Point(27, 282);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(250, 250);
			this->panel1->TabIndex = 4;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Location = System::Drawing::Point(121, 538);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(43, 40);
			this->button3->TabIndex = 5;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &GirisEkrani::button3_Click);
			// 
			// GirisEkrani
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(884, 591);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->ForeColor = System::Drawing::Color::White;
			this->Name = L"GirisEkrani";
			this->Text = L"GirisEkrani";
			this->Load += gcnew System::EventHandler(this, &GirisEkrani::GirisEkrani_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void GirisEkrani_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		AdminGiris^ form2 = gcnew AdminGiris();

		form2->TopLevel = false;
		form2->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		form2->Dock = DockStyle::Fill;

		this->panel1->Controls->Clear();
		this->panel1->Controls->Add(form2);
		form2->Show();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		PersonelGiris^ form3 = gcnew PersonelGiris();

		form3->TopLevel = false;
		form3->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		form3->Dock = DockStyle::Fill;

		this->panel1->Controls->Clear();
		this->panel1->Controls->Add(form3);
		form3->Show();
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
};
}
