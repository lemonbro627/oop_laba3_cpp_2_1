#pragma once
#include <string>
#include "DrobArr.h"


DrobArr* D = new DrobArr[2];
int ii[2] = { 0,0 };
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
	private: System::Windows::Forms::Label^ label13;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::GroupBox^ groupBox4;

	private: System::Windows::Forms::GroupBox^ groupBox5;

	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton5;

	private: System::Windows::Forms::GroupBox^ groupBox8;
	private: System::Windows::Forms::GroupBox^ groupBox9;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::GroupBox^ groupBox10;
	private: System::Windows::Forms::Button^ button31;


	private: System::Windows::Forms::RadioButton^ radioButton10;
	private: System::Windows::Forms::RadioButton^ radioButton9;
private: System::Windows::Forms::ListBox^ listBox2;
private: System::Windows::Forms::ListBox^ listBox3;
private: System::Windows::Forms::GroupBox^ groupBox11;

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
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
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
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox11->SuspendLayout();
			this->groupBox10->SuspendLayout();
			this->groupBox9->SuspendLayout();
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
			this->groupBox3->Location = System::Drawing::Point(383, 431);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(339, 105);
			this->groupBox3->TabIndex = 7;
			this->groupBox3->TabStop = false;
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(172, 78);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(157, 23);
			this->button28->TabIndex = 7;
			this->button28->Text = L"Дробь B[i] / Дробь A[i]";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(173, 49);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(157, 23);
			this->button27->TabIndex = 6;
			this->button27->Text = L"Дробь A[i] / Дробь B[i]";
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
			this->button24->Text = L"Дробь A[i] = Дробь B[i]";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(10, 49);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(157, 23);
			this->button23->TabIndex = 2;
			this->button23->Text = L"Дробь B[i] = Дробь A[i]";
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
			this->listBox1->Location = System::Drawing::Point(728, 12);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(179, 524);
			this->listBox1->TabIndex = 6;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox16);
			this->groupBox2->Controls->Add(this->button11);
			this->groupBox2->Controls->Add(this->label14);
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
			this->groupBox2->Location = System::Drawing::Point(370, 102);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(229, 225);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"B[i]";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(124, 14);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(31, 20);
			this->textBox16->TabIndex = 26;
			this->textBox16->Text = L"0";
			this->textBox16->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox16_TextChanged);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(162, 197);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(57, 20);
			this->button11->TabIndex = 45;
			this->button11->Text = L"Убавить";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(1, 17);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(117, 13);
			this->label14->TabIndex = 25;
			this->label14->Text = L"Индекс в массиве B: ";
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(125, 171);
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
			this->button12->Location = System::Drawing::Point(99, 197);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(57, 20);
			this->button12->TabIndex = 44;
			this->button12->Text = L"Добавить";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(6, 37);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(113, 20);
			this->textBox14->TabIndex = 23;
			this->textBox14->Text = L"0/1";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(62, 197);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(31, 20);
			this->textBox8->TabIndex = 43;
			this->textBox8->Text = L"1";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(7, 68);
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
			this->label7->Location = System::Drawing::Point(43, 197);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(13, 20);
			this->label7->TabIndex = 42;
			this->label7->Text = L"/";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(7, 90);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(75, 13);
			this->label11->TabIndex = 25;
			this->label11->Text = L"Знаменатель";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(6, 197);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(31, 20);
			this->textBox9->TabIndex = 41;
			this->textBox9->Text = L"0";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(88, 61);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(31, 20);
			this->textBox13->TabIndex = 26;
			this->textBox13->Text = L"0";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(88, 87);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(31, 20);
			this->textBox12->TabIndex = 27;
			this->textBox12->Text = L"1";
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(88, 171);
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
			this->button20->Location = System::Drawing::Point(125, 37);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(75, 20);
			this->button20->TabIndex = 28;
			this->button20->Text = L"Задать";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(125, 145);
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
			this->button19->Location = System::Drawing::Point(125, 61);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 20);
			this->button19->TabIndex = 29;
			this->button19->Text = L"Задать";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(88, 145);
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
			this->button18->Location = System::Drawing::Point(125, 87);
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
			this->label8->Location = System::Drawing::Point(3, 171);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(75, 13);
			this->label8->TabIndex = 36;
			this->label8->Text = L"Знаменатель";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(6, 115);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(31, 20);
			this->textBox11->TabIndex = 31;
			this->textBox11->Text = L"0";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(3, 149);
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
			this->label10->Location = System::Drawing::Point(43, 115);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(13, 20);
			this->label10->TabIndex = 32;
			this->label10->Text = L"/";
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(125, 115);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 20);
			this->button17->TabIndex = 34;
			this->button17->Text = L"Задать";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(62, 115);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(31, 20);
			this->textBox10->TabIndex = 33;
			this->textBox10->Text = L"1";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(91, 89);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(31, 20);
			this->textBox3->TabIndex = 4;
			this->textBox3->Text = L"1";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox15);
			this->groupBox1->Controls->Add(this->label13);
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
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(12, 102);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(229, 225);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"A[i]";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(129, 13);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(31, 20);
			this->textBox15->TabIndex = 24;
			this->textBox15->Text = L"0";
			this->textBox15->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox15_TextChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(6, 16);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(117, 13);
			this->label13->TabIndex = 23;
			this->label13->Text = L"Индекс в массиве А: ";
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(165, 196);
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
			this->button9->Location = System::Drawing::Point(102, 196);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(57, 20);
			this->button9->TabIndex = 21;
			this->button9->Text = L"Добавить";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(65, 196);
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
			this->label6->Location = System::Drawing::Point(46, 196);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 20);
			this->label6->TabIndex = 19;
			this->label6->Text = L"/";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(9, 196);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(31, 20);
			this->textBox7->TabIndex = 18;
			this->textBox7->Text = L"0";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(128, 170);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(31, 20);
			this->button7->TabIndex = 17;
			this->button7->Text = L"--";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(91, 170);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(31, 20);
			this->button8->TabIndex = 16;
			this->button8->Text = L"++";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(128, 144);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(31, 20);
			this->button6->TabIndex = 15;
			this->button6->Text = L"--";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(91, 144);
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
			this->label4->Location = System::Drawing::Point(6, 170);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Знаменатель";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 148);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Числитель";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(128, 114);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 20);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Задать";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(65, 114);
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
			this->label3->Location = System::Drawing::Point(46, 114);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 20);
			this->label3->TabIndex = 9;
			this->label3->Text = L"/";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(9, 114);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(31, 20);
			this->textBox4->TabIndex = 8;
			this->textBox4->Text = L"0";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(128, 86);
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
			this->button2->Location = System::Drawing::Point(128, 60);
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
			this->button1->Location = System::Drawing::Point(128, 36);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 20);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Задать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(91, 60);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(31, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(10, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Знаменатель";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(10, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Числитель";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(9, 36);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(113, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"0/1";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button29);
			this->groupBox4->Controls->Add(this->textBox17);
			this->groupBox4->Controls->Add(this->label15);
			this->groupBox4->Controls->Add(this->groupBox5);
			this->groupBox4->Location = System::Drawing::Point(12, 12);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(229, 90);
			this->groupBox4->TabIndex = 9;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Параметры массива А";
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(135, 56);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(75, 23);
			this->button29->TabIndex = 14;
			this->button29->Text = L" Задать";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(135, 30);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(75, 20);
			this->textBox17->TabIndex = 13;
			this->textBox17->Text = L"10";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(150, 13);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(46, 13);
			this->label15->TabIndex = 12;
			this->label15->Text = L"Размер";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->radioButton3);
			this->groupBox5->Controls->Add(this->radioButton2);
			this->groupBox5->Location = System::Drawing::Point(6, 13);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(123, 74);
			this->groupBox5->TabIndex = 11;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Начальн. знач.";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Checked = true;
			this->radioButton3->Location = System::Drawing::Point(6, 41);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(71, 17);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"случайно";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 18);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(81, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"по порядку";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->button30);
			this->groupBox6->Controls->Add(this->textBox18);
			this->groupBox6->Controls->Add(this->label16);
			this->groupBox6->Controls->Add(this->groupBox7);
			this->groupBox6->Location = System::Drawing::Point(370, 12);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(229, 90);
			this->groupBox6->TabIndex = 15;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Параметры массива А";
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(135, 56);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(75, 23);
			this->button30->TabIndex = 14;
			this->button30->Text = L"Задать";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(135, 30);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(75, 20);
			this->textBox18->TabIndex = 13;
			this->textBox18->Text = L"10";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(150, 13);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(46, 13);
			this->label16->TabIndex = 12;
			this->label16->Text = L"Размер";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->radioButton4);
			this->groupBox7->Controls->Add(this->radioButton5);
			this->groupBox7->Location = System::Drawing::Point(6, 13);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(123, 74);
			this->groupBox7->TabIndex = 11;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Начальн. знач.";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Checked = true;
			this->radioButton4->Location = System::Drawing::Point(6, 41);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(71, 17);
			this->radioButton4->TabIndex = 2;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"случайно";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(6, 17);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(81, 17);
			this->radioButton5->TabIndex = 1;
			this->radioButton5->Text = L"по порядку";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->groupBox11);
			this->groupBox8->Controls->Add(this->button31);
			this->groupBox8->Controls->Add(this->groupBox10);
			this->groupBox8->Controls->Add(this->groupBox9);
			this->groupBox8->Location = System::Drawing::Point(12, 333);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(710, 97);
			this->groupBox8->TabIndex = 16;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Копирование массивов";
			// 
			// groupBox11
			// 
			this->groupBox11->Controls->Add(this->label17);
			this->groupBox11->Controls->Add(this->textBox19);
			this->groupBox11->Controls->Add(this->label19);
			this->groupBox11->Controls->Add(this->textBox20);
			this->groupBox11->Controls->Add(this->label18);
			this->groupBox11->Location = System::Drawing::Point(235, 11);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(109, 80);
			this->groupBox11->TabIndex = 19;
			this->groupBox11->TabStop = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(25, 16);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(56, 13);
			this->label17->TabIndex = 3;
			this->label17->Text = L"Индексы:";
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(68, 34);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(35, 20);
			this->textBox19->TabIndex = 1;
			this->textBox19->Text = L"0";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(6, 61);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(56, 13);
			this->label19->TabIndex = 5;
			this->label19->Text = L"конечный";
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(68, 58);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(35, 20);
			this->textBox20->TabIndex = 2;
			this->textBox20->Text = L"0";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(6, 36);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(62, 13);
			this->label18->TabIndex = 4;
			this->label18->Text = L"начальный";
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(543, 33);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(84, 30);
			this->button31->TabIndex = 7;
			this->button31->Text = L"Выполнить";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->radioButton10);
			this->groupBox10->Controls->Add(this->radioButton9);
			this->groupBox10->Location = System::Drawing::Point(74, 19);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(155, 68);
			this->groupBox10->TabIndex = 6;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"Способ копирования";
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Location = System::Drawing::Point(7, 43);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(116, 17);
			this->radioButton10->TabIndex = 1;
			this->radioButton10->Text = L"Копировать часть";
			this->radioButton10->UseVisualStyleBackColor = true;
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Checked = true;
			this->radioButton9->Location = System::Drawing::Point(7, 20);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(106, 17);
			this->radioButton9->TabIndex = 0;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"Копировать всё";
			this->radioButton9->UseVisualStyleBackColor = true;
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->radioButton8);
			this->groupBox9->Controls->Add(this->radioButton7);
			this->groupBox9->Location = System::Drawing::Point(6, 19);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(62, 68);
			this->groupBox9->TabIndex = 0;
			this->groupBox9->TabStop = false;
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(7, 42);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(48, 17);
			this->radioButton8->TabIndex = 1;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"B->A";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Checked = true;
			this->radioButton7->Location = System::Drawing::Point(7, 14);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(48, 17);
			this->radioButton7->TabIndex = 0;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"A->B";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(247, 12);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(117, 316);
			this->listBox2->TabIndex = 17;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox2_SelectedIndexChanged);
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(605, 12);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(117, 316);
			this->listBox3->TabIndex = 18;
			this->listBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox3_SelectedIndexChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(919, 544);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"Бажин Дмитрий, ООП Лаба 3";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox3->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox11->ResumeLayout(false);
			this->groupBox11->PerformLayout();
			this->groupBox10->ResumeLayout(false);
			this->groupBox10->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void UpdateD1() {
			String^ ch = D[0][ii[0]].GetChis().ToString();
			String^ zn = D[0][ii[0]].GetZnam().ToString();
			textBox1->Text = ch + "/" + zn;
			textBox2->Text = ch;
			textBox4->Text = ch;
			textBox3->Text = zn;
			textBox5->Text = zn;
			listBox1->Items->Add("Дробь A[" + ii[0] + "] -> " + textBox1->Text);
			UpdateListD1();
		};
	private: void UpdateListD1() {
		listBox2->Items->Clear();
		for (UINT i = 0; i < D[0].GetSize(); i++) {
			listBox2->Items->Add(D[0][i].GetChis() + "/" + D[0][i].GetZnam());
		}
	}
	private: void UpdateD2() {
			String^ ch = D[1][ii[1]].GetChis().ToString();
			String^ zn = D[1][ii[1]].GetZnam().ToString();
			textBox14->Text = ch + "/" + zn;
			textBox13->Text = ch;
			textBox11->Text = ch;
			textBox12->Text = zn;
			textBox10->Text = zn;
			listBox1->Items->Add("Дробь B[" + ii[1] + "] -> " + textBox14->Text);
			UpdateListD2();
		};
	private: void UpdateListD2() {
		listBox3->Items->Clear();
		for (UINT i = 0; i < D[1].GetSize(); i++) {
			listBox3->Items->Add(D[1][i].GetChis() + "/" + D[1][i].GetZnam());
		}
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
			D[0][ii[0]].SetChis(g);
		}
		if (zn != "") {
			D[0][ii[0]].SetZnam(Convert::ToInt32(zn));
		}
		UpdateD1();
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
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
			D[1][ii[1]].SetChis(g);
		}
		if (zn != "") {
			D[1][ii[1]].SetZnam(Convert::ToInt32(zn));
		}
		UpdateD2();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		D[0][ii[0]].SetChis(Convert::ToInt32(textBox2->Text));
		UpdateD1();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		D[0][ii[0]].SetZnam(Convert::ToInt32(textBox3->Text));
		UpdateD1();
	}
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		D[1][ii[1]].SetChis(Convert::ToInt32(textBox13->Text));
		UpdateD2();
	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		D[1][ii[1]].SetZnam(Convert::ToInt32(textBox12->Text));
		UpdateD2();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		D[0][ii[0]].SetChis(Convert::ToInt32(textBox4->Text));
		D[0][ii[0]].SetZnam(Convert::ToInt32(textBox5->Text));
		UpdateD1();
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		D[1][ii[1]].SetChis(Convert::ToInt32(textBox11->Text));
		D[1][ii[1]].SetZnam(Convert::ToInt32(textBox10->Text));
		UpdateD2();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		D[0][ii[0]].SetChis(D[0][ii[0]].GetChis() + 1);
		UpdateD1();
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		D[0][ii[0]].SetChis(D[0][ii[0]].GetChis() - 1);
		UpdateD1();
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		D[0][ii[0]].SetZnam(D[0][ii[0]].GetZnam() + 1);
		UpdateD1();
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		D[0][ii[0]].SetZnam(D[0][ii[0]].GetZnam() - 1);
		UpdateD1();
	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		D[1][ii[1]].SetChis(D[1][ii[1]].GetChis() + 1);
		UpdateD2();
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		D[1][ii[1]].SetChis(D[1][ii[1]].GetChis() - 1);
		UpdateD2();
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		D[1][ii[1]].SetZnam(D[1][ii[1]].GetZnam() + 1);
		UpdateD2();
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		D[1][ii[1]].SetZnam(D[1][ii[1]].GetZnam() - 1);
		UpdateD2();
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		Drob i(Convert::ToInt32(textBox7->Text), Convert::ToInt32(textBox6->Text));
		//listBox1->Items->Add(Convert::ToString(D[1][ii[0]].GetChis().ToString() + "/" + D[1][ii[0]].GetZnam().ToString() + " + " + i.GetChis().ToString() + "/" + i.GetZnam().ToString() + " = "));
		Drob tmp = D[0][ii[0]] + i;
		D[0][ii[0]].SetDrob(tmp.GetChis(), tmp.GetZnam());
		//listBox1->Items->Add(Convert::ToString(D[1][ii[0]].GetChis().ToString() + "/" + D[1][ii[0]].GetZnam().ToString()));
		UpdateD1();
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		Drob i(Convert::ToInt32(textBox7->Text), Convert::ToInt32(textBox6->Text));
		//listBox1->Items->Add(Convert::ToString(D[1][ii[0]].GetChis().ToString() + "/" + D[1][ii[0]].GetZnam().ToString() + " - " + i.GetChis().ToString() + "/" + i.GetZnam().ToString() + " = "));
		Drob tmp = D[0][ii[0]] - i;
		D[0][ii[0]].SetDrob(tmp.GetChis(),tmp.GetZnam());
		//listBox1->Items->Add(Convert::ToString(D[1][ii[0]].GetChis().ToString() + "/" + D[1][ii[0]].GetZnam().ToString()));
		UpdateD1();
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		Drob i(Convert::ToInt32(textBox9->Text), Convert::ToInt32(textBox8->Text));
		//listBox1->Items->Add(Convert::ToString(D[2][ii[1]].GetChis().ToString() + "/" + D[2][ii[1]].GetZnam().ToString() + " + " + i.GetChis().ToString() + "/" + i.GetZnam().ToString() + " = "));
		Drob tmp = D[1][ii[1]] + i;
		D[1][ii[1]].SetDrob(tmp.GetChis(),tmp.GetZnam());
		//listBox1->Items->Add(Convert::ToString(D[2][ii[1]].GetChis().ToString() + "/" + D[2][ii[1]].GetZnam().ToString()));
		UpdateD2();
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		Drob i(Convert::ToInt32(textBox9->Text), Convert::ToInt32(textBox8->Text));
		//listBox1->Items->Add(Convert::ToString(D[2][ii[1]].GetChis().ToString() + "/" + D[2][ii[1]].GetZnam().ToString() + " - " + i.GetChis().ToString() + "/" + i.GetZnam().ToString() + " = "));
		Drob tmp = D[1][ii[1]] - i;
		D[1][ii[1]].SetDrob(tmp.GetChis(),tmp.GetZnam());
		//listBox1->Items->Add(Convert::ToString(D[2][ii[1]].GetChis().ToString() + "/" + D[2][ii[1]].GetZnam().ToString()));
		UpdateD2();
	}
	private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
		D[1][ii[1]].SetDrob(D[0][ii[0]].GetChis(), D[0][ii[0]].GetZnam());
		UpdateD2();
	}
	private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
		D[0][ii[0]].SetDrob(D[1][ii[1]].GetChis(), D[1][ii[1]].GetZnam());
		UpdateD1();
	}
	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
		if (D[0][ii[0]] == D[1][ii[1]]) {
			listBox1->Items->Add("Дровь 1 == Дробь 2");
		}
		if (D[0][ii[0]] > D[1][ii[1]]) {
			listBox1->Items->Add("Дробь 1 > Дровь 2");
		}
		if (D[0][ii[0]] < D[1][ii[1]]) {
			listBox1->Items->Add("Дровь 1 < Дробь 2");
		}
	}
	private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
		Drob tmp = D[0][ii[0]] - D[1][ii[1]];
		listBox1->Items->Add("Разность дробей = " + abs(tmp.GetChis()) + "/" + tmp.GetZnam());
	}
	private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
		Drob tmp = D[0][ii[0]] + D[1][ii[1]];
		listBox1->Items->Add("Сумма дробей = " + tmp.GetChis() + "/" + tmp.GetZnam());
	}
	private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
		Drob tmp = D[0][ii[0]] * D[1][ii[1]];
		listBox1->Items->Add("Произведение дробей = " + tmp.GetChis() + "/" + tmp.GetZnam());
	}
	private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
		Drob tmp = D[0][ii[0]] / D[1][ii[1]];
		listBox1->Items->Add("Дробь 1/Дробь 2 = " + tmp.GetChis() + "/" + tmp.GetZnam());
	}
	private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
		Drob tmp = D[1][ii[1]] / D[0][ii[0]];
		listBox1->Items->Add("Дробь 2/Дробь 1 = " + tmp.GetChis() + "/" + tmp.GetZnam());
	}
	private: System::Void textBox15_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		ii[0] = Convert::ToInt32(textBox15->Text);
		UpdateD1();
	}
	private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
		D[0].SetSize(Convert::ToInt16(textBox17->Text));
		if (radioButton3->Checked) {
			//заполнить D[0] рандомно
			for (UINT i = 0; i < D[0].GetSize(); i++) {
				D[0][i].SetDrob(rand() % 100, rand() % 100);
			}
		}
		if (radioButton2->Checked) {
			//заполнить D[0] от 0/1 до n/1
			for (UINT i = 0; i < D[0].GetSize(); i++) {
				D[0][i].SetChis(i);
			}
		}
		UpdateListD1();
	}
	private: System::Void textBox16_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		ii[1] = Convert::ToInt32(textBox16->Text);
		UpdateD2();
	}
	private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
		D[1].SetSize(Convert::ToInt32(textBox18->Text));
		if (radioButton4->Checked) {
			//заполнить D[1] рандомно
			for (UINT i = 0; i < D[1].GetSize(); i++) {
				D[1][i].SetDrob(rand() % 100, rand() % 100);
			}
		}
		if (radioButton5->Checked) {
			//заполнить D[1] от 0/1 до n/1
			for (UINT i = 0; i < D[1].GetSize(); i++) {
				D[1][i].SetChis(i);
			}
		}
		UpdateListD2();
	}
	private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		ii[0] = listBox2->SelectedIndex;
		textBox15->Text = ii[0].ToString();
		UpdateD1();
	}
	private: System::Void listBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		ii[1] = listBox3->SelectedIndex;
		textBox16->Text = ii[1].ToString();
		UpdateD2();
	}
	private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
		int from = Convert::ToInt32(textBox19->Text);
		int to = Convert::ToInt32(textBox20->Text);
		if (from < 0) { from = 0; };
		if (to < 0) { to = 0; };
		if (from > to) { int x = from; from = to; to = x; };

		if (radioButton7->Checked) {
			//действич A->B
			if (radioButton9->Checked) {
				//копировать ВСЁ в D[1] из D[0];
				D[1].Copy(D[0], 0, D[0].GetSize());
			}
			if (radioButton10->Checked) {
				//копировать часть
				D[1].Copy(D[0], from, to);
			}
		}
		if (radioButton8->Checked) {
			//действия B->A
			if (radioButton9->Checked) {
				//копировать ВСЁ в D[0] из D[1];
				D[0].Copy(D[1], 0, D[1].GetSize());
			}
			if (radioButton10->Checked) {
				//копировать часть
				D[0].Copy(D[1], from, to);
			}
		}
		UpdateListD1();
		UpdateListD2();
	}
};
}