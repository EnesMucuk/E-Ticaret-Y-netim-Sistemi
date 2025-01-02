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
	/// AlisverisEkrani için özet
	/// </summary>
	public ref class AlisverisEkrani : public System::Windows::Forms::Form
	{
	public:
		AlisverisEkrani(void)
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
		~AlisverisEkrani()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ Sutun1;


	private: System::Windows::Forms::ImageList^ ýmageList1;
	private: System::Windows::Forms::ColumnHeader^ Sutun2;
	private: System::Windows::Forms::ColumnHeader^ Sutun3;
	private: System::Windows::Forms::ColumnHeader^ Sutun4;
	private: System::Windows::Forms::ListView^ listView2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;


	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button2;






	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		///Gerekli tasarýmcý deðiþkeni.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Tasarýmcý desteði için gerekli metot - bu metodun 
		///içeriðini kod düzenleyici ile deðiþtirmeyin.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->Sutun1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->Sutun2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->Sutun3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->Sutun4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->ýmageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->Sutun1, this->Sutun2,
					this->Sutun3, this->Sutun4
			});
			this->listView1->FullRowSelect = true;
			this->listView1->HideSelection = false;
			this->listView1->LargeImageList = this->ýmageList1;
			this->listView1->Location = System::Drawing::Point(12, 12);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(555, 612);
			this->listView1->SmallImageList = this->ýmageList1;
			this->listView1->TabIndex = 1;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->ItemActivate += gcnew System::EventHandler(this, &AlisverisEkrani::listView1_ItemActivate);
			this->listView1->Click += gcnew System::EventHandler(this, &AlisverisEkrani::listView1_Click);
			// 
			// Sutun1
			// 
			this->Sutun1->Text = L"Fotoðraf";
			this->Sutun1->Width = 180;
			// 
			// Sutun2
			// 
			this->Sutun2->Text = L"Ürün";
			this->Sutun2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Sutun2->Width = 100;
			// 
			// Sutun3
			// 
			this->Sutun3->Text = L"Fiyat";
			this->Sutun3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Sutun3->Width = 100;
			// 
			// Sutun4
			// 
			this->Sutun4->Text = L"Bilgi";
			this->Sutun4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Sutun4->Width = 150;
			// 
			// ýmageList1
			// 
			this->ýmageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->ýmageList1->ImageSize = System::Drawing::Size(180, 180);
			this->ýmageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// listView2
			// 
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4
			});
			this->listView2->FullRowSelect = true;
			this->listView2->HideSelection = false;
			this->listView2->Location = System::Drawing::Point(783, 63);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(339, 208);
			this->listView2->TabIndex = 2;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			this->listView2->ColumnClick += gcnew System::Windows::Forms::ColumnClickEventHandler(this, &AlisverisEkrani::listView2_ColumnClick);
			this->listView2->ItemActivate += gcnew System::EventHandler(this, &AlisverisEkrani::listView2_ItemActivate);
			this->listView2->Click += gcnew System::EventHandler(this, &AlisverisEkrani::listView2_Click);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Ürün";
			this->columnHeader1->Width = 80;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Adet";
			this->columnHeader2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader2->Width = 80;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Fiyat";
			this->columnHeader3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader3->Width = 80;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Tutar";
			this->columnHeader4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader4->Width = 80;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(610, 99);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(126, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(610, 140);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(126, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(610, 175);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(126, 20);
			this->numericUpDown1->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(627, 217);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Sepete Ekle";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AlisverisEkrani::button1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Enabled = false;
			this->richTextBox1->Location = System::Drawing::Point(956, 354);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(113, 127);
			this->richTextBox1->TabIndex = 6;
			this->richTextBox1->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(976, 286);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Genell Toplam:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1069, 286);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 8;
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(783, 354);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(142, 127);
			this->richTextBox2->TabIndex = 9;
			this->richTextBox2->Text = L"";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(610, 354);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(126, 20);
			this->textBox3->TabIndex = 10;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(610, 408);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(126, 20);
			this->textBox4->TabIndex = 11;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &AlisverisEkrani::textBox4_TextChanged);
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(610, 461);
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(126, 20);
			this->maskedTextBox1->TabIndex = 12;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(607, 338);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(20, 13);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Ad";
			this->label3->Click += gcnew System::EventHandler(this, &AlisverisEkrani::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(607, 392);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Soyad";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(607, 445);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Telefon";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(610, 509);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(126, 20);
			this->textBox5->TabIndex = 11;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &AlisverisEkrani::textBox4_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(607, 493);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"E-mail";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(780, 338);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(34, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Adres";
			this->label7->Click += gcnew System::EventHandler(this, &AlisverisEkrani::label3_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(953, 338);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 13);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Sepet";
			this->label8->Click += gcnew System::EventHandler(this, &AlisverisEkrani::label3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(956, 506);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(113, 23);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Sipariþ Ver";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AlisverisEkrani::button2_Click);
			// 
			// AlisverisEkrani
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->ClientSize = System::Drawing::Size(1134, 636);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->listView2);
			this->Controls->Add(this->listView1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"AlisverisEkrani";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AlisverisEkrani";
			this->Load += gcnew System::EventHandler(this, &AlisverisEkrani::AlisverisEkrani_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AlisverisEkrani_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ connectionString = "Data Source=ENES\\SQLEXPRESS;Initial Catalog=DbEticaretSistemi;Integrated Security=SSPI";

		SqlConnection^ baglanti = gcnew SqlConnection(connectionString);
		baglanti->Open();

		String^ query = "SELECT COUNT(*) FROM Urunler";
		SqlCommand^ command = gcnew SqlCommand(query, baglanti);

		int rowCount = (int)command->ExecuteScalar();

		String^ query2 = "Select Foto,Baslik,Fiyat,Aciklama from Urunler";
		SqlCommand^ command2 = gcnew SqlCommand(query2, baglanti);
		SqlDataReader^ reader = command2->ExecuteReader();

		int imageIndex = 0;
		while (reader->Read())
		{
			String^ fotoPath = reader->GetString(0);
			this->ýmageList1->Images->Add(Image::FromFile(fotoPath));
			String^ urunAdi = reader->GetString(1);
			double fiyat = reader->GetDouble(2);
			String^ aciklama = reader->GetString(3);

			ListViewItem^ item = gcnew ListViewItem();

			
			if (System::IO::File::Exists(fotoPath))
			{
				item->ImageIndex = imageIndex;
				imageIndex++;
			}


			item->SubItems->Add(urunAdi);
			item->SubItems->Add(fiyat.ToString());
			item->SubItems->Add(aciklama);

			listView1->Items->Add(item);

		}
		
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void listView1_Click(System::Object^ sender, System::EventArgs^ e) {
	ListViewItem^ selectedItem = listView1->SelectedItems[0];
	String^ urun = selectedItem->SubItems[1]->Text; 
	String^ fiyat = selectedItem->SubItems[2]->Text;

	textBox1->Text = urun;
	textBox2->Text = fiyat;
}
private: System::Void listView1_ItemActivate(System::Object^ sender, System::EventArgs^ e) {
}
	   Double tutar = 0;
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (numericUpDown1->Value == 0)
	{
		MessageBox::Show("Lütfen adet seçiniz");
	}
	else
	{
		String^ urun = textBox1->Text;
		Decimal fiyat = Convert::ToDecimal(textBox2->Text);
		Decimal adet = numericUpDown1->Value;
		Decimal toplam = fiyat * adet;

		tutar += (Double)toplam;
		label2->Text = tutar.ToString();

		richTextBox1->Text += urun + "   " + adet + " adet    ";

		array<String^>^ bilgiler = { urun, adet.ToString(), fiyat.ToString(), toplam.ToString() };
		ListViewItem^ kayit = gcnew ListViewItem(bilgiler);
		listView2->Items->Add(kayit);

		int miktar = Int32::Parse(numericUpDown1->Text);

		String^ connectionString = "Data Source=ENES\\SQLEXPRESS;Initial Catalog=DbEticaretSistemi;Integrated Security=True;Connect Timeout=60;Encrypt=True;TrustServerCertificate=True";
		SqlConnection con(connectionString);
		con.Open();

		String^ sqlQuery = "UPDATE Urunler set Stok=Stok - @miktar where Baslik = @Baslik";
		SqlCommand^ cmd = gcnew SqlCommand(sqlQuery, % con);

		cmd->Parameters->Add("miktar", SqlDbType::Int)->Value = miktar;
		cmd->Parameters->Add("Baslik", SqlDbType::VarChar, 50)->Value = urun;

		cmd->ExecuteNonQuery();
		con.Close();

		textBox1->Text = "";
		textBox2->Text = "";
		numericUpDown1->Value = 0;
	}
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ urun = textBox1->Text;
	String^ adet = textBox2->Text;

	String^ connectionString = "Data Source=ENES\\SQLEXPRESS;Initial Catalog=DbEticaretSistemi;Integrated Security=True;Connect Timeout=60;Encrypt=True;TrustServerCertificate=True";
	SqlConnection con(connectionString);
	con.Open();

	String^ sqlQuery = "UPDATE Urunler set Stok=Stok + @adet where Baslik = @Baslik";
	SqlCommand^ cmd = gcnew SqlCommand(sqlQuery, % con);

	cmd->Parameters->Add("adet", SqlDbType::Int)->Value = adet;
	cmd->Parameters->Add("Baslik", SqlDbType::VarChar, 50)->Value = urun;

	cmd->ExecuteNonQuery();
	con.Close();

	if (listView1->FocusedItem != nullptr)
	{
		// Focuslanmýþ öðeyi al
		ListViewItem^ seciliItem = listView1->FocusedItem;

		// Focuslanmýþ öðeyi listeden sil
		listView1->Items->Remove(seciliItem);
	}
	else
	{
		MessageBox::Show("Silmek için bir öðe seçin.");
	}

	textBox1->Text = "";
	textBox2->Text = "";
	numericUpDown1->Value = 0;
}
private: System::Void listView2_ItemActivate(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listView2_ColumnClick(System::Object^ sender, System::Windows::Forms::ColumnClickEventArgs^ e) {
	
}
private: System::Void listView2_Click(System::Object^ sender, System::EventArgs^ e) {
	ListViewItem^ selectedItem = listView2->SelectedItems[0];
	String^ urun = selectedItem->SubItems[0]->Text;
	String^ fiyat = selectedItem->SubItems[1]->Text;

	textBox1->Text = urun;
	textBox2->Text = fiyat;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	Random^ random = gcnew Random();
	int sayi = random->Next(0, 1000001);

	String^ ad = this->textBox1->Text;
	String^ soyad = this->textBox2->Text;
	String^ telefon = this->maskedTextBox1->Text;
	String^ mail = this->textBox3->Text;
	String^ adres = this->richTextBox2->Text;
	String^ sepet = this->richTextBox1->Text;




	String^ connectionString = "Data Source=ENES\\SQLEXPRESS;Initial Catalog=DbEticaretSistemi;Integrated Security=True;Connect Timeout=60;Encrypt=True;TrustServerCertificate=True";
	SqlConnection con(connectionString);
	con.Open();

	String^ sqlQuery = "Insert into Siparisler values ('" + sayi.ToString() + "','" + this->textBox3->Text + "','" + this->textBox4->Text + "','" + this->maskedTextBox1->Text + "','" + this->textBox5->Text + "','" + this->richTextBox2->Text + "','" + this->richTextBox1->Text + "','" + "Siparis Alýndý" + "')";
	SqlCommand cmd(sqlQuery, % con);
	cmd.ExecuteNonQuery();
	con.Close();

	MessageBox::Show("Sipariþ Numarýnýz: '" +sayi +"'. Lütfen Numaranýzý Saklayýnýz.");

	this->textBox3->Text = "";
	this->textBox4->Text = "";
	this->textBox5->Text = "";
	this->maskedTextBox1->Text = "";
	this->richTextBox1->Text = "";
	this->richTextBox2->Text = "";
}
};
}
