#pragma once

namespace ETicaretYönetimSistemi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Siparisler için özet
	/// </summary>
	public ref class Siparisler : public System::Windows::Forms::Form
	{
	public:
		Siparisler(void)
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
		~Siparisler()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// Siparisler
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Yellow;
			this->ClientSize = System::Drawing::Size(867, 426);
			this->Name = L"Siparisler";
			this->Text = L"Siparisler";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
