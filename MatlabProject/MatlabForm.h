#pragma once
#include "MatlabHeader.h"											// include Matlab header file to deal with it

namespace MatlabProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::Runtime::InteropServices;
	using namespace MatlabForm;

	public ref class MatlabForm : public System::Windows::Forms::Form
	{
	public:
		MatlabForm(void)
		{
			// intialize for GUI.
			InitializeComponent();
			// take object from matlab.
			matlab = gcnew CMatlab(this);
		}

	protected:
		~MatlabForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: MatlabProject::CMatlab ^ matlab;
	private: void closeAll(Engine *eng) {
		// close function to clea matlab memory and close it.
		engEvalString(eng, "clear all;clc;close all force;exit;");
		engClose(eng);
		}


#pragma region Windows Form Designer generated code
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MatlabForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(309, 87);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 81);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MatlabForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(110, 87);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(193, 23);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"1./(1.+exp(-x))";
			this->textBox1->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold));
			this->textBox2->Location = System::Drawing::Point(110, 116);
			this->textBox2->MaxLength = 6;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(193, 23);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"100";
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MatlabForm::textBox2_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"F( X ) =";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(12, 119);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Accuracy :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(313, 179);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 13);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Event :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 216);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(280, 13);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Under permission of Prof. Dr. Mahmoud Mahmoud El-Alem";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(317, 212);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(114, 21);
			this->button3->TabIndex = 22;
			this->button3->Text = L"About";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MatlabForm::button3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(13, 177);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 16);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Answer =";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold));
			this->textBox3->Location = System::Drawing::Point(110, 145);
			this->textBox3->MaxLength = 4;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(80, 23);
			this->textBox3->TabIndex = 24;
			this->textBox3->Text = L"-2";
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MatlabForm::textBox3_KeyPress);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(13, 149);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(95, 16);
			this->label6->TabIndex = 25;
			this->label6->Text = L"Intrval from";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold));
			this->label7->Location = System::Drawing::Point(196, 148);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(23, 16);
			this->label7->TabIndex = 26;
			this->label7->Text = L"to";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold));
			this->textBox4->Location = System::Drawing::Point(225, 145);
			this->textBox4->MaxLength = 4;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(78, 23);
			this->textBox4->TabIndex = 27;
			this->textBox4->Text = L"2";
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MatlabForm::textBox4_KeyPress);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold));
			this->textBox5->Location = System::Drawing::Point(110, 174);
			this->textBox5->MaxLength = 12;
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(193, 23);
			this->textBox5->TabIndex = 28;
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold));
			this->label8->Location = System::Drawing::Point(13, 13);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(417, 46);
			this->label8->TabIndex = 29;
			this->label8->Text = L"Enter your function as F(X)  for calculate area between it and X-axis";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 59);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(222, 13);
			this->label9->TabIndex = 30;
			this->label9->Text = L"Note : write dot ( . ) befor any binary opreation";
			// 
			// MatlabForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(442, 238);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Location = System::Drawing::Point(100, 100);
			this->Name = L"MatlabForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Matlab Interface";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MatlabForm::MatlabForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MatlabForm::MatlabForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MatlabForm_Load(System::Object^  sender, System::EventArgs^  e) {
		
		// check if matlab engine is work or not.
		if (matlab->eng == NULL)label3->Text += "\nMatlab crash";
		if (matlab->eng != NULL)label3->Text += "\nMatlab work";
		// give the user to acsess the engine
		if (matlab->eng != NULL)textBox1->Visible = true;

	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
		// declaring array of char that will send to matlab to execut for calling numericalCheck.m function.
		char STR1[] = " numericalCheck(a, b, i, @(x)";
		// declaring array of char that will send to matlab to execut for putting user f(x) in numericalCheck.m function. 
		char* STR2 = (char*)(Marshal::StringToHGlobalAnsi(textBox1->Text)).ToPointer();
		// declaring array of char that will send to matlab to execut for closing numericalCheck.m function brackets.
		char STR3[] = { ");" };
		// declaring dynamic array of char that will send to matlab to execut.
		char* commandLine = (char*)malloc((sizeof(STR1) * sizeof(char)) + (sizeof(STR2) * sizeof(char) - 1) + (sizeof(STR3) * sizeof(char) - 1));

		// declaring pointer for taking data from matlab engine.
		double *matID,

		// taking input from the user in c plus plus double variable.
		I = Convert::ToDouble(textBox2->Text),
		A = Convert::ToDouble(textBox3->Text),
		B = Convert::ToDouble(textBox4->Text);

		// declaring pointer in matlab engine.
		mxArray *ptr = NULL,
				*i = mxCreateDoubleScalar(1),
				*a = mxCreateDoubleScalar(1),
				*b = mxCreateDoubleScalar(1);

		// copy the user input from C plus plus to matlab engine (!importance).
		memcpy((void *)mxGetPr(i), &I, sizeof(I));
		memcpy((void *)mxGetPr(a), &A, sizeof(A));
		memcpy((void *)mxGetPr(b), &B, sizeof(B));

		// deal with matlab to declare matlab engine pointer in matlab itself.
		engPutVariable(matlab->eng, "i", i);
		engPutVariable(matlab->eng, "a", a);
		engPutVariable(matlab->eng, "b", b);

		// put all arrays of char in one that will be send to matlab to execut.
		strcpy(commandLine, STR1);
		strcat(commandLine, STR2);
		strcat(commandLine, STR3);

		// sending all things to matlab engine :D .
		engEvalString(matlab->eng, commandLine);
		// making result variable to take the answer.
		engEvalString(matlab->eng, "result=ans");

		// making matlab engine pointer point on matlab result.
		ptr = engGetVariable(matlab->eng, "result");
		// making C plus plus pointer point on matlab engine result.

		matID = mxGetPr(ptr);

		// output the result into a textbox.
		textBox5->Text = Convert::ToString((*(matID)));
	}

	private: System::Void MatlabForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {

		// close every thing and clear all data in matlab.
		closeAll(matlab->eng);

	}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

	// about button for rights.
	MessageBox::Show("Samir Moustafa Soliman Abozid\nCollege ID : 20161503712\nCopyright © 2016 Faculty of Science Alexandria University\nUnder permission of Prof.Dr.Mahmoud Mahmoud El - Alem\nFor communication with programmer samir.moustafa.97@gmail.com\nNOTICE:  All information contained herein is blocked, and remains\nthe property of Faculty Systems Incorporated and its suppliers,if any.The intellectual and technical concepts contained herein are proprietary to Faculty Systems Incorporated and its suppliers and may be covered by Egypt,patents in process, and are protected by trade secret or copyright law.\nDissemination of this information or reproduction of this material is strictly forbidden unless prior written permission is obtained from Faculty Incorporated.","About the Programmer");
}

private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {

	//block any string from enter to textbox
	if (e->KeyChar == '.') {
		if (this->textBox2->Text->Contains(".") && !this->textBox2->SelectedText->Contains("."))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->textBox2->Text->Contains("-"))) {
		e->Handled = true;
		textBox2->Text = "-" + textBox2->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void textBox3_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	//block any string from enter to textbox
	if (e->KeyChar == '.') {
		if (this->textBox3->Text->Contains(".") && !this->textBox3->SelectedText->Contains("."))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->textBox3->Text->Contains("-"))) {
		e->Handled = true;
		textBox3->Text = "-" + textBox3->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void textBox4_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	//block any string from enter to textbox
	if (e->KeyChar == '.') {
		if (this->textBox4->Text->Contains(".") && !this->textBox4->SelectedText->Contains("."))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->textBox4->Text->Contains("-"))) {
		e->Handled = true;
		textBox4->Text = "-" + textBox4->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
};
}
