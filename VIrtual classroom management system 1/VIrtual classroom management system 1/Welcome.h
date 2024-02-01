#pragma once
#include "StudentLogin.h"

namespace VIrtualclassroommanagementsystem1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Welcome
	/// </summary>
	public ref class Welcome : public System::Windows::Forms::Form
	{
	public:
		Welcome(void)
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
		~Welcome()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ StudentLogin;
	protected:

	private: System::Windows::Forms::Button^ button2;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->StudentLogin = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(31, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(384, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Virtual Classroom Management System";
			// 
			// StudentLogin
			// 
			this->StudentLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StudentLogin->Location = System::Drawing::Point(168, 120);
			this->StudentLogin->Name = L"StudentLogin";
			this->StudentLogin->Size = System::Drawing::Size(93, 44);
			this->StudentLogin->TabIndex = 1;
			this->StudentLogin->Text = L"Student";
			this->StudentLogin->UseVisualStyleBackColor = true;
			this->StudentLogin->Click += gcnew System::EventHandler(this, &Welcome::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(168, 170);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(93, 41);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Admin";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// Welcome
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(447, 320);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->StudentLogin);
			this->Controls->Add(this->label1);
			this->Name = L"Welcome";
			this->Text = L"Welcome";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Instantiate the StudentLogin form
		VIrtualclassroommanagementsystem1::StudentLogin^ studentLoginForm = gcnew VIrtualclassroommanagementsystem1::StudentLogin;

		// Show the StudentLogin form
		studentLoginForm->Show();

		// Optionally, hide the current form (Welcome form)
		this->Hide();
	}
	};

} // end of namespace VIrtualclassroommanagementsystem1
