#pragma once
#include<iostream>
#include<vector>
#include"Oper.h"
#include "Func.h"


namespace graycalculator {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	Oper^ bec;	
	Oper bec1;

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(12, 106);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(37, 36);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"0";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(58, 67);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(85, 36);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"1";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(58, 138);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(85, 36);
			this->textBox3->TabIndex = 2;
			this->textBox3->Text = L"1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(55, 106);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"__________";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(288, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"__________";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(245, 106);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(37, 36);
			this->textBox4->TabIndex = 5;
			this->textBox4->Text = L"0";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(291, 67);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(85, 36);
			this->textBox5->TabIndex = 6;
			this->textBox5->Text = L"1";
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(291, 138);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(85, 36);
			this->textBox6->TabIndex = 7;
			this->textBox6->Text = L"1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(178, 106);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 58);
			this->label3->TabIndex = 8;
			this->label3->Text = L"*";
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox8->Location = System::Drawing::Point(188, 197);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(85, 36);
			this->textBox8->TabIndex = 10;
			this->textBox8->Text = L"1";
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox9->Location = System::Drawing::Point(188, 268);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(85, 36);
			this->textBox9->TabIndex = 11;
			this->textBox9->Text = L"1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(185, 236);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 17);
			this->label4->TabIndex = 4;
			this->label4->Text = L"__________";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(12, 238);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(133, 29);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Результат";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(527, 70);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(72, 52);
			this->button1->TabIndex = 13;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(605, 70);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(72, 52);
			this->button2->TabIndex = 14;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(683, 70);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(72, 52);
			this->button3->TabIndex = 15;
			this->button3->Text = L"*";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(761, 70);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(72, 52);
			this->button4->TabIndex = 16;
			this->button4->Text = L"/";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(839, 70);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(72, 52);
			this->button5->TabIndex = 17;
			this->button5->Text = L"pow";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(527, 226);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(72, 52);
			this->button6->TabIndex = 18;
			this->button6->Text = L"С/Д";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(605, 226);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(72, 52);
			this->button7->TabIndex = 19;
			this->button7->Text = L"Ч/С";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(683, 226);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(72, 52);
			this->button8->TabIndex = 20;
			this->button8->Text = L"С/З";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(761, 226);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(72, 52);
			this->button9->TabIndex = 21;
			this->button9->Text = L"О/Д";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(839, 226);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(72, 52);
			this->button10->TabIndex = 22;
			this->button10->Text = L"С/Р";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox10->Location = System::Drawing::Point(839, 128);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(72, 45);
			this->textBox10->TabIndex = 23;
			this->textBox10->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(522, 197);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(404, 25);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Действия выполняемые с \"Результатом\"";
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox11->Location = System::Drawing::Point(383, 233);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(85, 36);
			this->textBox11->TabIndex = 25;
			this->textBox11->Text = L"1";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(319, 236);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(28, 29);
			this->label7->TabIndex = 26;
			this->label7->Text = L"=";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(7, 349);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(257, 87);
			this->label8->TabIndex = 27;
			this->label8->Text = L"    Результат в виде\r\nнеправильной дроби\r\n\r\n";
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(12, 412);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(252, 70);
			this->button11->TabIndex = 28;
			this->button11->Text = L"перевести результат";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(292, 385);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(85, 36);
			this->textBox7->TabIndex = 29;
			this->textBox7->Text = L"0";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(380, 385);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(88, 17);
			this->label9->TabIndex = 30;
			this->label9->Text = L"__________";
			// 
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox12->Location = System::Drawing::Point(383, 346);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(85, 36);
			this->textBox12->TabIndex = 31;
			this->textBox12->Text = L"0";
			// 
			// textBox13
			// 
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox13->Location = System::Drawing::Point(383, 421);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(85, 36);
			this->textBox13->TabIndex = 32;
			this->textBox13->Text = L"0";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(963, 494);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
/////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	{
		bec1.t1 = Convert::ToInt32(textBox1->Text);
		bec1.t2 = Convert::ToInt32(textBox2->Text);
		bec1.t3 = Convert::ToInt32(textBox3->Text);
		bec1.t4 = Convert::ToInt32(textBox4->Text);
		bec1.t5 = Convert::ToInt32(textBox5->Text);
		bec1.t6 = Convert::ToInt32(textBox6->Text);
		bec1.t7 = Convert::ToInt32(textBox7->Text);
		bec1.t8 = Convert::ToInt32(textBox8->Text);
		bec1.t9 = Convert::ToInt32(textBox9->Text);
		bec1.t10 = Convert::ToInt32(textBox10->Text);
		bec1.t11 = Convert::ToDouble(textBox11->Text);
		bec1.t12 = Convert::ToInt32(textBox12->Text);
		bec1.t13 = Convert::ToInt32(textBox13->Text);
	}
		
		label3->Text = "+";
		int Z1 = Convert::ToInt32(textBox3->Text);
		int Z2 = Convert::ToInt32(textBox6->Text);
		int SCh1 = Convert::ToInt32(textBox3->Text) * Convert::ToInt32(textBox1->Text) + Convert::ToInt32(textBox2->Text);
		int SCh2 = Convert::ToInt32(textBox6->Text) * Convert::ToInt32(textBox4->Text) + Convert::ToInt32(textBox5->Text);
		int Z = Z1 * Z2;
		int SCh = SCh1 * Z2 + SCh2 * Z1;
		double res = (float(SCh) / Z);
		textBox8->Text = (String::Format("{0}", SCh));
		textBox9->Text = (String::Format("{0}", Z));
		textBox11->Text= (String::Format("{0}",res )); 
		

		////Oper b;
		//Oper op;
		//op.C = Convert::ToInt32(textBox7->Text);
		//op.C1 = Convert::ToInt32(textBox1->Text);
		//vec->push_back(op);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	{
		bec1.t1 = Convert::ToInt32(textBox1->Text);
		bec1.t2 = Convert::ToInt32(textBox2->Text);
		bec1.t3 = Convert::ToInt32(textBox3->Text);
		bec1.t4 = Convert::ToInt32(textBox4->Text);
		bec1.t5 = Convert::ToInt32(textBox5->Text);
		bec1.t6 = Convert::ToInt32(textBox6->Text);
		bec1.t7 = Convert::ToInt32(textBox7->Text);
		bec1.t8 = Convert::ToInt32(textBox8->Text);
		bec1.t9 = Convert::ToInt32(textBox9->Text);
		bec1.t10 = Convert::ToInt32(textBox10->Text);
		bec1.t11 = Convert::ToDouble(textBox11->Text);
		bec1.t12 = Convert::ToInt32(textBox12->Text);
		bec1.t13 = Convert::ToInt32(textBox13->Text);
	}
	label3->Text = "-";
	/*if (Z != 0, SCh != 0)
	{
			sokr(SCh, Z);
	}*/
	int Z1 = Convert::ToInt32(textBox3->Text);
	int Z2 = Convert::ToInt32(textBox6->Text);
	int SCh1 = Convert::ToInt32(textBox3->Text) * Convert::ToInt32(textBox1->Text) + Convert::ToInt32(textBox2->Text);
	int SCh2 = Convert::ToInt32(textBox6->Text) * Convert::ToInt32(textBox4->Text) + Convert::ToInt32(textBox5->Text);
	int Z = Z1 * Z2;
	int SCh = SCh1 * Z2 - SCh2 * Z1;
	
	double res = (float(SCh) / Z);
	textBox11->Text = (String::Format("{0}", res));
	textBox8->Text = (String::Format("{0}", SCh));
	textBox9->Text = (String::Format("{0}", Z));
	
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	{
		bec1.t1 = Convert::ToInt32(textBox1->Text);
		bec1.t2 = Convert::ToInt32(textBox2->Text);
		bec1.t3 = Convert::ToInt32(textBox3->Text);
		bec1.t4 = Convert::ToInt32(textBox4->Text);
		bec1.t5 = Convert::ToInt32(textBox5->Text);
		bec1.t6 = Convert::ToInt32(textBox6->Text);
		bec1.t7 = Convert::ToInt32(textBox7->Text);
		bec1.t8 = Convert::ToInt32(textBox8->Text);
		bec1.t9 = Convert::ToInt32(textBox9->Text);
		bec1.t10 = Convert::ToInt32(textBox10->Text);
		bec1.t11 = Convert::ToDouble(textBox11->Text);
		bec1.t12 = Convert::ToInt32(textBox12->Text);
		bec1.t13 = Convert::ToInt32(textBox13->Text);
	}
	label3->Text = "*";
	int Z1 = Convert::ToInt32(textBox3->Text);
	int Z2 = Convert::ToInt32(textBox6->Text);
	int Z = Z1 * Z2;
	int SCh1 = Convert::ToInt32(textBox3->Text) * Convert::ToInt32(textBox1->Text) + Convert::ToInt32(textBox2->Text);
	int SCh2 = Convert::ToInt32(textBox6->Text) * Convert::ToInt32(textBox4->Text) + Convert::ToInt32(textBox5->Text);
	int SCh = SCh1 * SCh2;

	double res = (float(SCh) / Z);
	textBox11->Text = (String::Format("{0}", res));
	textBox8->Text = (String::Format("{0}", SCh));
	textBox9->Text = (String::Format("{0}", Z));
	
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	{
		bec1.t1 = Convert::ToInt32(textBox1->Text);
		bec1.t2 = Convert::ToInt32(textBox2->Text);
		bec1.t3 = Convert::ToInt32(textBox3->Text);
		bec1.t4 = Convert::ToInt32(textBox4->Text);
		bec1.t5 = Convert::ToInt32(textBox5->Text);
		bec1.t6 = Convert::ToInt32(textBox6->Text);
		bec1.t7 = Convert::ToInt32(textBox7->Text);
		bec1.t8 = Convert::ToInt32(textBox8->Text);
		bec1.t9 = Convert::ToInt32(textBox9->Text);
		bec1.t10 = Convert::ToInt32(textBox10->Text);
		bec1.t11 = Convert::ToDouble(textBox11->Text);
		bec1.t12 = Convert::ToInt32(textBox12->Text);
		bec1.t13 = Convert::ToInt32(textBox13->Text);
	}
	label3->Text = "/";
	int Z1 = Convert::ToInt32(textBox3->Text);
	int Z2 = Convert::ToInt32(textBox6->Text);
	int SCh1 = Convert::ToInt32(textBox3->Text) * Convert::ToInt32(textBox1->Text) + Convert::ToInt32(textBox2->Text);
	int SCh2 = Convert::ToInt32(textBox6->Text) * Convert::ToInt32(textBox4->Text) + Convert::ToInt32(textBox5->Text);
	int SCh = SCh1 * Z2;
	int Z = Z1 * SCh2;

	/*if (Z != 0, SCh != 0)
	{
		sokr(SCh, Z);
	}*/
	double res = (float(SCh) / Z);
	textBox11->Text = (String::Format("{0}", res));
	textBox8->Text = (String::Format("{0}", SCh));
	textBox9->Text = (String::Format("{0}", Z));
	
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
{
	{
		bec1.t1 = Convert::ToInt32(textBox1->Text);
		bec1.t2 = Convert::ToInt32(textBox2->Text);
		bec1.t3 = Convert::ToInt32(textBox3->Text);
		bec1.t4 = Convert::ToInt32(textBox4->Text);
		bec1.t5 = Convert::ToInt32(textBox5->Text);
		bec1.t6 = Convert::ToInt32(textBox6->Text);
		bec1.t7 = Convert::ToInt32(textBox7->Text);
		bec1.t8 = Convert::ToInt32(textBox8->Text);
		bec1.t9 = Convert::ToInt32(textBox9->Text);
		bec1.t10 = Convert::ToInt32(textBox10->Text);
		bec1.t11 = Convert::ToDouble(textBox11->Text);
		bec1.t12 = Convert::ToInt32(textBox12->Text);
		bec1.t13 = Convert::ToInt32(textBox13->Text);
	}
	label3->Text = "^";
	int Pow = Convert::ToInt32(textBox10->Text);
	int Z1 = Convert::ToInt32(textBox3->Text);
	int SCh1 = Convert::ToInt32(textBox3->Text) * Convert::ToInt32(textBox1->Text) + Convert::ToInt32(textBox2->Text);
	int SCh = pow(SCh1, Pow);
	int  Z = pow(Z1, Pow);

	double res = (float(SCh) / Z);
	textBox11->Text = (String::Format("{0}", res));
	textBox8->Text = (String::Format("{0}", SCh));
	textBox9->Text = (String::Format("{0}", Z));
	
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) 
{
	{
		bec1.t1 = Convert::ToInt32(textBox1->Text);
		bec1.t2 = Convert::ToInt32(textBox2->Text);
		bec1.t3 = Convert::ToInt32(textBox3->Text);
		bec1.t4 = Convert::ToInt32(textBox4->Text);
		bec1.t5 = Convert::ToInt32(textBox5->Text);
		bec1.t6 = Convert::ToInt32(textBox6->Text);
		bec1.t7 = Convert::ToInt32(textBox7->Text);
		bec1.t8 = Convert::ToInt32(textBox8->Text);
		bec1.t9 = Convert::ToInt32(textBox9->Text);
		bec1.t10 = Convert::ToInt32(textBox10->Text);
		bec1.t11 = Convert::ToDouble(textBox11->Text);
		bec1.t12 = Convert::ToInt32(textBox12->Text);
		bec1.t13 = Convert::ToInt32(textBox13->Text);
	}
	int SCh = Convert::ToInt32(textBox8->Text);
	int Z = Convert::ToInt32(textBox9->Text);
	
	
	sokr(SCh, Z);
	double res = (float(SCh) / Z);
	textBox11->Text = (String::Format("{0}", res));
	textBox8->Text = (String::Format("{0}", SCh));
	textBox9->Text = (String::Format("{0}", Z));
	
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) 
{
	{
		bec1.t1 = Convert::ToInt32(textBox1->Text);
		bec1.t2 = Convert::ToInt32(textBox2->Text);
		bec1.t3 = Convert::ToInt32(textBox3->Text);
		bec1.t4 = Convert::ToInt32(textBox4->Text);
		bec1.t5 = Convert::ToInt32(textBox5->Text);
		bec1.t6 = Convert::ToInt32(textBox6->Text);
		bec1.t7 = Convert::ToInt32(textBox7->Text);
		bec1.t8 = Convert::ToInt32(textBox8->Text);
		bec1.t9 = Convert::ToInt32(textBox9->Text);
		bec1.t10 = Convert::ToInt32(textBox10->Text);
		bec1.t11 = Convert::ToDouble(textBox11->Text);
		bec1.t12 = Convert::ToInt32(textBox12->Text);
		bec1.t13 = Convert::ToInt32(textBox13->Text);
	}
	int SCh = Convert::ToInt32(textBox8->Text);
	int Z = Convert::ToInt32(textBox9->Text);
	
	//fixz(C, SCh, Z);
	textBox8->Text = (String::Format("{0}", Z));
	textBox9->Text = (String::Format("{0}", SCh));
	int SCh2 = Convert::ToInt32(textBox8->Text);
	int Z2= Convert::ToInt32(textBox9->Text);
	double res = (float(SCh2) / Z2);
	textBox11->Text = (String::Format("{0}", res));
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) 
{
	{
		bec1.t1 = Convert::ToInt32(textBox1->Text);
		bec1.t2 = Convert::ToInt32(textBox2->Text);
		bec1.t3 = Convert::ToInt32(textBox3->Text);
		bec1.t4 = Convert::ToInt32(textBox4->Text);
		bec1.t5 = Convert::ToInt32(textBox5->Text);
		bec1.t6 = Convert::ToInt32(textBox6->Text);
		bec1.t7 = Convert::ToInt32(textBox7->Text);
		bec1.t8 = Convert::ToInt32(textBox8->Text);
		bec1.t9 = Convert::ToInt32(textBox9->Text);
		bec1.t10 = Convert::ToInt32(textBox10->Text);
		bec1.t11 = Convert::ToDouble(textBox11->Text);
		bec1.t12 = Convert::ToInt32(textBox12->Text);
		bec1.t13 = Convert::ToInt32(textBox13->Text);
	}
	int Z = Convert::ToInt32(textBox9->Text);
	int SCh = Convert::ToInt32(textBox8->Text);
	if (SCh * Z > 0)
	{
		Z = abs(Z);
		SCh = abs(SCh);
		SCh *= -1;
	}
	else if (SCh * Z < 0)
	{
		Z = abs(Z);
		SCh = abs(SCh);
	}
	double res = (float(SCh) / Z);
	textBox11->Text = (String::Format("{0}", res));
	textBox8->Text = (String::Format("{0}", SCh));
	textBox9->Text = (String::Format("{0}", Z));
	
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e)
{
	textBox1->Text = (String::Format("{0}", bec1.t1));
	textBox2->Text = (String::Format("{0}", bec1.t2));
	textBox3->Text = (String::Format("{0}", bec1.t3));
	textBox4->Text = (String::Format("{0}", bec1.t4));
	textBox5->Text = (String::Format("{0}", bec1.t5));
	textBox6->Text = (String::Format("{0}", bec1.t6));
	textBox7->Text = (String::Format("{0}", bec1.t7));
	textBox8->Text = (String::Format("{0}", bec1.t8));
	textBox9->Text = (String::Format("{0}", bec1.t9));
	textBox10->Text = (String::Format("{0}", bec1.t10));
	textBox11->Text = (String::Format("{0}", bec1.t11));
	textBox12->Text = (String::Format("{0}", bec1.t12));
	textBox13->Text = (String::Format("{0}", bec1.t13));

}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) 
{
	textBox11->Text = "0";
	textBox9->Text = "0";
	textBox8->Text = "0";

}  
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) 
{
	int SCh = Convert::ToInt32(textBox8->Text);
	int Z = Convert::ToInt32(textBox9->Text);
	int C = 0;

	if (abs(SCh) > Z)
	{
		int k = SCh / Z;
		C += k;
		SCh %= Z;
		/*if (Z == 1)
			SCh = 1;*/
	}
	if (C == Z && C == SCh) Z = SCh = 0;
	if (SCh == Z&& SCh!=Z!=0)
	{
		C++;
		SCh = Z = 0;
	}	
	SCh = abs(SCh);
	Z = abs(Z);
	textBox7->Text = (String::Format("{0}", C));
	textBox12->Text = (String::Format("{0}", SCh));
	textBox13->Text = (String::Format("{0}", Z));
}
/////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////

private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}

};
}
