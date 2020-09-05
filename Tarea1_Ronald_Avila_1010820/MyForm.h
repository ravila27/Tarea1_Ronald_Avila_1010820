#pragma once
#define Vmax 20

namespace Tarea1RonaldAvila1010820 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Threading;
	using namespace System::Diagnostics;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tpEjercicio1;
	private: System::Windows::Forms::Button^ btnCalcular;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtResultado;
	private: System::Windows::Forms::TextBox^ txtMultiplicador;
	private: System::Windows::Forms::TextBox^ txtMultiplicando;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tpEjercicio2;
	private: System::Windows::Forms::TabPage^ tpEjercicio3;
	private: System::Windows::Forms::TabPage^ tpEjercicio4;
	private: System::Windows::Forms::Button^ btnSalir;
	private: System::Windows::Forms::Button^ btnIterativa;
	private: System::Windows::Forms::Button^ btnGenerar;

	private: System::Windows::Forms::TextBox^ txtColumnas;
	private: System::Windows::Forms::TextBox^ txtFilas;
	private: System::Windows::Forms::DataGridView^ dgvDeterminante;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::GroupBox^ Importar;


	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::Button^ btnComprobar;
	private: System::Windows::Forms::TextBox^ txtDireccionPalabras;




	private: System::Windows::Forms::Button^ btnImportartxt;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::OpenFileDialog^ ofdImportar;
	private: System::Windows::Forms::DataGridView^ dgvPalabras;




	private: System::Windows::Forms::OpenFileDialog^ ofdImportarPalabras;
	private: System::Windows::Forms::ListBox^ lbTipoPalabra;


	private: System::Windows::Forms::Button^ btnConvIteracion;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txtConversion;
	private: System::Windows::Forms::TextBox^ txtDecimal;
	private: System::Windows::Forms::TextBox^ txtCantidadInicial;




	private: System::Windows::Forms::Button^ btnCalcularMatriz;
	private: System::Windows::Forms::TextBox^ txtBaseConvertir;
	private: System::Windows::Forms::TextBox^ txtBaseInicial;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::LinkLabel^ lblSWIejercicio1;
	private: System::Windows::Forms::LinkLabel^ lblSWRejercicio1;
	private: System::Windows::Forms::Button^ btnConversionRec;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::LinkLabel^ lblSWE2I;
	private: System::Windows::Forms::LinkLabel^ lblSWEJ2R;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::LinkLabel^ lblSWE4I;
private: System::Windows::Forms::LinkLabel^ lblSWE4R;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label26;




	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tpEjercicio1 = (gcnew System::Windows::Forms::TabPage());
			this->lblSWIejercicio1 = (gcnew System::Windows::Forms::LinkLabel());
			this->lblSWRejercicio1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->btnIterativa = (gcnew System::Windows::Forms::Button());
			this->btnCalcular = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtResultado = (gcnew System::Windows::Forms::TextBox());
			this->txtMultiplicador = (gcnew System::Windows::Forms::TextBox());
			this->txtMultiplicando = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tpEjercicio2 = (gcnew System::Windows::Forms::TabPage());
			this->lblSWE2I = (gcnew System::Windows::Forms::LinkLabel());
			this->lblSWEJ2R = (gcnew System::Windows::Forms::LinkLabel());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->lbTipoPalabra = (gcnew System::Windows::Forms::ListBox());
			this->dgvPalabras = (gcnew System::Windows::Forms::DataGridView());
			this->btnComprobar = (gcnew System::Windows::Forms::Button());
			this->txtDireccionPalabras = (gcnew System::Windows::Forms::TextBox());
			this->btnImportartxt = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tpEjercicio3 = (gcnew System::Windows::Forms::TabPage());
			this->Importar = (gcnew System::Windows::Forms::GroupBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->btnCalcularMatriz = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtFilas = (gcnew System::Windows::Forms::TextBox());
			this->btnGenerar = (gcnew System::Windows::Forms::Button());
			this->txtColumnas = (gcnew System::Windows::Forms::TextBox());
			this->dgvDeterminante = (gcnew System::Windows::Forms::DataGridView());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tpEjercicio4 = (gcnew System::Windows::Forms::TabPage());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->lblSWE4I = (gcnew System::Windows::Forms::LinkLabel());
			this->lblSWE4R = (gcnew System::Windows::Forms::LinkLabel());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->btnConversionRec = (gcnew System::Windows::Forms::Button());
			this->txtBaseConvertir = (gcnew System::Windows::Forms::TextBox());
			this->txtBaseInicial = (gcnew System::Windows::Forms::TextBox());
			this->btnConvIteracion = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtConversion = (gcnew System::Windows::Forms::TextBox());
			this->txtDecimal = (gcnew System::Windows::Forms::TextBox());
			this->txtCantidadInicial = (gcnew System::Windows::Forms::TextBox());
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->ofdImportar = (gcnew System::Windows::Forms::OpenFileDialog());
			this->ofdImportarPalabras = (gcnew System::Windows::Forms::OpenFileDialog());
			this->tabControl1->SuspendLayout();
			this->tpEjercicio1->SuspendLayout();
			this->tpEjercicio2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPalabras))->BeginInit();
			this->tpEjercicio3->SuspendLayout();
			this->Importar->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDeterminante))->BeginInit();
			this->tpEjercicio4->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tpEjercicio1);
			this->tabControl1->Controls->Add(this->tpEjercicio2);
			this->tabControl1->Controls->Add(this->tpEjercicio3);
			this->tabControl1->Controls->Add(this->tpEjercicio4);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Gadugi", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(13, 13);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(948, 437);
			this->tabControl1->TabIndex = 0;
			// 
			// tpEjercicio1
			// 
			this->tpEjercicio1->Controls->Add(this->lblSWIejercicio1);
			this->tpEjercicio1->Controls->Add(this->lblSWRejercicio1);
			this->tpEjercicio1->Controls->Add(this->label20);
			this->tpEjercicio1->Controls->Add(this->label19);
			this->tpEjercicio1->Controls->Add(this->btnIterativa);
			this->tpEjercicio1->Controls->Add(this->btnCalcular);
			this->tpEjercicio1->Controls->Add(this->label5);
			this->tpEjercicio1->Controls->Add(this->label4);
			this->tpEjercicio1->Controls->Add(this->txtResultado);
			this->tpEjercicio1->Controls->Add(this->txtMultiplicador);
			this->tpEjercicio1->Controls->Add(this->txtMultiplicando);
			this->tpEjercicio1->Controls->Add(this->label3);
			this->tpEjercicio1->Controls->Add(this->label2);
			this->tpEjercicio1->Controls->Add(this->label1);
			this->tpEjercicio1->Location = System::Drawing::Point(4, 25);
			this->tpEjercicio1->Name = L"tpEjercicio1";
			this->tpEjercicio1->Padding = System::Windows::Forms::Padding(3);
			this->tpEjercicio1->Size = System::Drawing::Size(940, 408);
			this->tpEjercicio1->TabIndex = 0;
			this->tpEjercicio1->Text = L"Ejercicio 1";
			this->tpEjercicio1->UseVisualStyleBackColor = true;
			// 
			// lblSWIejercicio1
			// 
			this->lblSWIejercicio1->AutoSize = true;
			this->lblSWIejercicio1->Location = System::Drawing::Point(626, 376);
			this->lblSWIejercicio1->Name = L"lblSWIejercicio1";
			this->lblSWIejercicio1->Size = System::Drawing::Size(16, 16);
			this->lblSWIejercicio1->TabIndex = 13;
			this->lblSWIejercicio1->TabStop = true;
			this->lblSWIejercicio1->Text = L"X";
			// 
			// lblSWRejercicio1
			// 
			this->lblSWRejercicio1->AutoSize = true;
			this->lblSWRejercicio1->Location = System::Drawing::Point(196, 376);
			this->lblSWRejercicio1->Name = L"lblSWRejercicio1";
			this->lblSWRejercicio1->Size = System::Drawing::Size(16, 16);
			this->lblSWRejercicio1->TabIndex = 12;
			this->lblSWRejercicio1->TabStop = true;
			this->lblSWRejercicio1->Text = L"X";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(488, 376);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(132, 16);
			this->label20->TabIndex = 11;
			this->label20->Text = L"StopWatch Iteración: ";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(34, 376);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(156, 16);
			this->label19->TabIndex = 10;
			this->label19->Text = L"StopWatch Recursividad: ";
			this->label19->Click += gcnew System::EventHandler(this, &MyForm::label19_Click);
			// 
			// btnIterativa
			// 
			this->btnIterativa->BackColor = System::Drawing::Color::White;
			this->btnIterativa->Location = System::Drawing::Point(491, 240);
			this->btnIterativa->Name = L"btnIterativa";
			this->btnIterativa->Size = System::Drawing::Size(139, 46);
			this->btnIterativa->TabIndex = 9;
			this->btnIterativa->Text = L"Calcular en forma iterativa";
			this->btnIterativa->UseVisualStyleBackColor = false;
			this->btnIterativa->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btnCalcular
			// 
			this->btnCalcular->BackColor = System::Drawing::Color::White;
			this->btnCalcular->Location = System::Drawing::Point(491, 137);
			this->btnCalcular->Name = L"btnCalcular";
			this->btnCalcular->Size = System::Drawing::Size(139, 46);
			this->btnCalcular->TabIndex = 8;
			this->btnCalcular->Text = L"Calcular en forma recursiva";
			this->btnCalcular->UseVisualStyleBackColor = false;
			this->btnCalcular->Click += gcnew System::EventHandler(this, &MyForm::btnCalcular_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(711, 219);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(17, 16);
			this->label5->TabIndex = 7;
			this->label5->Text = L"=";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(391, 201);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(16, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"X";
			// 
			// txtResultado
			// 
			this->txtResultado->Enabled = false;
			this->txtResultado->Location = System::Drawing::Point(810, 216);
			this->txtResultado->Name = L"txtResultado";
			this->txtResultado->Size = System::Drawing::Size(100, 25);
			this->txtResultado->TabIndex = 5;
			// 
			// txtMultiplicador
			// 
			this->txtMultiplicador->Location = System::Drawing::Point(296, 274);
			this->txtMultiplicador->Name = L"txtMultiplicador";
			this->txtMultiplicador->Size = System::Drawing::Size(100, 25);
			this->txtMultiplicador->TabIndex = 4;
			// 
			// txtMultiplicando
			// 
			this->txtMultiplicando->Location = System::Drawing::Point(296, 116);
			this->txtMultiplicando->Name = L"txtMultiplicando";
			this->txtMultiplicando->Size = System::Drawing::Size(100, 25);
			this->txtMultiplicando->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(34, 277);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(247, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Ingrese el segundo factor (Multiplicador)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(34, 119);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(237, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ingrese el primer factor (Multiplicando)";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Gadugi", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(170, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(604, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Multiplicación de dos números usando sumas ";
			// 
			// tpEjercicio2
			// 
			this->tpEjercicio2->Controls->Add(this->lblSWE2I);
			this->tpEjercicio2->Controls->Add(this->lblSWEJ2R);
			this->tpEjercicio2->Controls->Add(this->label21);
			this->tpEjercicio2->Controls->Add(this->label11);
			this->tpEjercicio2->Controls->Add(this->lbTipoPalabra);
			this->tpEjercicio2->Controls->Add(this->dgvPalabras);
			this->tpEjercicio2->Controls->Add(this->btnComprobar);
			this->tpEjercicio2->Controls->Add(this->txtDireccionPalabras);
			this->tpEjercicio2->Controls->Add(this->btnImportartxt);
			this->tpEjercicio2->Controls->Add(this->label10);
			this->tpEjercicio2->Controls->Add(this->label9);
			this->tpEjercicio2->Location = System::Drawing::Point(4, 25);
			this->tpEjercicio2->Name = L"tpEjercicio2";
			this->tpEjercicio2->Padding = System::Windows::Forms::Padding(3);
			this->tpEjercicio2->Size = System::Drawing::Size(940, 408);
			this->tpEjercicio2->TabIndex = 1;
			this->tpEjercicio2->Text = L"Ejercicio 2";
			this->tpEjercicio2->UseVisualStyleBackColor = true;
			this->tpEjercicio2->Click += gcnew System::EventHandler(this, &MyForm::tpEjercicio2_Click);
			// 
			// lblSWE2I
			// 
			this->lblSWE2I->AutoSize = true;
			this->lblSWE2I->Location = System::Drawing::Point(741, 343);
			this->lblSWE2I->Name = L"lblSWE2I";
			this->lblSWE2I->Size = System::Drawing::Size(16, 16);
			this->lblSWE2I->TabIndex = 14;
			this->lblSWE2I->TabStop = true;
			this->lblSWE2I->Text = L"X";
			// 
			// lblSWEJ2R
			// 
			this->lblSWEJ2R->AutoSize = true;
			this->lblSWEJ2R->Location = System::Drawing::Point(741, 265);
			this->lblSWEJ2R->Name = L"lblSWEJ2R";
			this->lblSWEJ2R->Size = System::Drawing::Size(16, 16);
			this->lblSWEJ2R->TabIndex = 13;
			this->lblSWEJ2R->TabStop = true;
			this->lblSWEJ2R->Text = L"X";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(738, 327);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(132, 16);
			this->label21->TabIndex = 12;
			this->label21->Text = L"StopWatch Iteración: ";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(738, 248);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(156, 16);
			this->label11->TabIndex = 11;
			this->label11->Text = L"StopWatch Recursividad: ";
			// 
			// lbTipoPalabra
			// 
			this->lbTipoPalabra->FormattingEnabled = true;
			this->lbTipoPalabra->ItemHeight = 16;
			this->lbTipoPalabra->Location = System::Drawing::Point(408, 224);
			this->lbTipoPalabra->Name = L"lbTipoPalabra";
			this->lbTipoPalabra->Size = System::Drawing::Size(324, 164);
			this->lbTipoPalabra->TabIndex = 9;
			// 
			// dgvPalabras
			// 
			this->dgvPalabras->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dgvPalabras->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPalabras->Location = System::Drawing::Point(45, 70);
			this->dgvPalabras->Name = L"dgvPalabras";
			this->dgvPalabras->Size = System::Drawing::Size(849, 112);
			this->dgvPalabras->TabIndex = 5;
			// 
			// btnComprobar
			// 
			this->btnComprobar->BackColor = System::Drawing::Color::White;
			this->btnComprobar->Location = System::Drawing::Point(159, 312);
			this->btnComprobar->Name = L"btnComprobar";
			this->btnComprobar->Size = System::Drawing::Size(123, 46);
			this->btnComprobar->TabIndex = 4;
			this->btnComprobar->Text = L"Comprobar";
			this->btnComprobar->UseVisualStyleBackColor = false;
			this->btnComprobar->Click += gcnew System::EventHandler(this, &MyForm::btnComprobar_Click);
			// 
			// txtDireccionPalabras
			// 
			this->txtDireccionPalabras->Enabled = false;
			this->txtDireccionPalabras->Location = System::Drawing::Point(159, 226);
			this->txtDireccionPalabras->Name = L"txtDireccionPalabras";
			this->txtDireccionPalabras->Size = System::Drawing::Size(227, 25);
			this->txtDireccionPalabras->TabIndex = 3;
			this->txtDireccionPalabras->TextChanged += gcnew System::EventHandler(this, &MyForm::txtDireccionPalabras_TextChanged);
			// 
			// btnImportartxt
			// 
			this->btnImportartxt->BackColor = System::Drawing::Color::White;
			this->btnImportartxt->Location = System::Drawing::Point(56, 226);
			this->btnImportartxt->Name = L"btnImportartxt";
			this->btnImportartxt->Size = System::Drawing::Size(97, 23);
			this->btnImportartxt->TabIndex = 2;
			this->btnImportartxt->Text = L"Importar";
			this->btnImportartxt->UseVisualStyleBackColor = false;
			this->btnImportartxt->Click += gcnew System::EventHandler(this, &MyForm::btnImportartxt_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(53, 200);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(126, 16);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Importar archivo .txt";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Gadugi", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label9->Location = System::Drawing::Point(217, 16);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(504, 32);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Comprobación palabras palíndromas: ";
			// 
			// tpEjercicio3
			// 
			this->tpEjercicio3->Controls->Add(this->Importar);
			this->tpEjercicio3->Controls->Add(this->groupBox1);
			this->tpEjercicio3->Controls->Add(this->dgvDeterminante);
			this->tpEjercicio3->Controls->Add(this->label6);
			this->tpEjercicio3->Location = System::Drawing::Point(4, 25);
			this->tpEjercicio3->Name = L"tpEjercicio3";
			this->tpEjercicio3->Size = System::Drawing::Size(940, 408);
			this->tpEjercicio3->TabIndex = 2;
			this->tpEjercicio3->Text = L"Ejercicio 3";
			this->tpEjercicio3->UseVisualStyleBackColor = true;
			this->tpEjercicio3->Click += gcnew System::EventHandler(this, &MyForm::tpEjercicio3_Click);
			// 
			// Importar
			// 
			this->Importar->Controls->Add(this->label24);
			this->Importar->Controls->Add(this->label22);
			this->Importar->Controls->Add(this->btnCalcularMatriz);
			this->Importar->Location = System::Drawing::Point(3, 270);
			this->Importar->Name = L"Importar";
			this->Importar->Size = System::Drawing::Size(385, 109);
			this->Importar->TabIndex = 10;
			this->Importar->TabStop = false;
			this->Importar->Text = L"Importar Matriz";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(192, 60);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(132, 16);
			this->label24->TabIndex = 13;
			this->label24->Text = L"StopWatch Iteración: ";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(189, 28);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(156, 16);
			this->label22->TabIndex = 12;
			this->label22->Text = L"StopWatch Recursividad: ";
			// 
			// btnCalcularMatriz
			// 
			this->btnCalcularMatriz->BackColor = System::Drawing::Color::White;
			this->btnCalcularMatriz->Location = System::Drawing::Point(9, 28);
			this->btnCalcularMatriz->Name = L"btnCalcularMatriz";
			this->btnCalcularMatriz->Size = System::Drawing::Size(100, 45);
			this->btnCalcularMatriz->TabIndex = 0;
			this->btnCalcularMatriz->Text = L"Calcular";
			this->btnCalcularMatriz->UseVisualStyleBackColor = false;
			this->btnCalcularMatriz->Click += gcnew System::EventHandler(this, &MyForm::btnCalcularMatriz_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->txtFilas);
			this->groupBox1->Controls->Add(this->btnGenerar);
			this->groupBox1->Controls->Add(this->txtColumnas);
			this->groupBox1->Location = System::Drawing::Point(3, 85);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(303, 170);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Tamaño Matriz";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 85);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(279, 16);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Ingrese las cantidad de columnas de la matriz:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 33);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(247, 16);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Ingrese las cantidad de filas de la matriz:";
			// 
			// txtFilas
			// 
			this->txtFilas->Location = System::Drawing::Point(9, 50);
			this->txtFilas->Name = L"txtFilas";
			this->txtFilas->Size = System::Drawing::Size(100, 25);
			this->txtFilas->TabIndex = 4;
			// 
			// btnGenerar
			// 
			this->btnGenerar->BackColor = System::Drawing::Color::White;
			this->btnGenerar->Location = System::Drawing::Point(182, 128);
			this->btnGenerar->Name = L"btnGenerar";
			this->btnGenerar->Size = System::Drawing::Size(115, 36);
			this->btnGenerar->TabIndex = 6;
			this->btnGenerar->Text = L"Generar Tabla";
			this->btnGenerar->UseVisualStyleBackColor = false;
			this->btnGenerar->Click += gcnew System::EventHandler(this, &MyForm::btnGenerar_Click);
			// 
			// txtColumnas
			// 
			this->txtColumnas->Location = System::Drawing::Point(9, 101);
			this->txtColumnas->Name = L"txtColumnas";
			this->txtColumnas->Size = System::Drawing::Size(100, 25);
			this->txtColumnas->TabIndex = 5;
			// 
			// dgvDeterminante
			// 
			this->dgvDeterminante->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvDeterminante->Location = System::Drawing::Point(394, 85);
			this->dgvDeterminante->Name = L"dgvDeterminante";
			this->dgvDeterminante->Size = System::Drawing::Size(516, 294);
			this->dgvDeterminante->TabIndex = 3;
			this->dgvDeterminante->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Gadugi", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label6->Location = System::Drawing::Point(271, 22);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(376, 32);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Determinante de una matriz";
			// 
			// tpEjercicio4
			// 
			this->tpEjercicio4->Controls->Add(this->label26);
			this->tpEjercicio4->Controls->Add(this->lblSWE4I);
			this->tpEjercicio4->Controls->Add(this->lblSWE4R);
			this->tpEjercicio4->Controls->Add(this->label25);
			this->tpEjercicio4->Controls->Add(this->label23);
			this->tpEjercicio4->Controls->Add(this->btnConversionRec);
			this->tpEjercicio4->Controls->Add(this->txtBaseConvertir);
			this->tpEjercicio4->Controls->Add(this->txtBaseInicial);
			this->tpEjercicio4->Controls->Add(this->btnConvIteracion);
			this->tpEjercicio4->Controls->Add(this->label18);
			this->tpEjercicio4->Controls->Add(this->label17);
			this->tpEjercicio4->Controls->Add(this->label16);
			this->tpEjercicio4->Controls->Add(this->label15);
			this->tpEjercicio4->Controls->Add(this->label14);
			this->tpEjercicio4->Controls->Add(this->label13);
			this->tpEjercicio4->Controls->Add(this->label12);
			this->tpEjercicio4->Controls->Add(this->txtConversion);
			this->tpEjercicio4->Controls->Add(this->txtDecimal);
			this->tpEjercicio4->Controls->Add(this->txtCantidadInicial);
			this->tpEjercicio4->Location = System::Drawing::Point(4, 25);
			this->tpEjercicio4->Name = L"tpEjercicio4";
			this->tpEjercicio4->Size = System::Drawing::Size(940, 408);
			this->tpEjercicio4->TabIndex = 3;
			this->tpEjercicio4->Text = L"Ejercicio 4";
			this->tpEjercicio4->UseVisualStyleBackColor = true;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Gadugi", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label26->Location = System::Drawing::Point(200, 29);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(527, 32);
			this->label26->TabIndex = 20;
			this->label26->Text = L"Conversión de números base N a base N";
			// 
			// lblSWE4I
			// 
			this->lblSWE4I->AutoSize = true;
			this->lblSWE4I->Location = System::Drawing::Point(186, 337);
			this->lblSWE4I->Name = L"lblSWE4I";
			this->lblSWE4I->Size = System::Drawing::Size(16, 16);
			this->lblSWE4I->TabIndex = 19;
			this->lblSWE4I->TabStop = true;
			this->lblSWE4I->Text = L"X";
			// 
			// lblSWE4R
			// 
			this->lblSWE4R->AutoSize = true;
			this->lblSWE4R->Location = System::Drawing::Point(3, 337);
			this->lblSWE4R->Name = L"lblSWE4R";
			this->lblSWE4R->Size = System::Drawing::Size(16, 16);
			this->lblSWE4R->TabIndex = 18;
			this->lblSWE4R->TabStop = true;
			this->lblSWE4R->Text = L"X";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(186, 308);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(132, 16);
			this->label25->TabIndex = 17;
			this->label25->Text = L"StopWatch Iteración: ";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(3, 308);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(156, 16);
			this->label23->TabIndex = 16;
			this->label23->Text = L"StopWatch Recursividad: ";
			// 
			// btnConversionRec
			// 
			this->btnConversionRec->BackColor = System::Drawing::Color::White;
			this->btnConversionRec->Location = System::Drawing::Point(430, 329);
			this->btnConversionRec->Name = L"btnConversionRec";
			this->btnConversionRec->Size = System::Drawing::Size(100, 56);
			this->btnConversionRec->TabIndex = 15;
			this->btnConversionRec->Text = L"Convertir de forma recursiva";
			this->btnConversionRec->UseVisualStyleBackColor = false;
			this->btnConversionRec->Click += gcnew System::EventHandler(this, &MyForm::btnConversionRec_Click);
			// 
			// txtBaseConvertir
			// 
			this->txtBaseConvertir->Location = System::Drawing::Point(680, 112);
			this->txtBaseConvertir->Name = L"txtBaseConvertir";
			this->txtBaseConvertir->Size = System::Drawing::Size(100, 25);
			this->txtBaseConvertir->TabIndex = 14;
			// 
			// txtBaseInicial
			// 
			this->txtBaseInicial->Location = System::Drawing::Point(131, 112);
			this->txtBaseInicial->Name = L"txtBaseInicial";
			this->txtBaseInicial->Size = System::Drawing::Size(100, 25);
			this->txtBaseInicial->TabIndex = 13;
			// 
			// btnConvIteracion
			// 
			this->btnConvIteracion->BackColor = System::Drawing::Color::White;
			this->btnConvIteracion->Location = System::Drawing::Point(430, 241);
			this->btnConvIteracion->Name = L"btnConvIteracion";
			this->btnConvIteracion->Size = System::Drawing::Size(100, 56);
			this->btnConvIteracion->TabIndex = 12;
			this->btnConvIteracion->Text = L"Convertir de forma iterativa";
			this->btnConvIteracion->UseVisualStyleBackColor = false;
			this->btnConvIteracion->Click += gcnew System::EventHandler(this, &MyForm::btnConvIteracion_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(677, 95);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(101, 16);
			this->label18->TabIndex = 11;
			this->label18->Text = L"Base a convertir";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(128, 168);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(185, 16);
			this->label17->TabIndex = 10;
			this->label17->Text = L"Ingrese la cantidad a convertir";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(677, 171);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(77, 16);
			this->label16->TabIndex = 9;
			this->label16->Text = L"Conversión ";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(450, 168);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(54, 16);
			this->label15->TabIndex = 8;
			this->label15->Text = L"Decimal";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(543, 190);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(122, 16);
			this->label14->TabIndex = 7;
			this->label14->Text = L"--------------------->";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(293, 190);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(122, 16);
			this->label13->TabIndex = 6;
			this->label13->Text = L"--------------------->";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(128, 95);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(72, 16);
			this->label12->TabIndex = 5;
			this->label12->Text = L"Base incial ";
			// 
			// txtConversion
			// 
			this->txtConversion->Enabled = false;
			this->txtConversion->Location = System::Drawing::Point(680, 187);
			this->txtConversion->Name = L"txtConversion";
			this->txtConversion->Size = System::Drawing::Size(138, 25);
			this->txtConversion->TabIndex = 4;
			// 
			// txtDecimal
			// 
			this->txtDecimal->Enabled = false;
			this->txtDecimal->Location = System::Drawing::Point(430, 187);
			this->txtDecimal->Name = L"txtDecimal";
			this->txtDecimal->Size = System::Drawing::Size(100, 25);
			this->txtDecimal->TabIndex = 3;
			// 
			// txtCantidadInicial
			// 
			this->txtCantidadInicial->Location = System::Drawing::Point(131, 187);
			this->txtCantidadInicial->Name = L"txtCantidadInicial";
			this->txtCantidadInicial->Size = System::Drawing::Size(147, 25);
			this->txtCantidadInicial->TabIndex = 2;
			// 
			// btnSalir
			// 
			this->btnSalir->BackColor = System::Drawing::SystemColors::Window;
			this->btnSalir->Location = System::Drawing::Point(411, 456);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(162, 36);
			this->btnSalir->TabIndex = 1;
			this->btnSalir->Text = L"Salir del programa";
			this->btnSalir->UseVisualStyleBackColor = false;
			this->btnSalir->Click += gcnew System::EventHandler(this, &MyForm::btnSalir_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SteelBlue;
			this->ClientSize = System::Drawing::Size(973, 504);
			this->Controls->Add(this->btnSalir);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"TAREA 1 - 1010820";
			this->tabControl1->ResumeLayout(false);
			this->tpEjercicio1->ResumeLayout(false);
			this->tpEjercicio1->PerformLayout();
			this->tpEjercicio2->ResumeLayout(false);
			this->tpEjercicio2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPalabras))->EndInit();
			this->tpEjercicio3->ResumeLayout(false);
			this->tpEjercicio3->PerformLayout();
			this->Importar->ResumeLayout(false);
			this->Importar->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDeterminante))->EndInit();
			this->tpEjercicio4->ResumeLayout(false);
			this->tpEjercicio4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion


//-------------------------------BOTÓN PARA SALIR DEL RPOGRAMA AL MOMENTO DE DESEARLO-----------------------------------

		private: System::Void btnSalir_Click(System::Object^ sender, System::EventArgs^ e) {

			MessageBox::Show("Ha salido del programa con exito ", "Salir ", MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->Close();

		}

//------------------------------------------Metodo para vaciar la matriz-------------------------------------------------------

	   void RestablecerMatriz() {
		   dgvDeterminante ->Rows->Clear();
		   dgvDeterminante ->Columns->Clear();
		   dgvDeterminante ->ColumnHeadersVisible = false;
		   dgvDeterminante ->RowHeadersVisible = false;
	   }


		
//--------------------------------PROBLEMA #1------------------------------------------------------------------------------------------------
	
	//----------------------Botón que resuelve la multiplicasión por recursividad---------------------------------

	private: System::Void btnCalcular_Click(System::Object^ sender, System::EventArgs^ e) {

		Stopwatch^ StopWatch1 = Stopwatch::StartNew();

		try
		{
			txtResultado->Text = " " + operacion(Convert::ToInt32(txtMultiplicando->Text), Convert::ToInt32(txtMultiplicador->Text));
		}
		catch (Exception ^ e)
		{
			MessageBox::Show("Se ha encontrado un error ", "Multiplicacion ", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		StopWatch1->Stop();
		lblSWRejercicio1->Text = StopWatch1->ElapsedMilliseconds + "";
		

	}

	//-------------Funcion que determina el resultado de la multiplicación para la recursividad --------------------------

		   int operacion(int multiplicando, int multiplicador)
		   {
			   if (multiplicador == 1) {

				   return multiplicando;
			   }
			   else if (multiplicador > 0) {

				   return multiplicando + operacion(multiplicando, multiplicador - 1);

			   }
			   else if (multiplicador < 0)
			   {

				   return -multiplicando + operacion(multiplicando, multiplicador + 1);

			   }
		   }
		   

		   
	//---------Botón para determinar la operación de manera iterativa-----------------------------------------------------------
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		Stopwatch^ StopWatch2 = Stopwatch::StartNew();

		try 
		{
			int multiplicando; 
			int multiplicador; 
			int resultado = 0;

			multiplicando = Convert::ToInt32(txtMultiplicando->Text);
			multiplicador = Convert::ToInt32(txtMultiplicador->Text);

			for (int i = 1; i <= multiplicador; i++) {
				resultado = resultado + multiplicando;
			}

			txtResultado->Text = " " + resultado ;

		}
		catch (Exception ^ e) 
		{
			MessageBox::Show("Se ha encontrado un error ", "Multiplicación ", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		StopWatch2->Stop();
		lblSWIejercicio1->Text = StopWatch2->ElapsedMilliseconds + "";


	}





//--------------------------------PROBLEMA #2------------------------------------------------------------------------------------------------



		   	//-----------------------Problema 2 Funcion recursiva---------------------------------------------------------------------------



	 int palidroma(char fila[], int inicio, int final) {

		 if (inicio >= final) {
			 
			 return 1;
		 }
		 else if (fila[inicio] == fila[final]) {
			 
			 return 0;
		 }

	 }


private: System::Void btnImportartxt_Click(System::Object^ sender, System::EventArgs^ e) {

	Stopwatch^ StopWatch3 = Stopwatch::StartNew();

	RestablecerMatriz();


	try {
		//Se agregan los filtros al OpenFileDialog
		ofdImportarPalabras->Filter = "Archivos separados por coma (txt) | *.txt";
		ofdImportarPalabras->FileName = "";

		//Unicamnte si el reultado de la apertura del archivo es exitosa se carga el archivo
		if (ofdImportarPalabras->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			RestablecerMatriz(); //Se elimina cualquier contenido de la matriz
			txtDireccionPalabras->Text = ofdImportarPalabras->FileName;

			//Se utiliza el objeto File para leer el archivo solo cuando el FileName es correcto
			//Importante haber llamado al namespace System::IO antes de usar File
			array<String^>^ archivoLineas = File::ReadAllLines(ofdImportarPalabras->FileName);

			if (archivoLineas->Length > 0) {

				//Obtiene la cantidad de elementos de la primer linea y ese toma como cantidad de columnas
				array<String^>^ archivoColumna = archivoLineas[0]->Split(',');
				if (archivoColumna->Length > 0) {
					int cantidadColumnas = archivoColumna->Length;

					//Agrega las columnas
					for (int i = 0; i < cantidadColumnas; i++) {
						//Crea una columna
						DataGridViewColumn^ nuevacolumna = gcnew DataGridViewColumn();
						nuevacolumna->Width = 90;
						//Le agrega el tipo de columna que será
						DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
						nuevacolumna->CellTemplate = cellTemplate;
						//Inserta la columna
						dgvPalabras->Columns->Add(nuevacolumna);
					}

					//Agrega las filas de manera dinámica
					for (int i = 0; i < archivoLineas->Length; i++) {
						dgvPalabras->Rows->Add();
					}




					//Llena el DatagridView
					for (int i = 0; i < archivoLineas->Length; i++) {
						array<String^>^ fila = archivoLineas[i]->Split(',');
						int j = 0;
						int cantidadPalindromas = 0;


						//Si alguna fila tiene más o menos objetos no afecta al funcionamiento ya que utiliza la cantidad de elementos de la primer fila
						while ((j < cantidadColumnas) && (j < fila->Length)) {
							dgvPalabras->Rows[i]->Cells[j]->Value = fila[j];

							try {

								System::String^ palabra;

								System::String^ inversa;

								int letras = fila[j]->Length;

								for (int k = letras - 1; k >= 0; k--) {

									palabra = fila[j]->Substring(k, 1);
									inversa = inversa + palabra;

								}

								if (fila[j] == inversa) {
									lbTipoPalabra->Items->Add(fila[j] + " SI es una palabra palíndroma");
									cantidadPalindromas++;
								}
								else {
									lbTipoPalabra->Items->Add(fila[j] + " NO es una palabra palíndroma");
								}


								j++;
							}
							catch (Exception ^ e) {

								MessageBox::Show("Se ha encontrado un error ", "Palabras palindromas ", MessageBoxButtons::OK, MessageBoxIcon::Error);

							}



						}

						lbTipoPalabra->Items->Add("Se encontraron " + cantidadPalindromas + " palabras palímdromas");
						lbTipoPalabra->Items->Add(" ");
						MessageBox::Show("Se ha completado la operación ", "Palabras palíndromas ", MessageBoxButtons::OK, MessageBoxIcon::Information);


					}


				}
			}

		}
		else {
			// Si no se selecciona correctamente un elemento entonces falla
			MessageBox::Show("No se seleccionó ningún archivo"
				, "Archivo no seleccionado"
				, MessageBoxButtons::OK
				, MessageBoxIcon::Exclamation);
		}
	} 
	catch (Exception^ e) {

		MessageBox::Show("No ha sido posible cargar el archivo, por favor intente de nuevo ", "Subir archivo ", MessageBoxButtons::OK, MessageBoxIcon::Error);
	
	}

	StopWatch3->Stop();
	lblSWE2I ->Text = StopWatch3->ElapsedMilliseconds + "";
}


	private: System::Void btnComprobar_Click(System::Object^ sender, System::EventArgs^ e) {

		




	}


//--------------------------------PROBLEMA #3--------------------------------------------------------------------------------------



private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}




	   //Metodo para generar la matriz del problema 3 con base en los datos para el determinante 
private: System::Void btnGenerar_Click(System::Object^ sender, System::EventArgs^ e) {

		int numFilas; 
		int numColumnas;

		try
		{
			numFilas = Convert::ToInt32(txtFilas->Text);
			numColumnas = Convert::ToInt32(txtColumnas->Text);
		}
		catch (Exception ^ e)
		{
			MessageBox::Show("Se ha encontrado un error ", "Determinante de una matriz ", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		RestablecerMatriz();

		if (numColumnas > 0)
		{
			for (int i = 0; i < numColumnas; i ++)
			{
				DataGridViewColumn^ NuevaColumna = gcnew DataGridViewColumn();
				NuevaColumna->Width = 80;

				DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
				NuevaColumna->CellTemplate = cellTemplate;

				dgvDeterminante->Columns->Add(NuevaColumna);
			}

		}

		if (numFilas > 0)
		{
			for(int j = 0; j < numFilas; j++)
			{
				dgvDeterminante->Rows->Add();
			}

		}

}


	private: System::Void btnCalcularMatriz_Click(System::Object^ sender, System::EventArgs^ e) {

		int numFilas = Convert::ToInt32(txtFilas->Text);
		int numColumnas = Convert::ToInt32(txtColumnas->Text);
		int valores;

		for (int i = 0; i < numFilas; i++) {
			for (int j = 0; j < numColumnas; j++) {

				dgvDeterminante->Rows[i]->Cells[j]->Value = valores;


			}
		}
	
	}






///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	private: System::Void btnCantidadPalabras_Click(System::Object^ sender, System::EventArgs^ e) {


	}










//-------------------------------------------PROBLEMA_4-----------------------------------------------------------------
private: System::Void btnConvIteracion_Click(System::Object^ sender, System::EventArgs^ e) {

	//--------------------------CONVERSION DE BASES DE BASE N A DECIMAL ITERATIVO---------------------------------------------------------
	Stopwatch^ StopWatch4 = Stopwatch::StartNew();

	try {

		int ingresoBase = Convert::ToInt32(txtBaseInicial->Text);
		int baseConvertir = Convert::ToInt32(txtBaseConvertir->Text);


		if (ingresoBase<2 || ingresoBase>9) {

			MessageBox::Show("Base fuera de los parámetros ", "Conversión de bases ", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}

		else  if (ingresoBase == 2 || 3 || 4 || 5 || 6 || 7 || 8 || 9) {
			
			//Se llama al método para convertir números de base N a decimales 
			BNAD();
			//Se llama al método para convertir números en base decimal a base N
			BDAN();


		}
	}
	catch (Exception ^ e){
		MessageBox::Show("Se ha detectado un error, por favor intente de nuevo ", "Conversión de bases ", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}

	StopWatch4->Stop();
	lblSWE4I->Text = StopWatch4->ElapsedMilliseconds + "";

	
}


	void BNAD(){

		System::String^ ValorInicial = txtCantidadInicial->Text;
		int cantidad = Convert::ToInt32(txtCantidadInicial->Text);
		int TamanoVector = ValorInicial->Length;


		//Declaracion variables para proceso en bases 
		int operacion;
		int caracter = 0;
		int acumulado = 0;
		int residuo = 0;
		int base = 0;
		int elevado = 0;

		base = Convert::ToInt32(txtBaseInicial->Text);

		for (int i = 0; i <= TamanoVector; i++) {

			operacion = cantidad / 10;
			residuo = cantidad % 10;

			if (residuo < base && residuo >= 0) {
				caracter = residuo * System::Math::Pow(base, elevado);
				acumulado = acumulado + caracter;
				cantidad = operacion;
				elevado++;
			}
			else {

				MessageBox::Show("Se han ingresado valores inválidos. Se tomarán en cuenta únicamente los caracteres válidos, por favor intente de nuevo ", "Caracteres erróneos respecto a su base ", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				txtConversion->Text = "ERROR";
				Convert::ToInt32(txtCantidadInicial->Text) == 0;
				residuo == -1;
				
			}


		}

		txtDecimal->Text = acumulado + "";

		

	}


	void BDAN() {

		int decimal = Convert::ToInt32(txtDecimal->Text);

		int operacion;
		int caracter = 0;
		int acumulado = 0;
		int residuo = 0;
		int base = 0;
		int elevado = 0;


		base = Convert::ToInt32(txtBaseConvertir->Text);

		while (decimal !=0)
		{
			operacion = decimal / base;
			residuo = decimal % base;
			if (residuo < base) {
				caracter = residuo * System::Math::Pow(10, elevado);
				acumulado = acumulado + caracter;
				decimal = operacion;
				elevado++;
			}
			else {
				MessageBox::Show("Se han ingresado valores inválidos, por favor intente de nuevo ", "Conversión de bases ", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);

			}
		}



		txtConversion->Text = acumulado + "";


	}

private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtDireccionPalabras_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnConversionRec_Click(System::Object^ sender, System::EventArgs^ e) {

	Stopwatch^ StopWatch5 = Stopwatch::StartNew();

	try
	{
		int numeroInicial = Convert::ToInt32(txtCantidadInicial->Text);
		int baseInicial = Convert::ToInt32(txtBaseInicial->Text);
		int baseDecimal = 10;
		int factor = 1;
		int numero = Convert::ToInt32(txtDecimal->Text);
		int baseN = Convert::ToInt32(txtBaseConvertir->Text);

		if (baseNaD(numeroInicial, factor) == 1) {
			MessageBox::Show("Se han ingresado valores inválidos respecto a la base, por favor intente de nuevo ", "Conversión de bases ", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);

		}
		else {

			txtDecimal->Text = baseNaD(numeroInicial, factor) + "";

			txtConversion->Text = baseDaN(numero, baseN) + "";

		}
	}
	catch (Exception ^ e)
	{
		MessageBox::Show("Se han ingresado valores inválidos respecto a la base, por favor intente de nuevo ", "Conversión de bases ", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);

	}
	
	StopWatch5->Stop();
	lblSWE4R->Text = StopWatch5->ElapsedMilliseconds + "";

}

	   int baseDaN(int numero, int baseN) {
		   char dato[10] = {0,1,2,3,4,5,6,7,8,9};

		   if (baseN > numero) {
			   return dato[numero];
		   }
		   else {
			   return baseDaN(numero / baseN, baseN) *10 +  dato[(numero % baseN)];
		   }
	   }

	   int baseNaD(int numeroInicial, int factor) {


		   int base = Convert::ToInt32(txtBaseInicial->Text);

		   if (numeroInicial>= 0 && numeroInicial <=1) {
			   return 1;
		   }
		   else  {
			   return baseNaD(numeroInicial / 10, factor * base) + (numeroInicial % base) * factor ;

		   }

	   }

private: System::Void tpEjercicio2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tpEjercicio3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}


