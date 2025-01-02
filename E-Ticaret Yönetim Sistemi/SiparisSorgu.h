#pragma once

namespace ETicaretYönetimSistemi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;

	/// <summary>
	/// SiparisSorgu için özet
	/// </summary>
	public ref class SiparisSorgu : public System::Windows::Forms::Form
	{
	public:
		SiparisSorgu(void)
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
		~SiparisSorgu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button2;


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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(287, 225);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(181, 22);
			this->textBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(315, 274);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(127, 28);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Ara";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SiparisSorgu::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label1->Location = System::Drawing::Point(729, 128);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(139, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Sipariþ Alýndý";
			this->label1->Click += gcnew System::EventHandler(this, &SiparisSorgu::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label2->Location = System::Drawing::Point(735, 208);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(126, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Hazýrlanýyor";
			this->label2->Click += gcnew System::EventHandler(this, &SiparisSorgu::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label3->Location = System::Drawing::Point(689, 278);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(222, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Kargoya Teslim Edildi";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label4->Location = System::Drawing::Point(735, 446);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(135, 25);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Teslim Edildi";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label5->Location = System::Drawing::Point(747, 359);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(108, 25);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Daðýtýmda";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(1136, 64);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 16);
			this->label6->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(315, 326);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 28);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Yeni Sorgu";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SiparisSorgu::button2_Click);
			// 
			// SiparisSorgu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Yellow;
			this->ClientSize = System::Drawing::Size(1227, 588);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"SiparisSorgu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SiparisSorgu";
			this->Load += gcnew System::EventHandler(this, &SiparisSorgu::SiparisSorgu_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ siparisNo = this->textBox1->Text;
		textBox1->Enabled = false;

		String^ connectionString = "Data Source=ENES\\SQLEXPRESS;Initial Catalog=DbEticaretSistemi;Integrated Security=True;Connect Timeout=60;Encrypt=True;TrustServerCertificate=True";
		SqlConnection con(connectionString);
		con.Open();

		String^ sqlQuery = "SELECT * FROM Siparisler WHERE SiparisNo like '" + siparisNo + "'";
		SqlCommand^ cmd = gcnew SqlCommand(sqlQuery, % con);
		cmd->Parameters->AddWithValue("@SiparisNo", "%" + siparisNo + "%");
		SqlDataReader^ read = cmd->ExecuteReader();

		String^ siparisDurumu = "";
		while (read->Read())
		{
			siparisDurumu = read["SiparisDurumu"]->ToString();
			
		}

		if (siparisDurumu == "")
		{
			MessageBox::Show("Sipariþ Bulunamadý");
		}
		else
		{
			if (siparisDurumu == "Siparis Alýndý")
			{
				label1->ForeColor = System::Drawing::Color::Green;
				label2->ForeColor = System::Drawing::Color::Red;
				label3->ForeColor = System::Drawing::Color::Red;
				label4->ForeColor = System::Drawing::Color::Red;
				label5->ForeColor = System::Drawing::Color::Red;
			}
			else if (siparisDurumu == "Hazýrlanýyor")
			{
				label1->ForeColor = System::Drawing::Color::Green;
				label2->ForeColor = System::Drawing::Color::Green;
				label3->ForeColor = System::Drawing::Color::Red;
				label4->ForeColor = System::Drawing::Color::Red;
				label5->ForeColor = System::Drawing::Color::Red;
			}
			else if (siparisDurumu == "Kargoya Teslim Edildi")
			{
				label1->ForeColor = System::Drawing::Color::Green;
				label2->ForeColor = System::Drawing::Color::Green;
				label3->ForeColor = System::Drawing::Color::Green;
				label4->ForeColor = System::Drawing::Color::Red;
				label5->ForeColor = System::Drawing::Color::Red;
			}
			else if (siparisDurumu == "Daðýtýmda")
			{
				label1->ForeColor = System::Drawing::Color::Green;
				label2->ForeColor = System::Drawing::Color::Green;
				label3->ForeColor = System::Drawing::Color::Green;
				label4->ForeColor = System::Drawing::Color::Green;
				label5->ForeColor = System::Drawing::Color::Red;
			}
			else
			{
				label1->ForeColor = System::Drawing::Color::Green;
				label2->ForeColor = System::Drawing::Color::Green;
				label3->ForeColor = System::Drawing::Color::Green;
				label4->ForeColor = System::Drawing::Color::Green;
				label5->ForeColor = System::Drawing::Color::Green;
			}
		}
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void SiparisSorgu_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	textBox1->Enabled = true;

	label1->ForeColor = System::Drawing::Color::DarkGray;
	label2->ForeColor = System::Drawing::Color::DarkGray;
	label3->ForeColor = System::Drawing::Color::DarkGray;
	label4->ForeColor = System::Drawing::Color::DarkGray;
	label5->ForeColor = System::Drawing::Color::DarkGray;
}
};
}
