#pragma once

namespace VIrtualclassroommanagementsystem1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TeacherLogin
	/// </summary>
	public ref class TeacherLogin : public System::Windows::Forms::Form
	{
	public:
		TeacherLogin(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TeacherLogin()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbemail;

	private: System::Windows::Forms::TextBox^ tbpassword;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btncancel;
	private: System::Windows::Forms::Label^ label1;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbemail = (gcnew System::Windows::Forms::TextBox());
			this->tbpassword = (gcnew System::Windows::Forms::TextBox());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btncancel = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(28, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Email";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(28, 157);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password";
			this->label3->Click += gcnew System::EventHandler(this, &TeacherLogin::label3_Click);
			// 
			// tbemail
			// 
			this->tbemail->Location = System::Drawing::Point(150, 98);
			this->tbemail->Name = L"tbemail";
			this->tbemail->Size = System::Drawing::Size(303, 22);
			this->tbemail->TabIndex = 3;
			this->tbemail->TextChanged += gcnew System::EventHandler(this, &TeacherLogin::tbemail_TextChanged);
			// 
			// tbpassword
			// 
			this->tbpassword->Location = System::Drawing::Point(150, 160);
			this->tbpassword->Name = L"tbpassword";
			this->tbpassword->PasswordChar = '*';
			this->tbpassword->Size = System::Drawing::Size(303, 22);
			this->tbpassword->TabIndex = 4;
			this->tbpassword->TextChanged += gcnew System::EventHandler(this, &TeacherLogin::textBox2_TextChanged);
			// 
			// btnOK
			// 
			this->btnOK->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOK->Location = System::Drawing::Point(88, 236);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(98, 42);
			this->btnOK->TabIndex = 5;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			// 
			// btncancel
			// 
			this->btncancel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btncancel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btncancel->Location = System::Drawing::Point(275, 236);
			this->btncancel->Name = L"btncancel";
			this->btncancel->Size = System::Drawing::Size(98, 42);
			this->btncancel->TabIndex = 7;
			this->btncancel->Text = L"Cancel";
			this->btncancel->UseVisualStyleBackColor = true;
			this->btncancel->Click += gcnew System::EventHandler(this, &TeacherLogin::btncancel_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(164, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(209, 32);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Teacher Login";
			this->label1->Click += gcnew System::EventHandler(this, &TeacherLogin::label1_Click_1);
			// 
			// TeacherLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(534, 367);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btncancel);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->tbpassword);
			this->Controls->Add(this->tbemail);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Name = L"TeacherLogin";
			this->Text = L"TeacherLogin";
			this->Load += gcnew System::EventHandler(this, &TeacherLogin::TeacherLogin_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TeacherLogin_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btncancel_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ email = this->tbemail->Text;
		String^ password = this->tbpassword->Text;

		if (email->Length == 0 || password->Length == 0) {
			MessageBox::Show("Please enter email and password", "Email or Password is empty", MessageBoxButtons::OK);
			return;
		}

	}
	private: System::Void tbemail_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
