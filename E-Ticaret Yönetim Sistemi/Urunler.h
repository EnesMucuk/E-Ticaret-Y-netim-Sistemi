#pragma once

namespace ETicaretYönetimSistemi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Urunler için özet
	/// </summary>
	public ref class Urunler : public System::Windows::Forms::Form
	{
	public:
		Urunler(void)
		{
			InitializeComponent();
			//
			//TODO: Oluþturucu kodunu buraya ekle
			//
		}

	public: void ListeyiGuncelle() {
		String^ connectionString = "Data Source=ENES\\SQLEXPRESS;Initial Catalog=DbEticaretSistemi;Integrated Security=SSPI";

		SqlConnection^ baglanti = gcnew SqlConnection(connectionString);
		String^ query = "SELECT Numara, Baslik, Aciklama, Fiyat, Stok, Foto FROM Urunler";
		DataTable^ tablo = gcnew DataTable();

		baglanti->Open();
		SqlCommand^ command = gcnew SqlCommand(query, baglanti);
		SqlDataReader^ reader = command->ExecuteReader();
		tablo->Load(reader);
		dataGridView1->DataSource = tablo;
		}

	protected:
		/// <summary>
		///Kullanýlan tüm kaynaklarý temizleyin.
		/// </summary>
		~Urunler()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button7;
	protected:


	protected:




	protected:

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Location = System::Drawing::Point(16, 87);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(130, 22);
			this->textBox1->TabIndex = 0;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::DodgerBlue;
			this->dataGridView1->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::Disable;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(326, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(528, 402);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Urunler::dataGridView1_CellContentClick);
			this->dataGridView1->CellEnter += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Urunler::dataGridView1_CellEnter);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->Location = System::Drawing::Point(12, 68);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Ürün Numarasý";
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Location = System::Drawing::Point(16, 136);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(130, 22);
			this->textBox2->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label2->Location = System::Drawing::Point(12, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Baþlýk";
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Location = System::Drawing::Point(16, 233);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(130, 22);
			this->textBox3->TabIndex = 0;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Urunler::textBox3_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label3->Location = System::Drawing::Point(11, 214);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Stok";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label4->Location = System::Drawing::Point(13, 267);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(71, 16);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Açýklama";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label5->Location = System::Drawing::Point(174, 68);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 16);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Fotoðraf";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Location = System::Drawing::Point(179, 120);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(130, 130);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Urunler::pictureBox1_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->button1->Location = System::Drawing::Point(253, 65);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(55, 19);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Seç";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Urunler::button1_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Urunler::openFileDialog1_FileOk);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(178, 256);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(59, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Ekle";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Urunler::button2_Click_1);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(250, 256);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(60, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Sil";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Urunler::button3_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(16, 341);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(99, 22);
			this->numericUpDown1->TabIndex = 8;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(121, 340);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(91, 23);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Stok Ekle";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Urunler::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(219, 340);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(91, 23);
			this->button6->TabIndex = 9;
			this->button6->Text = L"Stok Çýkar";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Urunler::button6_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label6->Location = System::Drawing::Point(44, 12);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(226, 25);
			this->label6->TabIndex = 10;
			this->label6->Text = L"ÜRÜN ÖZELLÝKLERÝ";
			// 
			// textBox4
			// 
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->Location = System::Drawing::Point(16, 189);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(130, 22);
			this->textBox4->TabIndex = 0;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Urunler::textBox3_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label7->Location = System::Drawing::Point(12, 170);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 16);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Fiyat";
			// 
			// textBox5
			// 
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox5->Location = System::Drawing::Point(16, 286);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(130, 22);
			this->textBox5->TabIndex = 0;
			// 
			// textBox6
			// 
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox6->Location = System::Drawing::Point(177, 87);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(130, 22);
			this->textBox6->TabIndex = 0;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Urunler::textBox6_TextChanged);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(179, 285);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(131, 23);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Güncelle";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Urunler::button4_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(71, 380);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(168, 23);
			this->button7->TabIndex = 11;
			this->button7->Text = L"Satýrlarý Temizle";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Urunler::button7_Click);
			// 
			// Urunler
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DodgerBlue;
			this->ClientSize = System::Drawing::Size(867, 426);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->Name = L"Urunler";
			this->Text = L" ";
			this->Load += gcnew System::EventHandler(this, &Urunler::Urunler_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void webBrowser1_DocumentCompleted(System::Object^ sender, System::Windows::Forms::WebBrowserDocumentCompletedEventArgs^ e) {
	}
	private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	openFileDialog1->ShowDialog();
	pictureBox1->ImageLocation = openFileDialog1->FileName;
	textBox6->Text = openFileDialog1->FileName;
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	textBox1->Text = dataGridView1->CurrentRow->Cells[0]->Value->ToString();
}

private: System::Void Urunler_Load(System::Object^ sender, System::EventArgs^ e) {

	ListeyiGuncelle();
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	openFileDialog1->FileName = textBox6->Text;
	pictureBox1->ImageLocation = openFileDialog1->FileName;
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ numara = this->textBox1->Text;
	String^ baslik = this->textBox2->Text;
	String^ stok = this->textBox3->Text;
	String^ fiyat = this->textBox4->Text;
	String^ aciklama = this->textBox5->Text;
	String^ foto = this->textBox6->Text;


	String^ connectionString = "Data Source=ENES\\SQLEXPRESS;Initial Catalog=DbEticaretSistemi;Integrated Security=True;Connect Timeout=60;Encrypt=True;TrustServerCertificate=True";
	SqlConnection con(connectionString);
	con.Open();

	String^ sqlQuery = "Insert into Urunler values ('" + this->textBox1->Text + "','" + this->textBox2->Text + "','" + this->textBox5->Text + "','" + this->textBox4->Text + "','" + this->textBox3->Text + "','" + this->textBox6->Text + "')";
	SqlCommand cmd(sqlQuery, % con);
	cmd.ExecuteNonQuery();
	con.Close();
	this->textBox1->Text = "";
	this->textBox2->Text = "";
	this->textBox3->Text = "";
	this->textBox4->Text = "";
	this->textBox5->Text = "";
	this->textBox6->Text = "";

	ListeyiGuncelle();

	
}
private: System::Void dataGridView1_CellEnter(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	textBox1->Text = dataGridView1->CurrentRow->Cells[0]->Value->ToString();
	textBox2->Text = dataGridView1->CurrentRow->Cells[1]->Value->ToString();
	textBox5->Text = dataGridView1->CurrentRow->Cells[2]->Value->ToString();
	textBox4->Text = dataGridView1->CurrentRow->Cells[3]->Value->ToString();
	textBox3->Text = dataGridView1->CurrentRow->Cells[4]->Value->ToString();
	textBox6->Text = dataGridView1->CurrentRow->Cells[5]->Value->ToString();

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	int miktar = Int32::Parse(numericUpDown1->Text);
	String^ numara = textBox1->Text;

	String^ connectionString = "Data Source=ENES\\SQLEXPRESS;Initial Catalog=DbEticaretSistemi;Integrated Security=True;Connect Timeout=60;Encrypt=True;TrustServerCertificate=True";
	SqlConnection con(connectionString);
	con.Open();

	String^ sqlQuery = "UPDATE Urunler set Stok=Stok + @miktar where Numara = @numara";
	SqlCommand^ cmd = gcnew SqlCommand(sqlQuery,% con);

	cmd->Parameters->Add("miktar", SqlDbType::Int)->Value = miktar;
	cmd->Parameters->Add("Numara", SqlDbType::VarChar, 50)->Value = numara;

	cmd->ExecuteNonQuery();
	con.Close();
	ListeyiGuncelle();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	int miktar = Int32::Parse(numericUpDown1->Text);
	String^ numara = textBox1->Text;

	String^ connectionString = "Data Source=ENES\\SQLEXPRESS;Initial Catalog=DbEticaretSistemi;Integrated Security=True;Connect Timeout=60;Encrypt=True;TrustServerCertificate=True";
	SqlConnection con(connectionString);
	con.Open();

	String^ sqlQuery = "UPDATE Urunler set Stok=Stok - @miktar where Numara = @numara";
	SqlCommand^ cmd = gcnew SqlCommand(sqlQuery, % con);

	cmd->Parameters->Add("miktar", SqlDbType::Int)->Value = miktar;
	cmd->Parameters->Add("Numara", SqlDbType::VarChar, 50)->Value = numara;

	cmd->ExecuteNonQuery();
	con.Close();
	ListeyiGuncelle();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ connectionString = "Data Source=ENES\\SQLEXPRESS;Initial Catalog=DbEticaretSistemi;Integrated Security=True;Connect Timeout=60;Encrypt=True;TrustServerCertificate=True";
	SqlConnection con(connectionString);
	con.Open();

	String^ sqlQuery = "DELETE FROM Urunler WHERE Numara = @Numara";

	SqlCommand^ cmd = gcnew SqlCommand(sqlQuery,% con);
	cmd->Parameters->AddWithValue("@Numara", textBox1->Text);
	cmd->ExecuteNonQuery();
	con.Close();
	ListeyiGuncelle();
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
	textBox5->Text = "";
	textBox6->Text = "";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connectionString = "Data Source=ENES\\SQLEXPRESS;Initial Catalog=DbEticaretSistemi;Integrated Security=True;Connect Timeout=60;Encrypt=True;TrustServerCertificate=True";
	SqlConnection con(connectionString);
	con.Open();

	String^ sqlQuery = "UPDATE Urunler SET Stok = @Stok, Fiyat = @Fiyat, Foto = @Foto, Baslik=@Baslik, Aciklama=@Aciklama WHERE Numara = @Numara";
	SqlCommand^ cmd = gcnew SqlCommand(sqlQuery,% con);
	
	cmd->Parameters->AddWithValue("@Numara", textBox1->Text);
	cmd->Parameters->AddWithValue("@Stok", textBox3->Text);
	cmd->Parameters->AddWithValue("@Fiyat", textBox4->Text);
	cmd->Parameters->AddWithValue("@Foto", textBox6->Text);
	cmd->Parameters->AddWithValue("@Baslik", textBox2->Text);
	cmd->Parameters->AddWithValue("@Aciklama", textBox5->Text);

	cmd->ExecuteNonQuery();
	con.Close();
	ListeyiGuncelle();
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
	textBox5->Text = "";
	textBox6->Text = "";
}
};
}
