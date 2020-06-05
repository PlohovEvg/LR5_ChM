#pragma once
#include "Functions.h"

namespace LR5_ChM {


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
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  Epsilon_Text;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  Nmax_Text;
	private: System::Windows::Forms::TextBox^  m_Text;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  n_Text;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::DataGridView^  dataGridView6;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridView^  dataGridView5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  Epsilon_Text2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  Nmax_Text2;
	private: System::Windows::Forms::TextBox^  m_Text2;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  n_Text2;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::DataGridView^  dataGridView4;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn5;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->Epsilon_Text = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Nmax_Text = (gcnew System::Windows::Forms::TextBox());
			this->m_Text = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->n_Text = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Epsilon_Text2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Nmax_Text2 = (gcnew System::Windows::Forms::TextBox());
			this->m_Text2 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->n_Text2 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(2, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1013, 659);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dataGridView3);
			this->tabPage1->Controls->Add(this->dataGridView2);
			this->tabPage1->Controls->Add(this->radioButton3);
			this->tabPage1->Controls->Add(this->radioButton2);
			this->tabPage1->Controls->Add(this->radioButton1);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->Epsilon_Text);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->Nmax_Text);
			this->tabPage1->Controls->Add(this->m_Text);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->n_Text);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1005, 633);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Тестовая задача";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column3,
					this->Column6
			});
			this->dataGridView3->Location = System::Drawing::Point(411, 247);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(586, 380);
			this->dataGridView3->TabIndex = 35;
			this->dataGridView3->Visible = false;
			// 
			// Column3
			// 
			this->Column3->Frozen = true;
			this->Column3->HeaderText = L"";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 50;
			// 
			// Column6
			// 
			this->Column6->Frozen = true;
			this->Column6->HeaderText = L"i";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 50;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column2,
					this->Column5
			});
			this->dataGridView2->Location = System::Drawing::Point(411, 247);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(586, 380);
			this->dataGridView2->TabIndex = 34;
			this->dataGridView2->Visible = false;
			// 
			// Column2
			// 
			this->Column2->Frozen = true;
			this->Column2->HeaderText = L"";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 50;
			// 
			// Column5
			// 
			this->Column5->Frozen = true;
			this->Column5->HeaderText = L"i";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 50;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton3->Location = System::Drawing::Point(243, 196);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(140, 28);
			this->radioButton3->TabIndex = 33;
			this->radioButton3->Text = L"|U(x,y)-V(x,y)|";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(243, 162);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(77, 28);
			this->radioButton2->TabIndex = 32;
			this->radioButton2->Text = L"U(x,y)";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->Location = System::Drawing::Point(243, 128);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(77, 28);
			this->radioButton1->TabIndex = 31;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"V(x,y)";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(266, 101);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(90, 24);
			this->label5->TabIndex = 30;
			this->label5->Text = L"Таблица:";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(8, 230);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(397, 397);
			this->textBox3->TabIndex = 29;
			// 
			// Epsilon_Text
			// 
			this->Epsilon_Text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Epsilon_Text->Location = System::Drawing::Point(81, 136);
			this->Epsilon_Text->Name = L"Epsilon_Text";
			this->Epsilon_Text->Size = System::Drawing::Size(100, 29);
			this->Epsilon_Text->TabIndex = 28;
			this->Epsilon_Text->Text = L"0,000005";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(43, 136);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 24);
			this->label4->TabIndex = 27;
			this->label4->Text = L"ε=";
			// 
			// Nmax_Text
			// 
			this->Nmax_Text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Nmax_Text->Location = System::Drawing::Point(81, 101);
			this->Nmax_Text->Name = L"Nmax_Text";
			this->Nmax_Text->Size = System::Drawing::Size(100, 29);
			this->Nmax_Text->TabIndex = 26;
			this->Nmax_Text->Text = L"500";
			// 
			// m_Text
			// 
			this->m_Text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->m_Text->Location = System::Drawing::Point(50, 56);
			this->m_Text->Name = L"m_Text";
			this->m_Text->Size = System::Drawing::Size(100, 29);
			this->m_Text->TabIndex = 24;
			this->m_Text->Text = L"10";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(7, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 24);
			this->label2->TabIndex = 23;
			this->label2->Text = L"m=";
			// 
			// n_Text
			// 
			this->n_Text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->n_Text->Location = System::Drawing::Point(50, 21);
			this->n_Text->Name = L"n_Text";
			this->n_Text->Size = System::Drawing::Size(100, 29);
			this->n_Text->TabIndex = 22;
			this->n_Text->Text = L"10";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 24);
			this->label1->TabIndex = 21;
			this->label1->Text = L"n=";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(205, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 72);
			this->button1->TabIndex = 20;
			this->button1->Text = L"СТАРТ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(420, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(545, 228);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 19;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(4, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 24);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Nmax=";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column1,
					this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(411, 247);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(586, 380);
			this->dataGridView1->TabIndex = 18;
			// 
			// Column1
			// 
			this->Column1->Frozen = true;
			this->Column1->HeaderText = L"";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 50;
			// 
			// Column4
			// 
			this->Column4->Frozen = true;
			this->Column4->HeaderText = L"i";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 50;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView6);
			this->tabPage2->Controls->Add(this->dataGridView5);
			this->tabPage2->Controls->Add(this->radioButton4);
			this->tabPage2->Controls->Add(this->radioButton5);
			this->tabPage2->Controls->Add(this->radioButton6);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Controls->Add(this->Epsilon_Text2);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->Nmax_Text2);
			this->tabPage2->Controls->Add(this->m_Text2);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->n_Text2);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->pictureBox2);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->dataGridView4);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1005, 633);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Основная задача";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dataGridView6
			// 
			this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView6->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->dataGridViewTextBoxColumn2,
					this->dataGridViewTextBoxColumn1
			});
			this->dataGridView6->Location = System::Drawing::Point(411, 260);
			this->dataGridView6->Name = L"dataGridView6";
			this->dataGridView6->Size = System::Drawing::Size(586, 367);
			this->dataGridView6->TabIndex = 35;
			this->dataGridView6->Visible = false;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->Frozen = true;
			this->dataGridViewTextBoxColumn2->HeaderText = L"";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 50;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->Frozen = true;
			this->dataGridViewTextBoxColumn1->HeaderText = L"i";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 50;
			// 
			// dataGridView5
			// 
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->dataGridViewTextBoxColumn4,
					this->dataGridViewTextBoxColumn3
			});
			this->dataGridView5->Location = System::Drawing::Point(411, 260);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->Size = System::Drawing::Size(586, 367);
			this->dataGridView5->TabIndex = 34;
			this->dataGridView5->Visible = false;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->Frozen = true;
			this->dataGridViewTextBoxColumn4->HeaderText = L"";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			this->dataGridViewTextBoxColumn4->Width = 50;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->Frozen = true;
			this->dataGridViewTextBoxColumn3->HeaderText = L"i";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Width = 50;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton4->Location = System::Drawing::Point(430, 192);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(150, 28);
			this->radioButton4->TabIndex = 33;
			this->radioButton4->Text = L"|V2(x,y)-V(x,y)|";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton5->Location = System::Drawing::Point(430, 158);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(87, 28);
			this->radioButton5->TabIndex = 32;
			this->radioButton5->Text = L"V2(x,y)";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton5_CheckedChanged);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Checked = true;
			this->radioButton6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton6->Location = System::Drawing::Point(430, 124);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(77, 28);
			this->radioButton6->TabIndex = 31;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"V(x,y)";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton6_CheckedChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(453, 97);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(90, 24);
			this->label6->TabIndex = 30;
			this->label6->Text = L"Таблица:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(8, 84);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(397, 543);
			this->textBox1->TabIndex = 29;
			// 
			// Epsilon_Text2
			// 
			this->Epsilon_Text2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Epsilon_Text2->Location = System::Drawing::Point(274, 41);
			this->Epsilon_Text2->Name = L"Epsilon_Text2";
			this->Epsilon_Text2->Size = System::Drawing::Size(100, 29);
			this->Epsilon_Text2->TabIndex = 28;
			this->Epsilon_Text2->Text = L"0,000005";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(236, 41);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(32, 24);
			this->label7->TabIndex = 27;
			this->label7->Text = L"ε=";
			// 
			// Nmax_Text2
			// 
			this->Nmax_Text2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Nmax_Text2->Location = System::Drawing::Point(274, 6);
			this->Nmax_Text2->Name = L"Nmax_Text2";
			this->Nmax_Text2->Size = System::Drawing::Size(100, 29);
			this->Nmax_Text2->TabIndex = 26;
			this->Nmax_Text2->Text = L"500";
			// 
			// m_Text2
			// 
			this->m_Text2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->m_Text2->Location = System::Drawing::Point(61, 41);
			this->m_Text2->Name = L"m_Text2";
			this->m_Text2->Size = System::Drawing::Size(100, 29);
			this->m_Text2->TabIndex = 24;
			this->m_Text2->Text = L"10";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(18, 44);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(37, 24);
			this->label8->TabIndex = 23;
			this->label8->Text = L"m=";
			// 
			// n_Text2
			// 
			this->n_Text2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->n_Text2->Location = System::Drawing::Point(61, 6);
			this->n_Text2->Name = L"n_Text2";
			this->n_Text2->Size = System::Drawing::Size(100, 29);
			this->n_Text2->TabIndex = 22;
			this->n_Text2->Text = L"10";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(23, 9);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(32, 24);
			this->label9->TabIndex = 21;
			this->label9->Text = L"n=";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(380, 6);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(200, 72);
			this->button2->TabIndex = 20;
			this->button2->Text = L"СТАРТ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(588, 6);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(406, 241);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 19;
			this->pictureBox2->TabStop = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(197, 6);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(71, 24);
			this->label10->TabIndex = 25;
			this->label10->Text = L"Nmax=";
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->dataGridViewTextBoxColumn6,
					this->dataGridViewTextBoxColumn5
			});
			this->dataGridView4->Location = System::Drawing::Point(411, 260);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->Size = System::Drawing::Size(586, 367);
			this->dataGridView4->TabIndex = 18;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->Frozen = true;
			this->dataGridViewTextBoxColumn6->HeaderText = L"";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			this->dataGridViewTextBoxColumn6->Width = 50;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->Frozen = true;
			this->dataGridViewTextBoxColumn5->HeaderText = L"i";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			this->dataGridViewTextBoxColumn5->Width = 50;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1012, 660);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
	{
		dataGridView1->Visible = true;
		dataGridView2->Visible = false;
		dataGridView3->Visible = false;
	}

private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
{
	dataGridView1->Visible = false;
	dataGridView2->Visible = true;
	dataGridView3->Visible = false;
}
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
{
	dataGridView1->Visible = false;
	dataGridView2->Visible = false;
	dataGridView3->Visible = true;
}
private: System::Void radioButton6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
{
	dataGridView4->Visible = true;
	dataGridView5->Visible = false;
	dataGridView6->Visible = false;
}
private: System::Void radioButton5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
{
	dataGridView4->Visible = false;
	dataGridView5->Visible = true;
	dataGridView6->Visible = false;
}
private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
{
	dataGridView4->Visible = false;
	dataGridView5->Visible = false;
	dataGridView6->Visible = true;
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	const int n = Convert::ToInt32(n_Text->Text); //Число узлов по x
	const int m = Convert::ToInt32(m_Text->Text); //Число узлов по y
	int Nmax = Convert::ToInt32(Nmax_Text->Text); //Максимальное число итераций
	double Epsilon = Convert::ToDouble(Epsilon_Text->Text); //Точность
	double h = 1.0 / n, k = 1.0 / m; //Шаги по x и y
	double h2 = 1.0 / (h*h), k2 = 1.0 / (k*k);
	double A = -2 * (h2 + k2);
	double **v, **f, **u, **hv, **R;	
	double *x, *y;
	double v_old, v_new;
	double alpha, beta;
	double Eps_max = 0.0;
	double S1 = 0.0, S2 = 0.0;
	int p = 0; //Текущее число итераций
	bool flag = false; //Флаг проверки выполнения условия
	char buffer[100];
	double MaxPogr = 0.0;
	double Pogr;
	double MaxF = 0.0;
	double maxR1 = 0.0;
	string ref = "";

	x = new double[n + 1];
	y = new double[m + 1];
	v = new double*[n + 1];
	hv = new double*[n + 1];	
	R = new double*[n + 1];
	f = new double*[n + 1];
	u = new double*[n + 1];

	for (int i = 0; i <= n; i++)
	{
		v[i] = new double[m + 1];
		f[i] = new double[m + 1];
		u[i] = new double[m + 1];
		hv[i] = new double[m + 1];
		R[i] = new double[m + 1];
	}

	for (int i = 0; i <= n; i++)  //Заполнение массива x
	{
		x[i] = 1 + i * h;
	}

	for (int j = 0; j <= m; j++)  //Заполнение массива y
	{
		y[j] = 2 + j * k;
	}

	for (int j = 0; j <= m; j++)            //Заполнение массивов f и u
	{
		for (int i = 0; i <= n; i++)
		{
			f[i][j] = f1(x[i], y[j]);
			u[i][j] = u1(x[i], y[j]);
			hv[i][j] = -f[i][j];
			if (abs(f[i][j]) > MaxF)
			{
				MaxF = abs(f[i][j]);
			}
		}
	}

	for (int j = 0; j <= m; j++)  //Заполнение граничных условий в массив v
	{
		v[0][j] = u1(1, y[j]);
		v[n][j] = u1(2, y[j]);
		R[0][j] = 0.0;
		R[n][j] = 0.0;
	}

	for (int i = 0; i <= n; i++)  //Заполнение граничных условий в массив v
	{
		v[i][0] = u1(x[i], 2);
		v[i][m] = u1(x[i], 3);
		R[i][0] = 0.0;
		R[i][m] = 0.0;
	}

	for (int j = 1; j < m; j++)    //Нулевое начальное приближение
	{
		for (int i = 1; i < n; i++)
		{
			v[i][j] = 0.0;			
		}
	}	

	for (int j = 1; j < m; j++)     //Метод сопряженных градиентов (первая итерация)
	{
		for (int i = 1; i < n; i++)
		{			
			S1 += f[i][j] * hv[i][j];
			S2 += (A*hv[i][j] + h2*(hv[i + 1][j] + hv[i - 1][j]) + k2*(hv[i][j + 1] + hv[i][j - 1]))*hv[i][j];
		}
	}

	alpha = -S1 / S2;

	for (int j = 1; j < m; j++)
	{
		for (int i = 1; i < n; i++)
		{
			v_old = v[i][j];
			v_new = v_old + alpha*hv[i][j];

			if (fabs(v_old - v_new) > Eps_max)
			{
				Eps_max = fabs(v_old - v_new);
			}
			v[i][j] = v_new;
		}
	}	
	p++;
	if ((Eps_max < Epsilon) || (p >= Nmax))
	{
		flag = true;
	}

	while (flag == false)       //Метод сопряженных градиентов (со второй итерации)
	{
		S1 = S2 = 0.0;
		Eps_max = 0.0;		

		for (int j = 1; j < m; j++)
		{
			for (int i = 1; i < n; i++)
			{
				R[i][j] = f[i][j] + A*v[i][j] + h2*(v[i + 1][j] + v[i - 1][j]) + k2*(v[i][j + 1] + v[i][j - 1]);
				S1 += (A*hv[i][j] + h2*(hv[i + 1][j] + hv[i - 1][j]) + k2*(hv[i][j + 1] + hv[i][j - 1]))*R[i][j];
				S2 += (A*hv[i][j] + h2*(hv[i + 1][j] + hv[i - 1][j]) + k2*(hv[i][j + 1] + hv[i][j - 1]))*hv[i][j];
			}
		}

		beta = S1 / S2;

		S1 = S2 = 0;

		for (int j = 0; j <= m; j++)
		{
			for (int i = 0; i <= n; i++)
			{
				hv[i][j] = -R[i][j] + beta*hv[i][j];			
			}
		}

		for (int j = 1; j < m; j++)
		{
			for (int i = 1; i < n; i++)
			{
				S1 += R[i][j] * hv[i][j];
				S2 += (A*hv[i][j] + h2*(hv[i + 1][j] + hv[i - 1][j]) + k2*(hv[i][j + 1] + hv[i][j - 1]))*hv[i][j];
			}
		}

		alpha = -S1 / S2;

		S1 = S2 = 0.0;

		for (int j = 1; j < m; j++)
		{
			for (int i = 1; i < n; i++)
			{
				v_old = v[i][j];

				v_new = v_old + alpha*hv[i][j];

				if (abs(R[i][j]) > maxR1)
				{
					maxR1 = abs(R[i][j]);
				}
				
				if (fabs(v_old - v_new) > Eps_max)
				{
					Eps_max = fabs(v_old - v_new);
				}
				v[i][j] = v_new;
			}
		}		
		p++;
		if ((Eps_max < Epsilon) || (p >= Nmax))
		{
			flag = true;
		}
	}

	dataGridView1->Rows->Clear();               //Очистка таблиц от предыдущих значений
	dataGridView1->Columns->Clear();
	dataGridView2->Rows->Clear();
	dataGridView2->Columns->Clear();
	dataGridView3->Rows->Clear();
	dataGridView3->Columns->Clear();

	dataGridView1->Columns->Add("C1", "");
	dataGridView1->Columns[0]->Width = 50;
	dataGridView1->Columns[0]->Frozen = true;
	dataGridView1->Columns->Add("C2", "i");
	dataGridView1->Columns[1]->Width = 50;
	dataGridView1->Columns[1]->Frozen = true;
	dataGridView2->Columns->Add("C1", "");
	dataGridView2->Columns[0]->Width = 50;
	dataGridView2->Columns[0]->Frozen = true;
	dataGridView2->Columns->Add("C2", "i");
	dataGridView2->Columns[1]->Width = 50;
	dataGridView2->Columns[1]->Frozen = true;
	dataGridView3->Columns->Add("C1", "");
	dataGridView3->Columns[0]->Width = 50;
	dataGridView3->Columns[0]->Frozen = true;
	dataGridView3->Columns->Add("C2", "i");
	dataGridView3->Columns[1]->Width = 50;
	dataGridView3->Columns[1]->Frozen = true;

	for (int i = 0; i <= n; i++)                        //Создание столбцов для таблиц
	{
		sprintf_s(buffer, "%d", i);
		dataGridView1->Columns->Add(gcnew String(buffer), gcnew String(buffer));
		dataGridView2->Columns->Add(gcnew String(buffer), gcnew String(buffer));
		dataGridView3->Columns->Add(gcnew String(buffer), gcnew String(buffer));
	}

	dataGridView1->Rows->Add("j", "Y\\X");                //Создание второй строки
	dataGridView2->Rows->Add("j", "Y\\X");
	dataGridView3->Rows->Add("j", "Y\\X");
	dataGridView1->Rows[0]->Frozen = true;
	dataGridView2->Rows[0]->Frozen = true;
	dataGridView3->Rows[0]->Frozen = true;

	for (int i = 0; i <= n; i++)               //Заполнение второй строки
	{
		dataGridView1->Rows[0]->Cells[i + 2]->Value = x[i];
		dataGridView2->Rows[0]->Cells[i + 2]->Value = x[i];
		dataGridView3->Rows[0]->Cells[i + 2]->Value = x[i];
	}

	for (int j = 0; j <= m; j++)          //Заполнение первых двух столбцов
	{
		dataGridView1->Rows->Add();
		dataGridView2->Rows->Add();
		dataGridView3->Rows->Add();
		for (int i = 0; i <= 1; i++)
		{
			dataGridView1->Rows[j + 1]->Cells[0]->Value = j;
			dataGridView1->Rows[j + 1]->Cells[1]->Value = y[j];
			dataGridView2->Rows[j + 1]->Cells[0]->Value = j;
			dataGridView2->Rows[j + 1]->Cells[1]->Value = y[j];
			dataGridView3->Rows[j + 1]->Cells[0]->Value = j;
			dataGridView3->Rows[j + 1]->Cells[1]->Value = y[j];

		}
	}

	for (int j = 0; j <= m; j++)              //Заполнение таблиц значениями
	{
		for (int i = 0; i <= n; i++)
		{
			Pogr = abs(u[i][j] - v[i][j]);
			v[i][j] = round(v[i][j] * 1000) / 1000;
			u[i][j] = round(u[i][j] * 1000) / 1000;
			dataGridView1->Rows[j + 1]->Cells[i + 2]->Value = v[i][j];
			dataGridView2->Rows[j + 1]->Cells[i + 2]->Value = u[i][j];
			dataGridView3->Rows[j + 1]->Cells[i + 2]->Value = Pogr;

			if (Pogr > MaxPogr)
			{
				MaxPogr = Pogr;
			}
		}
	}

	ref += "Справка для тестовой задачи\r\n";                               //Вывод справки
	ref += "\r\n";
	ref += "Использовался метод сопряженных градиентов с параметрами Nmax=";
	sprintf_s(buffer, "%d", Nmax);
	ref += buffer;
	ref += ", E=";
	sprintf_s(buffer, "%.6e", Epsilon);
	ref += buffer;	
	ref += "\r\n";
	ref += "Сетка по x: n=";
	sprintf_s(buffer, "%d", n);
	ref += buffer;
	ref += ", по y: m=";
	sprintf_s(buffer, "%d", m);
	ref += buffer;
	ref += "\r\n";
	ref += "Пройдено итераций p=";
	sprintf_s(buffer, "%d", p);
	ref += buffer;
	ref += "\r\n";
	ref += "Достигнутая точность Eps=";
	sprintf_s(buffer, "%.6e", Eps_max);
	ref += buffer;
	ref += "\r\n";
	ref += "Максимальная разность точного и численного решений |U-V|=";
	sprintf_s(buffer, "%.6e", MaxPogr);
	ref += buffer;
	ref += "\r\n";
	ref += "Используется нулевое начальное приближение";
	ref += "\r\n";
	ref += "Невязка СЛАУ на начальном приближении (максимальная по модулю) R(0)=";
	sprintf_s(buffer, "%.3e", MaxF);
	ref += buffer;
	ref += "\r\n";
	ref += "Схема на сетке решена с невязкой (максимальная по модулю) R(p)=";
	sprintf_s(buffer, "%.3e", maxR1);
	ref += buffer;

	textBox3->Text = gcnew String(ref.c_str());

	for (int i = 0; i <= n; i++)
	{
		delete[] v[i];		
		delete[] f[i];
		delete[] u[i];
		delete[] hv[i];
	}
	delete[] x;
	delete[] y;
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
{
	int n = Convert::ToInt32(n_Text2->Text); //Число узлов по x
	int m = Convert::ToInt32(m_Text2->Text); //Число узлов по y	
	const int Nmax = Convert::ToInt32(Nmax_Text2->Text); //Максимальное число итераций
	double Epsilon = Convert::ToDouble(Epsilon_Text2->Text); //Точность
	double h = 1.0 / n, k = 1.0 / m; //Шаги по x и y
	double h2 = 1.0 / (h*h), k2 = 1.0 / (k*k);
	double A = -2 * (h2 + k2);
	double **v, **v2, **f;
	double **R, **hv; 
	double *x, *y;
	double v_old, v_new;
	double S1 = 0.0, S2 = 0.0;
	double Eps_max = 0.0, Eps_max2 = 0.0;
	double alpha, beta;
	int p = 0, p2 = 0; //Текущее число итераций
	bool flag = false; //Флаг проверки выполнения условия
	char buffer[100];
	double MaxPogr;
	double Pogr;
	double xMax;
	double yMax;
	double MaxF = 0.0, MaxF2 = 0.0;
	double maxR1 = 0.0;
	string ref = "";

	x = new double[n + 1];
	y = new double[m + 1];
	v = new double*[n + 1];
	R = new double*[n + 1];
	hv = new double*[n + 1];	
	f = new double*[n + 1];


	for (int i = 0; i <= n; i++)
	{
		v[i] = new double[m + 1];		
		f[i] = new double[m + 1];
		R[i] = new double[m + 1];
		hv[i] = new double[m + 1];
	}

	for (int i = 0; i <= n; i++)  //Заполнение массива x
	{
		x[i] = 1 + i * h;
	}

	for (int j = 0; j <= m; j++)  //Заполнение массива y
	{
		y[j] = 2 + j * k;
	}

	for (int j = 0; j <= m; j++)            //Заполнение массива f 
	{
		for (int i = 0; i <= n; i++)
		{
			f[i][j] = f2(x[i], y[j]);
			hv[i][j] = -f[i][j];
			if (abs(f[i][j]) > MaxF)
			{
				MaxF = abs(f[i][j]);
			}
		}
	}

	for (int j = 0; j <= m; j++)  //Заполнение граничных условий в массив v
	{
		v[0][j] = mu1(y[j]);
		v[n][j] = mu2(y[j]);
		R[0][j] = 0.0;
		R[n][j] = 0.0;
	}

	for (int i = 0; i <= n; i++)  //Заполнение граничных условий в массив v
	{
		v[i][0] = mu3(x[i]);
		v[i][m] = mu4(x[i]);
		R[i][0] = 0.0;
		R[i][m] = 0.0;
	}

	for (int j = 1; j < m; j++)    //Нулевое начальное приближение
	{
		for (int i = 1; i < n; i++)
		{
			v[i][j] = 0.0;
		}
	}

	for (int j = 1; j < m; j++)     //Метод сопряженных градиентов (первая итерация)
	{
		for (int i = 1; i < n; i++)
		{
			S1 += f[i][j] * hv[i][j];
			S2 += (A*hv[i][j] + h2*(hv[i + 1][j] + hv[i - 1][j]) + k2*(hv[i][j + 1] + hv[i][j - 1]))*hv[i][j];
		}
	}

	alpha = -S1 / S2;

	for (int j = 1; j < m; j++)
	{
		for (int i = 1; i < n; i++)
		{
			v_old = v[i][j];
			v_new = v_old + alpha*hv[i][j];

			if (fabs(v_old - v_new) > Eps_max)
			{
				Eps_max = fabs(v_old - v_new);
			}
			v[i][j] = v_new;
		}
	}
	p++;
	if ((Eps_max < Epsilon) || (p >= Nmax))
	{
		flag = true;
	}

	while (flag == false)       //Метод сопряженных градиентов (со второй итерации)
	{
		S1 = S2 = 0.0;
		Eps_max = 0.0;

		for (int j = 1; j < m; j++)
		{
			for (int i = 1; i < n; i++)
			{
				R[i][j] = f[i][j] + A*v[i][j] + h2*(v[i + 1][j] + v[i - 1][j]) + k2*(v[i][j + 1] + v[i][j - 1]);
				S1 += (A*hv[i][j] + h2*(hv[i + 1][j] + hv[i - 1][j]) + k2*(hv[i][j + 1] + hv[i][j - 1]))*R[i][j];
				S2 += (A*hv[i][j] + h2*(hv[i + 1][j] + hv[i - 1][j]) + k2*(hv[i][j + 1] + hv[i][j - 1]))*hv[i][j];
			}
		}

		beta = S1 / S2;

		S1 = S2 = 0;

		for (int j = 0; j <= m; j++)
		{
			for (int i = 0; i <= n; i++)
			{
				hv[i][j] = -R[i][j] + beta*hv[i][j];
			}
		}

		for (int j = 1; j < m; j++)
		{
			for (int i = 1; i < n; i++)
			{
				S1 += R[i][j] * hv[i][j];
				S2 += (A*hv[i][j] + h2*(hv[i + 1][j] + hv[i - 1][j]) + k2*(hv[i][j + 1] + hv[i][j - 1]))*hv[i][j];
			}
		}

		alpha = -S1 / S2;

		S1 = S2 = 0.0;

		for (int j = 1; j < m; j++)
		{
			for (int i = 1; i < n; i++)
			{
				v_old = v[i][j];

				v_new = v_old + alpha*hv[i][j];

				if (abs(R[i][j]) > maxR1)
				{
					maxR1 = abs(R[i][j]);
				}

				if (abs(v_old - v_new) > Eps_max)
				{
					Eps_max = abs(v_old - v_new);
				}
				v[i][j] = v_new;
			}
		}		
		p++;
		if ((Eps_max < Epsilon) || (p >= Nmax))
		{
			flag = true;
		}
	}

	for (int i = 0; i <= n; i++)
	{
		delete[] f[i];
		delete[] hv[i];
		delete[] R[i];
	}

	delete[]x;
	delete[]y;	

	n = 2 * n;                    //Решение задачи с половинным шагом
	m = 2 * m;
	x = new double[n + 1];
	y = new double[m + 1];
	v2 = new double*[n + 1];	
	f = new double*[n + 1];
	hv = new double*[n + 1];
	R = new double*[n + 1];
	flag = false;

	h = 1.0 / n;
	k = 1.0 / m;
	h2 = 1.0 / (h*h);
	k2 = 1.0 / (k*k);
	A = -2 * (h2 + k2);
	S1 = S2 = 0.0;
	
	double maxR = 0.0;

	for (int i = 0; i <= n; i++)
	{
		v2[i] = new double[m + 1];		
		f[i] = new double[m + 1];
		hv[i] = new double[m + 1];
		R[i] = new double[m + 1];
	}

	for (int i = 0; i <= n; i++)  //Заполнение массива x
	{
		x[i] = 1 + i * h;
	}

	for (int j = 0; j <= m; j++)  //Заполнение массива y
	{
		y[j] = 2 + j * k;
	}

	for (int j = 0; j <= m; j++)            //Заполнение массива f 
	{
		for (int i = 0; i <= n; i++)
		{
			f[i][j] = f2(x[i], y[j]);
			hv[i][j] = -f[i][j];
			if (abs(f[i][j]) > MaxF2)
			{
				MaxF2 = f[i][j];
			}
		}
	}

	for (int j = 0; j <= m; j++)  //Заполнение граничных условий в массив v
	{
		v2[0][j] = mu1(y[j]);
		v2[n][j] = mu2(y[j]);
		R[0][j] = 0.0;
		R[n][j] = 0.0;	
	}

	for (int i = 0; i <= n; i++)  //Заполнение граничных условий в массив v
	{
		v2[i][0] = mu3(x[i]);
		v2[i][m] = mu4(x[i]);
		R[i][0] = 0.0;
		R[i][m] = 0.0;	
	}

	for (int j = 1; j < m; j++)    //Нулевое начальное приближение
	{
		for (int i = 1; i < n; i++)
		{
			v2[i][j] = 0.0;
		}
	}	

	for (int j = 1; j < m; j++)     //Метод сопряженных градиентов (первая итерация)
	{
		for (int i = 1; i < n; i++)
		{
			S1 += f[i][j] * hv[i][j];
			S2 += (A*hv[i][j] + h2*(hv[i + 1][j] + hv[i - 1][j]) + k2*(hv[i][j + 1] + hv[i][j - 1]))*hv[i][j];
		}
	}

	alpha = -S1 / S2;

	for (int j = 1; j < m; j++)
	{
		for (int i = 1; i < n; i++)
		{
			v_old = v2[i][j];
			v_new = v_old + alpha*hv[i][j];

			if (fabs(v_old - v_new) > Eps_max2)
			{
				Eps_max2 = fabs(v_old - v_new);
			}
			v2[i][j] = v_new;
		}
	}
	p2++;
	if ((Eps_max2 < Epsilon) || (p2 >= Nmax))
	{
		flag = true;
	}

	while (flag == false)       //Метод сопряженных градиентов (со второй итерации)
	{
		S1 = S2 = 0.0;
		Eps_max2 = 0.0;

		for (int j = 1; j < m; j++)
		{
			for (int i = 1; i < n; i++)
			{
				R[i][j] = f[i][j] + A*v2[i][j] + h2*(v2[i + 1][j] + v2[i - 1][j]) + k2*(v2[i][j + 1] + v2[i][j - 1]);
				S1 += (A*hv[i][j] + h2*(hv[i + 1][j] + hv[i - 1][j]) + k2*(hv[i][j + 1] + hv[i][j - 1]))*R[i][j];
				S2 += (A*hv[i][j] + h2*(hv[i + 1][j] + hv[i - 1][j]) + k2*(hv[i][j + 1] + hv[i][j - 1]))*hv[i][j];
			}
		}

		beta = S1 / S2;

		S1 = S2 = 0.0;

		for (int j = 0; j <= m; j++)
		{
			for (int i = 0; i <= n; i++)
			{
				hv[i][j] = -R[i][j] + beta*hv[i][j];
			}
		}

		for (int j = 1; j < m; j++)
		{
			for (int i = 1; i < n; i++)
			{
				S1 += R[i][j] * hv[i][j];
				S2 += (A*hv[i][j] + h2*(hv[i + 1][j] + hv[i - 1][j]) + k2*(hv[i][j + 1] + hv[i][j - 1]))*hv[i][j];
			}
		}

		alpha = -S1 / S2;

		S1 = S2 = 0.0;

		for (int j = 1; j < m; j++)
		{
			for (int i = 1; i < n; i++)
			{
				v_old = v2[i][j];
				
				v_new = v_old + alpha*hv[i][j];

				if (abs(R[i][j]) > maxR)
				{
					maxR = abs(R[i][j]);
				}

				if (abs(v_old - v_new) > Eps_max2)
				{
					Eps_max2 = abs(v_old - v_new);
				}
				v2[i][j] = v_new;
			}
		}		
		p2++;
		if ((Eps_max2 < Epsilon) || (p2 >= Nmax))
		{
			flag = true;
		}
	}

	n = n / 2;
	m = m / 2;

	dataGridView4->Rows->Clear();               //Очистка таблиц от предыдущих значений
	dataGridView4->Columns->Clear();
	dataGridView5->Rows->Clear();
	dataGridView5->Columns->Clear();
	dataGridView6->Rows->Clear();
	dataGridView6->Columns->Clear();

	dataGridView4->Columns->Add("C1", "");
	dataGridView4->Columns[0]->Width = 50;
	dataGridView4->Columns[0]->Frozen = true;
	dataGridView4->Columns->Add("C2", "i");
	dataGridView4->Columns[1]->Width = 50;
	dataGridView4->Columns[1]->Frozen = true;
	dataGridView5->Columns->Add("C1", "");
	dataGridView5->Columns[0]->Width = 50;
	dataGridView5->Columns[0]->Frozen = true;
	dataGridView5->Columns->Add("C2", "i");
	dataGridView5->Columns[1]->Width = 50;
	dataGridView5->Columns[1]->Frozen = true;
	dataGridView6->Columns->Add("C1", "");
	dataGridView6->Columns[0]->Width = 50;
	dataGridView6->Columns[0]->Frozen = true;
	dataGridView6->Columns->Add("C2", "i");
	dataGridView6->Columns[1]->Width = 50;
	dataGridView6->Columns[1]->Frozen = true;

	for (int i = 0; i <= n; i++)                        //Создание столбцов для таблиц
	{
		sprintf_s(buffer, "%d", i);
		dataGridView4->Columns->Add(gcnew String(buffer), gcnew String(buffer));
		dataGridView5->Columns->Add(gcnew String(buffer), gcnew String(buffer));
		dataGridView6->Columns->Add(gcnew String(buffer), gcnew String(buffer));
	}

	dataGridView4->Rows->Add("j", "Y\\X");                //Создание второй строки
	dataGridView5->Rows->Add("j", "Y\\X");
	dataGridView6->Rows->Add("j", "Y\\X");
	dataGridView4->Rows[0]->Frozen = true;
	dataGridView5->Rows[0]->Frozen = true;
	dataGridView6->Rows[0]->Frozen = true;

	for (int i = 0; i <= n; i++)               //Заполнение второй строки
	{
		dataGridView4->Rows[0]->Cells[i + 2]->Value = x[2 * i];
		dataGridView5->Rows[0]->Cells[i + 2]->Value = x[2 * i];
		dataGridView6->Rows[0]->Cells[i + 2]->Value = x[2 * i];
	}

	for (int j = 0; j <= m; j++)          //Заполнение первых двух столбцов
	{
		dataGridView4->Rows->Add();
		dataGridView5->Rows->Add();
		dataGridView6->Rows->Add();
		for (int i = 0; i <= 1; i++)
		{
			dataGridView4->Rows[j + 1]->Cells[0]->Value = j;
			dataGridView4->Rows[j + 1]->Cells[1]->Value = y[2 * j];
			dataGridView5->Rows[j + 1]->Cells[0]->Value = j;
			dataGridView5->Rows[j + 1]->Cells[1]->Value = y[2 * j];
			dataGridView6->Rows[j + 1]->Cells[0]->Value = j;
			dataGridView6->Rows[j + 1]->Cells[1]->Value = y[2 * j];

		}
	}

	for (int j = 0; j <= m; j++)              //Заполнение таблиц значениями
	{
		for (int i = 0; i <= n; i++)
		{
			Pogr = abs(v2[i * 2][j * 2] - v[i][j]);
			v[i][j] = round(v[i][j] * 1000) / 1000;
			v2[2 * i][2 * j] = round(v2[2 * i][2 * j] * 1000) / 1000;
			dataGridView4->Rows[j + 1]->Cells[i + 2]->Value = v[i][j];
			dataGridView5->Rows[j + 1]->Cells[i + 2]->Value = v2[2 * i][2 * j];
			dataGridView6->Rows[j + 1]->Cells[i + 2]->Value = Pogr;

			if (Pogr > MaxPogr)
			{
				MaxPogr = Pogr;
				xMax = x[2 * i];
				yMax = y[2 * j];
			}
		}
	}

	ref += "Справка для основной задачи\r\n\r\n"; //Вывод справки
	ref += "Использовался метод сопряженных градиентов с параметрами Nmax=";
	sprintf_s(buffer, "%d", Nmax);
	ref += buffer;
	ref += ", E=";
	sprintf_s(buffer, "%.3e", Epsilon);
	ref += buffer;
	ref += "\r\n";
	ref += "Сетка по x: n=";
	sprintf_s(buffer, "%d", n);
	ref += buffer;
	ref += ", по y: m=";
	sprintf_s(buffer, "%d", m);
	ref += buffer;
	ref += "\r\n";
	ref += "Пройдено итераций p=";
	sprintf_s(buffer, "%d", p);
	ref += buffer;
	ref += "\r\n";
	ref += "Достигнутая точность Eps=";
	sprintf_s(buffer, "%.3e", Eps_max);
	ref += buffer;
	ref += "\r\n";
	ref += "Используется нулевое начальное приближение";
	ref += "\r\n";
	ref += "Невязка СЛАУ на начальном приближении (максимальная по модулю) R(0)=";
	sprintf_s(buffer, "%.3e", MaxF);
	ref += buffer;
	ref += "\r\n";
	ref += "Схема на сетке решена с невязкой (максимальная по модулю) R(p)=";
	sprintf_s(buffer, "%.3e", maxR1);
	ref += buffer;
	ref += "\r\n";
	ref += "\r\n";
	ref += "При пересчете с половинным шагом пройдено итераций p2=";
	sprintf(buffer, "%d", p2);
	ref += buffer;
	ref += "\r\n";	
	ref += "Достигнута точность Eps2=";
	sprintf(buffer, "%.3e", Eps_max2);
	ref += buffer;
	ref += "\r\n";
	ref += "Используется нулевое начальное приближение";
	ref += "\r\n";
	ref += "Невязка СЛАУ на начальном приближении (максимальная по модулю) R2(0)=";
	sprintf_s(buffer, "%.3e", MaxF2);
	ref += buffer;
	ref += "\r\n";
	ref += "Схема на сетке с половинным шагом решена с невязкой (максимальная по модулю)\r\n R(p2)=";
	sprintf_s(buffer, "%.3e", maxR);
	ref += buffer;
	ref += "\r\n";
	ref += "Максимальная разность двух решений\r\n |V2-V|=";
	sprintf_s(buffer, "%.3e", MaxPogr);
	ref += buffer;
	ref += " в узле x=";
	sprintf_s(buffer, "%.3lf", xMax);
	ref += buffer;
	ref += ", y=";
	sprintf_s(buffer, "%.3lf", yMax);
	ref += buffer;

	textBox1->Text = gcnew String(ref.c_str());

	for (int i = 0; i <= n; i++)
	{
		delete[] v[i];
		
	}
	for (int i = 0; i <= 2 * n; i++)
	{
		delete[] v2[i];		
		delete[] f[i];
		delete[] hv[i];
		delete[] R[i];
	}
	delete[] x;
	delete[] y;
}
};
}
