#pragma once

namespace ETicaretY�netimSistemi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Satislar i�in �zet
	/// </summary>
	public ref class Satislar : public System::Windows::Forms::Form
	{
	public:
		Satislar(void)
		{
			InitializeComponent();
			//
			//TODO: Olu�turucu kodunu buraya ekle
			//
		}

	protected:
		/// <summary>
		///Kullan�lan t�m kaynaklar� temizleyin.
		/// </summary>
		~Satislar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:

	private:
		/// <summary>
		///Gerekli tasar�mc� de�i�keni.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Tasar�mc� deste�i i�in gerekli metot - bu metodun 
		///i�eri�ini kod d�zenleyici ile de�i�tirmeyin.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::DodgerBlue;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ControlDarkDark;
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(450, 402);
			this->dataGridView1->TabIndex = 0;
			// 
			// Satislar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DodgerBlue;
			this->ClientSize = System::Drawing::Size(867, 426);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Satislar";
			this->Text = L"Satislar";
			this->Load += gcnew System::EventHandler(this, &Satislar::Satislar_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Satislar_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ connectionString = "Data Source=ENES\\SQLEXPRESS;Initial Catalog=DbEticaretSistemi;Integrated Security=SSPI";

		SqlConnection^ baglanti = gcnew SqlConnection(connectionString);
		String^ query = "SELECT SiparisNo, SiparisTutari, SiparisSepeti, SiparisTarihi FROM Satislar";
		DataTable^ tablo = gcnew DataTable();

		baglanti->Open();
		SqlCommand^ command = gcnew SqlCommand(query, baglanti);
		SqlDataReader^ reader = command->ExecuteReader();
		tablo->Load(reader);
		dataGridView1->DataSource = tablo;
	}
	};
}
