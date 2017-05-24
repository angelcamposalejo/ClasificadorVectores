#pragma once  //______________________________________ Clasificador.h  
#include "Resource.h"
class Clasificador : public Win::Dialog
{
public:
	Clasificador()
	{
	}
	~Clasificador()
	{
	}
	vector<double>inputData;
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Textbox tbxEntrada;
	Win::Button btInsertar;
	Win::Textbox tbxSalida;
	Win::Button btMinimo;
	Win::Button btMaximo;
	Win::Button btPositivo;
	Win::Button btNegativo;
	Win::Button btSum;
	Win::Button btPromedio;
	Win::Button btLimpiar;
	Win::Textbox tbxClasificar;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(578);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(309);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Clasificador";
		lb1.Create(NULL, L"Numero", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 14, 14, 106, 25, hWnd, 1000);
		tbxEntrada.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 13, 38, 108, 25, hWnd, 1001);
		btInsertar.Create(NULL, L"Insertar", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 14, 71, 108, 28, hWnd, 1002);
		tbxSalida.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_AUTOVSCROLL | ES_MULTILINE | ES_READONLY | ES_LEFT | ES_WINNORMALCASE, 139, 16, 163, 285, hWnd, 1003);
		btMinimo.Create(NULL, L"Minimo->>", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 313, 16, 100, 28, hWnd, 1004);
		btMaximo.Create(NULL, L"Maximo->>", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 313, 42, 99, 28, hWnd, 1005);
		btPositivo.Create(NULL, L"Positivo->>", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 314, 68, 97, 28, hWnd, 1006);
		btNegativo.Create(NULL, L"Negativo->>", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 314, 94, 97, 28, hWnd, 1007);
		btSum.Create(NULL, L"Sum->>", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 314, 120, 97, 28, hWnd, 1008);
		btPromedio.Create(NULL, L"Promedio->>", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 315, 146, 96, 28, hWnd, 1009);
		btLimpiar.Create(NULL, L"Limpiar", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 315, 172, 94, 28, hWnd, 1010);
		tbxClasificar.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_AUTOVSCROLL | ES_MULTILINE | ES_READONLY | ES_LEFT | ES_WINNORMALCASE, 424, 16, 147, 286, hWnd, 1011);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		lb1.Font = fontArial014A;
		tbxEntrada.Font = fontArial014A;
		btInsertar.Font = fontArial014A;
		tbxSalida.Font = fontArial014A;
		btMinimo.Font = fontArial014A;
		btMaximo.Font = fontArial014A;
		btPositivo.Font = fontArial014A;
		btNegativo.Font = fontArial014A;
		btSum.Font = fontArial014A;
		btPromedio.Font = fontArial014A;
		btLimpiar.Font = fontArial014A;
		tbxClasificar.Font = fontArial014A;
	}
	//_________________________________________________
	void btInsertar_Click(Win::Event& e);
	void btMinimo_Click(Win::Event& e);
	void btMaximo_Click(Win::Event& e);
	void btPositivo_Click(Win::Event& e);
	void btNegativo_Click(Win::Event& e);
	void btSum_Click(Win::Event& e);
	void btPromedio_Click(Win::Event& e);
	void btLimpiar_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btInsertar.IsEvent(e, BN_CLICKED)) { btInsertar_Click(e); return true; }
		if (btMinimo.IsEvent(e, BN_CLICKED)) { btMinimo_Click(e); return true; }
		if (btMaximo.IsEvent(e, BN_CLICKED)) { btMaximo_Click(e); return true; }
		if (btPositivo.IsEvent(e, BN_CLICKED)) { btPositivo_Click(e); return true; }
		if (btNegativo.IsEvent(e, BN_CLICKED)) { btNegativo_Click(e); return true; }
		if (btSum.IsEvent(e, BN_CLICKED)) { btSum_Click(e); return true; }
		if (btPromedio.IsEvent(e, BN_CLICKED)) { btPromedio_Click(e); return true; }
		if (btLimpiar.IsEvent(e, BN_CLICKED)) { btLimpiar_Click(e); return true; }
		return false;
	}
};
