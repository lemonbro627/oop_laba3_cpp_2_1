#pragma once
#include <string>
#include <C:\Users\lem0n\source\repos\oop_laba3_cpp\Drob.h>

Drob D1, D2;

namespace ooplaba3cpp {

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
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button25;

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
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button28);
			this->groupBox3->Controls->Add(this->button27);
			this->groupBox3->Controls->Add(this->button26);
			this->groupBox3->Controls->Add(this->button25);
			this->groupBox3->Controls->Add(this->button24);
			this->groupBox3->Controls->Add(this->button23);
			this->groupBox3->Controls->Add(this->button22);
			this->groupBox3->Controls->Add(this->button21);
			this->groupBox3->Location = System::Drawing::Point(12, 227);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(496, 107);
			this->groupBox3->TabIndex = 7;
			this->groupBox3->TabStop = false;
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(172, 78);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(157, 23);
			this->button28->TabIndex = 7;
			this->button28->Text = L"Дробь 2 / Дробь 1";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(173, 49);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(157, 23);
			this->button27->TabIndex = 6;
			this->button27->Text = L"Дробь 1 / Дробь 2";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(254, 20);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(75, 23);
			this->button26->TabIndex = 5;
			this->button26->Text = L"Произведение";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(173, 19);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(75, 23);
			this->button25->TabIndex = 4;
			this->button25->Text = L"Сумма";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(10, 78);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(157, 23);
			this->button24->TabIndex = 3;
			this->button24->Text = L"Дробь 1 = Дробь 2";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(10, 49);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(157, 23);
			this->button23->TabIndex = 2;
			this->button23->Text = L"Дробь 2 = Дробь 1";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(92, 19);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(75, 23);
			this->button22->TabIndex = 1;
			this->button22->Text = L"Разность";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(10, 20);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(75, 23);
			this->button21->TabIndex = 0;
			this->button21->Text = L"Сравнить";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(514, 19);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(227, 316);
			this->listBox1->TabIndex = 6;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button11);
			this->groupBox2->Controls->Add(this->button13);
			this->groupBox2->Controls->Add(this->button12);
			this->groupBox2->Controls->Add(this->textBox14);
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->textBox9);
			this->groupBox2->Controls->Add(this->textBox13);
			this->groupBox2->Controls->Add(this->textBox12);
			this->groupBox2->Controls->Add(this->button14);
			this->groupBox2->Controls->Add(this->button20);
			this->groupBox2->Controls->Add(this->button15);
			this->groupBox2->Controls->Add(this->button19);
			this->groupBox2->Controls->Add(this->button16);
			this->groupBox2->Controls->Add(this->button18);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->textBox11);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->button17);
			this->groupBox2->Controls->Add(this->textBox10);
			this->groupBox2->Location = System::Drawing::Point(263, 13);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(245, 209);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Дробь 2";
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(163, 178);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(57, 20);
			this->button11->TabIndex = 45;
			this->button11->Text = L"Убавить";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(126, 152);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(31, 20);
			this->button13->TabIndex = 40;
			this->button13->Text = L"--";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(100, 178);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(57, 20);
			this->button12->TabIndex = 44;
			this->button12->Text = L"Добавить";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(7, 18);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(113, 20);
			this->textBox14->TabIndex = 23;
			this->textBox14->Text = L"0/1";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(63, 178);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(31, 20);
			this->textBox8->TabIndex = 43;
			this->textBox8->Text = L"1";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(8, 49);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(62, 13);
			this->label12->TabIndex = 24;
			this->label12->Text = L"Числитель";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(44, 178);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(13, 20);
			this->label7->TabIndex = 42;
			this->label7->Text = L"/";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(8, 71);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(75, 13);
			this->label11->TabIndex = 25;
			this->label11->Text = L"Знаменатель";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(7, 178);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(31, 20);
			this->textBox9->TabIndex = 41;
			this->textBox9->Text = L"0";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(89, 42);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(31, 20);
			this->textBox13->TabIndex = 26;
			this->textBox13->Text = L"0";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(89, 68);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(31, 20);
			this->textBox12->TabIndex = 27;
			this->textBox12->Text = L"1";
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(89, 152);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(31, 20);
			this->button14->TabIndex = 39;
			this->button14->Text = L"++";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->Location = System::Drawing::Point(126, 18);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(75, 20);
			this->button20->TabIndex = 28;
			this->button20->Text = L"Задать";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(126, 126);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(31, 20);
			this->button15->TabIndex = 38;
			this->button15->Text = L"--";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->Location = System::Drawing::Point(126, 42);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 20);
			this->button19->TabIndex = 29;
			this->button19->Text = L"Задать";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(89, 126);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(31, 20);
			this->button16->TabIndex = 37;
			this->button16->Text = L"++";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->Location = System::Drawing::Point(126, 68);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 20);
			this->button18->TabIndex = 30;
			this->button18->Text = L"Задать";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(4, 152);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(75, 13);
			this->label8->TabIndex = 36;
			this->label8->Text = L"Знаменатель";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(7, 96);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(31, 20);
			this->textBox11->TabIndex = 31;
			this->textBox11->Text = L"0";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(4, 130);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(62, 13);
			this->label9->TabIndex = 35;
			this->label9->Text = L"Числитель";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(44, 96);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(13, 20);
			this->label10->TabIndex = 32;
			this->label10->Text = L"/";
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(126, 96);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 20);
			this->button17->TabIndex = 34;
			this->button17->Text = L"Задать";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(63, 96);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(31, 20);
			this->textBox10->TabIndex = 33;
			this->textBox10->Text = L"1";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button10);
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(245, 209);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Дробь 1";
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(162, 179);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(57, 20);
			this->button10->TabIndex = 22;
			this->button10->Text = L"Убавить";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(99, 179);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(57, 20);
			this->button9->TabIndex = 21;
			this->button9->Text = L"Добавить";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(62, 179);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(31, 20);
			this->textBox6->TabIndex = 20;
			this->textBox6->Text = L"1";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(43, 179);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 20);
			this->label6->TabIndex = 19;
			this->label6->Text = L"/";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(6, 179);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(31, 20);
			this->textBox7->TabIndex = 18;
			this->textBox7->Text = L"0";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(125, 153);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(31, 20);
			this->button7->TabIndex = 17;
			this->button7->Text = L"--";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(88, 153);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(31, 20);
			this->button8->TabIndex = 16;
			this->button8->Text = L"++";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(125, 127);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(31, 20);
			this->button6->TabIndex = 15;
			this->button6->Text = L"--";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(88, 127);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(31, 20);
			this->button5->TabIndex = 14;
			this->button5->Text = L"++";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(3, 153);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Знаменатель";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(3, 131);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Числитель";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(125, 97);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 20);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Задать";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(62, 97);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(31, 20);
			this->textBox5->TabIndex = 10;
			this->textBox5->Text = L"1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(43, 97);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 20);
			this->label3->TabIndex = 9;
			this->label3->Text = L"/";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(6, 97);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(31, 20);
			this->textBox4->TabIndex = 8;
			this->textBox4->Text = L"0";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(125, 69);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 20);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Задать";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(125, 43);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 20);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Задать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(125, 19);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 20);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Задать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(88, 69);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(31, 20);
			this->textBox3->TabIndex = 4;
			this->textBox3->Text = L"1";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(88, 43);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(31, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Знаменатель";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Числитель";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(6, 19);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(113, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"0/1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(748, 341);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"Бажин Дмитрий, ООП Лаба 2";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox3->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		void UpdateD1() {
			String^ ch = D1.GetChis().ToString();
			String^ zn = D1.GetZnam().ToString();
			textBox1->Text = ch + "/" + zn;
			textBox2->Text = ch;
			textBox4->Text = ch;
			textBox3->Text = zn;
			textBox5->Text = zn;
			listBox1->Items->Add("Дробь 1 -> " + textBox1->Text);
		}
		void UpdateD2() {
			String^ ch = D2.GetChis().ToString();
			String^ zn = D2.GetZnam().ToString();
			textBox14->Text = ch + "/" + zn;
			textBox13->Text = ch;
			textBox11->Text = ch;
			textBox12->Text = zn;
			textBox10->Text = zn;
			listBox1->Items->Add("Дробь 2 -> " + textBox14->Text);
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ a = textBox1->Text->ToString();
		String^ ch = "";
		String^ zn = "";
		bool fl = 1;
		bool mfl = 0;
		if (a[0] == '-') {
			mfl = 1;
			a = a->Substring(1);
		}
		for each (char var in a)
		{
			if (var == '/') {
				fl = 0;
			}
			else
				if (fl) {
					ch += var - char('0');
				}
				else {
					zn += var - char('0');
				}
		}
		if (ch != "") {
			int g = Convert::ToInt32(ch);
			if (mfl) {
				g = g * -1;
			}
			D1.SetChis(g);
		}
		if (zn != "") {
			D1.SetZnam(Convert::ToInt32(zn));
		}
		UpdateD1();
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		UpdateD1();
		UpdateD2();
	}
	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ a = textBox14->Text->ToString();
		String^ ch = "";
		String^ zn = "";
		bool fl = 1;
		bool mfl = 0;
		if (a[0] == '-') {
			mfl = 1;
			a = a->Substring(1);
		}
		for each (char var in a)
		{
			if (var == '/') {
				fl = 0;
			}
			else
				if (fl) {
					ch += var - char('0');
				}
				else {
					zn += var - char('0');
				}
		}
		if (ch != "") {
			int g = Convert::ToInt32(ch);
			if (mfl) {
				g = g * -1;
			}
			D2.SetChis(g);
		}
		if (zn != "") {
			D2.SetZnam(Convert::ToInt32(zn));
		}
		UpdateD2();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		D1.SetChis(Convert::ToInt32(textBox2->Text));
		UpdateD1();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		D1.SetZnam(Convert::ToInt32(textBox3->Text));
		UpdateD1();
	}
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		D2.SetChis(Convert::ToInt32(textBox13->Text));
		UpdateD2();
	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		D2.SetZnam(Convert::ToInt32(textBox12->Text));
		UpdateD2();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		D1.SetChis(Convert::ToInt32(textBox4->Text));
		D1.SetZnam(Convert::ToInt32(textBox5->Text));
		UpdateD1();
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		D2.SetChis(Convert::ToInt32(textBox11->Text));
		D2.SetZnam(Convert::ToInt32(textBox10->Text));
		UpdateD2();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		D1.SetChis(D1.GetChis() + 1);
		UpdateD1();
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		D1.SetChis(D1.GetChis() - 1);
		UpdateD1();
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		D1.SetZnam(D1.GetZnam() + 1);
		UpdateD1();
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		D1.SetZnam(D1.GetZnam() - 1);
		UpdateD1();
	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		D2.SetChis(D2.GetChis() + 1);
		UpdateD2();
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		D2.SetChis(D2.GetChis() - 1);
		UpdateD2();
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		D2.SetZnam(D2.GetZnam() + 1);
		UpdateD2();
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		D2.SetZnam(D2.GetZnam() - 1);
		UpdateD2();
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		Drob i(Convert::ToInt32(textBox7->Text), Convert::ToInt32(textBox6->Text));
		//listBox1->Items->Add(Convert::ToString(D1.GetChis().ToString() + "/" + D1.GetZnam().ToString() + " + " + i.GetChis().ToString() + "/" + i.GetZnam().ToString() + " = "));
		Drob tmp = D1 + i;
		D1.SetDrob(tmp.GetChis(), tmp.GetZnam());
		//listBox1->Items->Add(Convert::ToString(D1.GetChis().ToString() + "/" + D1.GetZnam().ToString()));
		UpdateD1();
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		Drob i(Convert::ToInt32(textBox7->Text), Convert::ToInt32(textBox6->Text));
		//listBox1->Items->Add(Convert::ToString(D1.GetChis().ToString() + "/" + D1.GetZnam().ToString() + " - " + i.GetChis().ToString() + "/" + i.GetZnam().ToString() + " = "));
		Drob tmp = D1 - i;
		D1.SetDrob(tmp.GetChis(),tmp.GetZnam());
		//listBox1->Items->Add(Convert::ToString(D1.GetChis().ToString() + "/" + D1.GetZnam().ToString()));
		UpdateD1();
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		Drob i(Convert::ToInt32(textBox9->Text), Convert::ToInt32(textBox8->Text));
		//listBox1->Items->Add(Convert::ToString(D2.GetChis().ToString() + "/" + D2.GetZnam().ToString() + " + " + i.GetChis().ToString() + "/" + i.GetZnam().ToString() + " = "));
		Drob tmp = D2 + i;
		D2.SetDrob(tmp.GetChis(),tmp.GetZnam());
		//listBox1->Items->Add(Convert::ToString(D2.GetChis().ToString() + "/" + D2.GetZnam().ToString()));
		UpdateD2();
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		Drob i(Convert::ToInt32(textBox9->Text), Convert::ToInt32(textBox8->Text));
		//listBox1->Items->Add(Convert::ToString(D2.GetChis().ToString() + "/" + D2.GetZnam().ToString() + " - " + i.GetChis().ToString() + "/" + i.GetZnam().ToString() + " = "));
		Drob tmp = D2 - i;
		D2.SetDrob(tmp.GetChis(),tmp.GetZnam());
		//listBox1->Items->Add(Convert::ToString(D2.GetChis().ToString() + "/" + D2.GetZnam().ToString()));
		UpdateD2();
	}
	private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
		D2.SetDrob(D1.GetChis(), D1.GetZnam());
		UpdateD2();
	}
	private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
		D1.SetDrob(D2.GetChis(), D2.GetZnam());
		UpdateD1();
	}
	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
		if (D1 == D2) {
			listBox1->Items->Add("Дровь 1 == Дробь 2");
		}
		if (D1 > D2) {
			listBox1->Items->Add("Дробь 1 > Дровь 2");
		}
		if (D1 < D2) {
			listBox1->Items->Add("Дровь 1 < Дробь 2");
		}
	}
	private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
		Drob tmp = D1 - D2;
		listBox1->Items->Add("Разность дробей = " + abs(tmp.GetChis()) + "/" + tmp.GetZnam());
	}
	private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
		Drob tmp = D1 + D2;
		listBox1->Items->Add("Сумма дробей = " + tmp.GetChis() + "/" + tmp.GetZnam());
	}
	private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
		Drob tmp = D1 * D2;
		listBox1->Items->Add("Произведение дробей = " + tmp.GetChis() + "/" + tmp.GetZnam());
	}
	private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
		Drob tmp = D1 / D2;
		listBox1->Items->Add("Дробь 1/Дробь 2 = " + tmp.GetChis() + "/" + tmp.GetZnam());
	}
	private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
		Drob tmp = D2 / D1;
		listBox1->Items->Add("Дробь 2/Дробь 1 = " + tmp.GetChis() + "/" + tmp.GetZnam());
	}
};
}