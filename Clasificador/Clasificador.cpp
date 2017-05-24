#include "stdafx.h"  //________________________________________ Clasificador.cpp
#include "Clasificador.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	Clasificador app;
	return app.BeginDialog(IDI_Clasificador, hInstance);
}

void Clasificador::Window_Open(Win::Event& e)
{
}

void Clasificador::btInsertar_Click(Win::Event& e)
{
	const double number = tbxEntrada.DoubleValue;
	inputData.push_back(number);
	tbxEntrada.Text = L"";
	tbxEntrada.SetFocus();
	wstring texto;
	Sys::Format(texto, L"%g\r\n", number);
	tbxSalida.Text += texto;
}

void Clasificador::btMinimo_Click(Win::Event& e)
{
	if (inputData.empty() == true)
	{
		tbxClasificar.Text = L"";
		return;
	}
	double minimo = inputData[0];
	const unsigned int contador = inputData.size();
	for (int i = 1; i < contador; i++)
	{
		if (inputData[i] < minimo)
		{
			minimo = inputData[i];
		}
	}
	tbxClasificar.DoubleValue = minimo;
}

void Clasificador::btMaximo_Click(Win::Event& e)
{
	if (inputData.empty() == true)
	{
		tbxClasificar.Text = L"";
		return;
	}
	double maximo = inputData[0];
	const unsigned int contador = inputData.size();
	for (int i = 1; i < contador; i++)
	{
		if (inputData[i] > maximo)
		{
			maximo = inputData[i];
		}
	}
	tbxClasificar.DoubleValue = maximo;
}

void Clasificador::btPositivo_Click(Win::Event& e)
{
	tbxClasificar.Text = L"";
	if (inputData.empty() == true)
	{
		tbxClasificar.Text = L"";
		return;
	}
	const unsigned int contador = inputData.size();
	for (int i = 0; i < contador; i++)
	{
		if (inputData[i] >=0)
		{
			wstring texto;
			Sys::Format(texto, L"%g\r\n", inputData[i]);
			tbxClasificar.Text += texto;
		}
	}
}

void Clasificador::btNegativo_Click(Win::Event& e)
{
	tbxClasificar.Text = L"";
	if (inputData.empty() == true)
	{
		tbxClasificar.Text = L"";
		return;
	}
	const unsigned int contador = inputData.size();
	for (int i = 0; i < contador; i++)
	{
		if (inputData[i] < 0)
		{
			wstring texto;
			Sys::Format(texto, L"%g\r\n", inputData[i]);
			tbxClasificar.Text += texto;
		}
	}
}

void Clasificador::btSum_Click(Win::Event& e)
{
	tbxClasificar.Text = L"";
	if (inputData.empty() == true)
	{
		tbxClasificar.Text = L"";
		return;
	}
	const unsigned int contador = inputData.size();
	double suma = 0.0;
	for (int i = 0; i < contador; i++)
	{
		suma += inputData[i];
	}
	tbxClasificar.DoubleValue = suma;
}

void Clasificador::btPromedio_Click(Win::Event& e)
{
	tbxClasificar.Text = L"";
	if (inputData.empty() == true)
	{
		tbxClasificar.Text = L"";
		return;
	}
	const unsigned int contador = inputData.size();
	double suma = 0.0;
	for (int i = 0; i < contador; i++)
	{
		suma += inputData[i];
	}
	suma = suma / contador;
	tbxClasificar.DoubleValue = suma;
}

void Clasificador::btLimpiar_Click(Win::Event& e)
{
	tbxEntrada.Text = L"";
	tbxClasificar.Text = L"";
	tbxSalida.Text = L"";
	inputData.clear();
}

