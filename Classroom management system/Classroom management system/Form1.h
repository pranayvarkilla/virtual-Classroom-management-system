#pragma once

// uncomment to execute the rk1-utils:
//    #include "rk1_Utils_demo.h"  // shows how the rk1-utils can be used

#include "Header1.h"
#include "Header2.h"

namespace CppCLRWinFormsProject {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for Form1
    /// </summary>
    public ref class Form1 : public System::Windows::Forms::Form
    {
    public:
        Form1(void)
        {
            InitializeComponent();
            //
            //TODO: Add the constructor code here
            //

            // uncomment to execute the rk1-utils:
            //    N_rk1_Utils_demo::execute(); // shows how the rk1-utils can be used

        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~Form1()
        {
            if (components)
            {
                delete components;
            }
        }


    private: System::Windows::Forms::Button^ button_Teacher;
    private: System::Windows::Forms::Button^ button_Student;
    private: System::Windows::Forms::Label^ Virtual_Classroom_management_System;


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
            this->button_Teacher = (gcnew System::Windows::Forms::Button());
            this->button_Student = (gcnew System::Windows::Forms::Button());
            this->Virtual_Classroom_management_System = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // button_Teacher
            // 
            this->button_Teacher->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->button_Teacher->Location = System::Drawing::Point(254, 174);
            this->button_Teacher->Name = L"button_Teacher";
            this->button_Teacher->Size = System::Drawing::Size(93, 37);
            this->button_Teacher->TabIndex = 2;
            this->button_Teacher->Text = L"Teacher";
            this->button_Teacher->UseVisualStyleBackColor = true;
            this->button_Teacher->Click += gcnew System::EventHandler(this, &Form1::button_Teacher_Click);
            // 
            // button_Student
            // 
            this->button_Student->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->button_Student->Location = System::Drawing::Point(254, 217);
            this->button_Student->Name = L"button_Student";
            this->button_Student->Size = System::Drawing::Size(93, 40);
            this->button_Student->TabIndex = 3;
            this->button_Student->Text = L"Student";
            this->button_Student->UseVisualStyleBackColor = true;
            this->button_Student->Click += gcnew System::EventHandler(this, &Form1::button_Student_Click);
            // 
            // Virtual_Classroom_management_System
            // 
            this->Virtual_Classroom_management_System->AutoSize = true;
            this->Virtual_Classroom_management_System->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->Virtual_Classroom_management_System->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->Virtual_Classroom_management_System->Location = System::Drawing::Point(115, 109);
            this->Virtual_Classroom_management_System->Name = L"Virtual_Classroom_management_System";
            this->Virtual_Classroom_management_System->Size = System::Drawing::Size(424, 25);
            this->Virtual_Classroom_management_System->TabIndex = 20;
            this->Virtual_Classroom_management_System->Text = L"Virtual Classroom Management System";
            this->Virtual_Classroom_management_System->Click += gcnew System::EventHandler(this, &Form1::Virtual_Classroom_management_System_Click);
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::Silver;
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->ClientSize = System::Drawing::Size(612, 427);
            this->Controls->Add(this->Virtual_Classroom_management_System);
            this->Controls->Add(this->button_Student);
            this->Controls->Add(this->button_Teacher);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->Name = L"Form1";
            this->Text = L"Form1";
            this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

        // You can call the functions at a button click. If you prefer, 
         // you can call them by clicking a menu item.

    private: System::Void button_Teacher_Click(System::Object^ sender, System::EventArgs^ e)
    {
        int n = Convert::ToInt32(in_textBox->Text);
        int result = N_header_1::Teacher(n);
        out_textBox->AppendText(String::Format("Teacher({0})={1}\r\n", n, result));
    }

    private: System::Void button_Student_Click(System::Object^ sender, System::EventArgs^ e)
    {
        N_header_2::Student_Click(in_textBox, out_textBox);
    }



    private: System::Void Virtual_Classroom_management_System_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
    }
}; // end of class Form1
} // end of namespace CppCLRWinFormsProject

