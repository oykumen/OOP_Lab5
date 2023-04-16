#pragma once
#include "Points.h"
namespace Laba5 {

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
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart_Histogram;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button_PointDiag;
	private: System::Windows::Forms::Button^ button_Graph;
	private: System::Windows::Forms::Button^ button_Histogram;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart_Graph;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart_PointDiag;
	private: System::Windows::Forms::DataGridView^ dataGridView;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_X;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_Y;
	private:
		Points^ PointList = gcnew Points();
		Pointt^ p_1 = gcnew Pointt(4, 20);
		Pointt^ p_2 = gcnew Pointt(13, 5);
		Pointt^ p_3 = gcnew Pointt(1, 6);
		Pointt^ p_4 = gcnew Pointt(7, 7);
		Pointt^ p_5 = gcnew Pointt(1, 15);
		Pointt^ p_6 = gcnew Pointt(8, 3);
		Pointt^ p_7 = gcnew Pointt(7, 1);
		Pointt^ p_8 = gcnew Pointt(15, 11);
		Pointt^ p_9 = gcnew Pointt(5, 4);
		Pointt^ p_10 = gcnew Pointt(12, 3);
	private: System::Windows::Forms::Button^ button_load;

	protected:

	protected:

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->chart_Histogram = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button_PointDiag = (gcnew System::Windows::Forms::Button());
			this->button_Graph = (gcnew System::Windows::Forms::Button());
			this->button_Histogram = (gcnew System::Windows::Forms::Button());
			this->chart_Graph = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart_PointDiag = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Column_X = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_Y = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button_load = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_Histogram))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_Graph))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_PointDiag))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// chart_Histogram
			// 
			chartArea1->AxisX->Enabled = System::Windows::Forms::DataVisualization::Charting::AxisEnabled::True;
			chartArea1->AxisX->IsLabelAutoFit = false;
			chartArea1->AxisX->LabelStyle->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			chartArea1->AxisX->LabelStyle->TruncatedLabels = true;
			chartArea1->AxisX->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::NotSet;
			chartArea1->AxisX->MajorGrid->Enabled = false;
			chartArea1->AxisX->MajorTickMark->Enabled = false;
			chartArea1->AxisX2->Enabled = System::Windows::Forms::DataVisualization::Charting::AxisEnabled::False;
			chartArea1->AxisY->Enabled = System::Windows::Forms::DataVisualization::Charting::AxisEnabled::False;
			chartArea1->AxisY2->Enabled = System::Windows::Forms::DataVisualization::Charting::AxisEnabled::False;
			chartArea1->Name = L"ChartArea1";
			this->chart_Histogram->ChartAreas->Add(chartArea1);
			legend1->Alignment = System::Drawing::StringAlignment::Center;
			legend1->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Top;
			legend1->Name = L"Legend1";
			this->chart_Histogram->Legends->Add(legend1);
			this->chart_Histogram->Location = System::Drawing::Point(12, 12);
			this->chart_Histogram->Name = L"chart_Histogram";
			series1->ChartArea = L"ChartArea1";
			series1->IsValueShownAsLabel = true;
			series1->Legend = L"Legend1";
			series1->Name = L"Ряд1";
			series1->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Int32;
			series2->ChartArea = L"ChartArea1";
			series2->IsValueShownAsLabel = true;
			series2->Legend = L"Legend1";
			series2->Name = L"Ряд2";
			series2->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Int32;
			this->chart_Histogram->Series->Add(series1);
			this->chart_Histogram->Series->Add(series2);
			this->chart_Histogram->Size = System::Drawing::Size(512, 367);
			this->chart_Histogram->TabIndex = 0;
			this->chart_Histogram->Text = L"chart_Histogram";
			title1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title1->Name = L"Title1";
			title1->Text = L"Гистрограмма 2";
			this->chart_Histogram->Titles->Add(title1);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button_load);
			this->groupBox1->Controls->Add(this->button_PointDiag);
			this->groupBox1->Controls->Add(this->button_Graph);
			this->groupBox1->Controls->Add(this->button_Histogram);
			this->groupBox1->Location = System::Drawing::Point(530, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(189, 268);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Отображение диаграмм";
			// 
			// button_PointDiag
			// 
			this->button_PointDiag->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_PointDiag->Location = System::Drawing::Point(6, 207);
			this->button_PointDiag->Name = L"button_PointDiag";
			this->button_PointDiag->Size = System::Drawing::Size(177, 52);
			this->button_PointDiag->TabIndex = 2;
			this->button_PointDiag->Text = L"Точечная диаграмма";
			this->button_PointDiag->UseVisualStyleBackColor = true;
			this->button_PointDiag->Click += gcnew System::EventHandler(this, &MyForm::button_PointDiag_Click);
			// 
			// button_Graph
			// 
			this->button_Graph->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_Graph->Location = System::Drawing::Point(6, 149);
			this->button_Graph->Name = L"button_Graph";
			this->button_Graph->Size = System::Drawing::Size(177, 52);
			this->button_Graph->TabIndex = 1;
			this->button_Graph->Text = L"График";
			this->button_Graph->UseVisualStyleBackColor = true;
			this->button_Graph->Click += gcnew System::EventHandler(this, &MyForm::button_Graph_Click);
			// 
			// button_Histogram
			// 
			this->button_Histogram->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_Histogram->Location = System::Drawing::Point(6, 91);
			this->button_Histogram->Name = L"button_Histogram";
			this->button_Histogram->Size = System::Drawing::Size(177, 52);
			this->button_Histogram->TabIndex = 0;
			this->button_Histogram->Text = L"Гистограмма";
			this->button_Histogram->UseVisualStyleBackColor = true;
			this->button_Histogram->Click += gcnew System::EventHandler(this, &MyForm::button_Histogram_Click);
			// 
			// chart_Graph
			// 
			chartArea2->AxisX->Enabled = System::Windows::Forms::DataVisualization::Charting::AxisEnabled::True;
			chartArea2->AxisX->MajorGrid->Enabled = false;
			chartArea2->AxisX->MajorTickMark->Enabled = false;
			chartArea2->AxisY->Enabled = System::Windows::Forms::DataVisualization::Charting::AxisEnabled::True;
			chartArea2->AxisY->Title = L"Ось Y";
			chartArea2->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea2->Name = L"ChartArea1";
			this->chart_Graph->ChartAreas->Add(chartArea2);
			legend2->Alignment = System::Drawing::StringAlignment::Center;
			legend2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			legend2->IsTextAutoFit = false;
			legend2->LegendStyle = System::Windows::Forms::DataVisualization::Charting::LegendStyle::Column;
			legend2->Name = L"Legend1";
			this->chart_Graph->Legends->Add(legend2);
			this->chart_Graph->Location = System::Drawing::Point(12, 12);
			this->chart_Graph->Name = L"chart_Graph";
			series3->BorderWidth = 2;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Legend = L"Legend1";
			series3->MarkerSize = 12;
			series3->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Diamond;
			series3->Name = L"Ряд1";
			series4->BorderWidth = 2;
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series4->Legend = L"Legend1";
			series4->MarkerSize = 12;
			series4->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Square;
			series4->Name = L"Ряд2";
			this->chart_Graph->Series->Add(series3);
			this->chart_Graph->Series->Add(series4);
			this->chart_Graph->Size = System::Drawing::Size(512, 367);
			this->chart_Graph->TabIndex = 2;
			this->chart_Graph->Text = L"chart1";
			title2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title2->Name = L"График 1";
			title2->Text = L"График 1";
			this->chart_Graph->Titles->Add(title2);
			// 
			// chart_PointDiag
			// 
			chartArea3->AxisX->MajorGrid->Enabled = false;
			chartArea3->AxisX->MajorTickMark->Enabled = false;
			chartArea3->AxisY->Enabled = System::Windows::Forms::DataVisualization::Charting::AxisEnabled::False;
			chartArea3->Name = L"ChartArea1";
			this->chart_PointDiag->ChartAreas->Add(chartArea3);
			legend3->Alignment = System::Drawing::StringAlignment::Center;
			legend3->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Top;
			legend3->Name = L"Legend1";
			this->chart_PointDiag->Legends->Add(legend3);
			this->chart_PointDiag->Location = System::Drawing::Point(12, 12);
			this->chart_PointDiag->Name = L"chart_PointDiag";
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series5->IsValueShownAsLabel = true;
			series5->Label = L"#VALX; #VAL";
			series5->Legend = L"Legend1";
			series5->MarkerSize = 10;
			series5->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Diamond;
			series5->Name = L"Ряд1";
			series5->SmartLabelStyle->MovingDirection = static_cast<System::Windows::Forms::DataVisualization::Charting::LabelAlignmentStyles>((System::Windows::Forms::DataVisualization::Charting::LabelAlignmentStyles::Right | System::Windows::Forms::DataVisualization::Charting::LabelAlignmentStyles::TopRight));
			series5->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Int32;
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series6->IsValueShownAsLabel = true;
			series6->Label = L"#VALX; #VAL";
			series6->Legend = L"Legend1";
			series6->MarkerSize = 10;
			series6->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Square;
			series6->Name = L"Ряд2";
			series6->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Int32;
			this->chart_PointDiag->Series->Add(series5);
			this->chart_PointDiag->Series->Add(series6);
			this->chart_PointDiag->Size = System::Drawing::Size(512, 367);
			this->chart_PointDiag->TabIndex = 3;
			this->chart_PointDiag->Text = L"chart1";
			title3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title3->Name = L"Title1";
			title3->Text = L"Точечная диаграмма 2";
			this->chart_PointDiag->Titles->Add(title3);
			// 
			// dataGridView
			// 
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column_X,
					this->Column_Y
			});
			this->dataGridView->Location = System::Drawing::Point(12, 12);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->RowHeadersWidth = 51;
			this->dataGridView->RowTemplate->Height = 24;
			this->dataGridView->Size = System::Drawing::Size(518, 367);
			this->dataGridView->TabIndex = 4;
			// 
			// Column_X
			// 
			this->Column_X->HeaderText = L"X";
			this->Column_X->MinimumWidth = 6;
			this->Column_X->Name = L"Column_X";
			this->Column_X->Width = 125;
			// 
			// Column_Y
			// 
			this->Column_Y->HeaderText = L"Y";
			this->Column_Y->MinimumWidth = 6;
			this->Column_Y->Name = L"Column_Y";
			this->Column_Y->Width = 125;
			// 
			// button_load
			// 
			this->button_load->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_load->Location = System::Drawing::Point(6, 33);
			this->button_load->Name = L"button_load";
			this->button_load->Size = System::Drawing::Size(177, 52);
			this->button_load->TabIndex = 3;
			this->button_load->Text = L"Загрузить точки";
			this->button_load->UseVisualStyleBackColor = true;
			this->button_load->Click += gcnew System::EventHandler(this, &MyForm::button_load_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(731, 391);
			this->Controls->Add(this->dataGridView);
			this->Controls->Add(this->chart_PointDiag);
			this->Controls->Add(this->chart_Graph);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->chart_Histogram);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(749, 438);
			this->MinimumSize = System::Drawing::Size(749, 438);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Диаграммы";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_Histogram))->EndInit();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_Graph))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_PointDiag))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_Histogram_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_Graph_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_PointDiag_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_load_Click(System::Object^ sender, System::EventArgs^ e);
};
}
