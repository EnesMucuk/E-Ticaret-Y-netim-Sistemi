#pragma once

namespace ETicaretY�netimSistemi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
			this->SuspendLayout();
			// 
			// Satislar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SpringGreen;
			this->ClientSize = System::Drawing::Size(867, 426);
			this->Name = L"Satislar";
			this->Text = L"Satislar";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
