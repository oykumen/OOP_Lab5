#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Laba5::MyForm form;
	Application::Run(% form);
}

System::Void Laba5::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	chart_Graph->Visible = false;
	chart_Histogram->Visible = false;
	chart_PointDiag->Visible = false;
	dataGridView->Visible = true;

	PointList->AddPoint(p_1);
	PointList->AddPoint(p_2);
	PointList->AddPoint(p_3);
	PointList->AddPoint(p_4);
	PointList->AddPoint(p_5);
	PointList->AddPoint(p_6);
	PointList->AddPoint(p_7);
	PointList->AddPoint(p_8);
	PointList->AddPoint(p_9);
	PointList->AddPoint(p_10);

	ArrayList^ outList = gcnew ArrayList();

	outList = PointList->Get_Points();

	for (int i = 0; i < outList->Count; i++)
	{
		dataGridView->Rows->Add(static_cast<Pointt^>(outList[i])->Get_X(), static_cast<Pointt^>(outList[i])->Get_Y());
	}
	return System::Void();
}

System::Void Laba5::MyForm::button_Histogram_Click(System::Object^ sender, System::EventArgs^ e)
{
	chart_Graph->Visible = false;
	chart_Histogram->Visible = true;
	chart_PointDiag->Visible = false;
	dataGridView->Visible = false;

	ArrayList^ outList = gcnew ArrayList();

	outList = PointList->Get_Points();
	dataGridView->Rows->Clear();
	chart_Histogram->Series[0]->Points->Clear();
	chart_Histogram->Series[1]->Points->Clear();
	for (int i = 0; i < outList->Count; i++)
	{
		chart_Histogram->Series[0]->Points->AddXY(i, static_cast<Pointt^>(outList[i])->Get_X());
		chart_Histogram->Series[1]->Points->AddXY(i, static_cast<Pointt^>(outList[i])->Get_Y());
	}

	return System::Void();
}

System::Void Laba5::MyForm::button_Graph_Click(System::Object^ sender, System::EventArgs^ e)
{
	chart_Graph->Visible = true;
	chart_Histogram->Visible = false;
	chart_PointDiag->Visible = false;
	dataGridView->Visible = false;

	ArrayList^ outList = gcnew ArrayList();

	outList = PointList->Get_Points();
	dataGridView->Rows->Clear();
	chart_Graph->Series[0]->Points->Clear();
	chart_Graph->Series[1]->Points->Clear();
	for (int i = 0; i < outList->Count; i++)
	{
		chart_Graph->Series[0]->Points->AddXY(i, static_cast<Pointt^>(outList[i])->Get_X());
		chart_Graph->Series[1]->Points->AddXY(i, static_cast<Pointt^>(outList[i])->Get_Y());
	}
	return System::Void();
}

System::Void Laba5::MyForm::button_PointDiag_Click(System::Object^ sender, System::EventArgs^ e)
{
	chart_Graph->Visible = false;
	chart_Histogram->Visible = false;
	chart_PointDiag->Visible = true;
	dataGridView->Visible = false;

	ArrayList^ outList = gcnew ArrayList();

	outList = PointList->Get_Points();
	dataGridView->Rows->Clear();
	chart_PointDiag->Series[0]->Points->Clear();
	chart_PointDiag->Series[1]->Points->Clear();
	for (int i = 0; i < outList->Count; i++)
	{
		chart_PointDiag->Series[0]->Points->AddXY(i, static_cast<Pointt^>(outList[i])->Get_X());
		chart_PointDiag->Series[1]->Points->AddXY(i, static_cast<Pointt^>(outList[i])->Get_Y());
	}
	return System::Void();
}

System::Void Laba5::MyForm::button_load_Click(System::Object^ sender, System::EventArgs^ e)
{
	chart_Graph->Visible = false;
	chart_Histogram->Visible = false;
	chart_PointDiag->Visible = false;
	dataGridView->Visible = true;
	ArrayList^ outList = gcnew ArrayList();

	outList = PointList->Get_Points();
	dataGridView->Rows->Clear();
	for (int i = 0; i < outList->Count; i++)
	{
		dataGridView->Rows->Add(static_cast<Pointt^>(outList[i])->Get_X(), static_cast<Pointt^>(outList[i])->Get_Y());
	}

	return System::Void();
}
