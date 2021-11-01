//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TMainMenu *MainMenu1;
        TMenuItem *Plik1;
        TMenuItem *Nowy1;
        TMenuItem *N1;
        TMenuItem *Otwrz1;
        TMenuItem *N2;
        TMenuItem *Z1;
        TMenuItem *Zakocz1;
        TMenuItem *Edycja1;
        TMenuItem *WytnijxCtrlX1;
        TMenuItem *CopiujCtrlC1;
        TMenuItem *WklejCtrlV1;
        TMenuItem *Fromatuj1;
        TMenuItem *Zawijaniewierszy1;
        TMenuItem *Czcionka1;
        TMenuItem *Pomoc1;
        TMenuItem *Informacje1;
        TMenuItem *Oprogramie1;
        TMenuItem *Zapraszamnabloga1;
        TMemo *tresc;
        TOpenDialog *OpenDialog1;
        TSaveDialog *SaveDialog1;
        TFontDialog *FontDialog1;
        void __fastcall Otwrz1Click(TObject *Sender);
        void __fastcall Z1Click(TObject *Sender);
        void __fastcall N2Click(TObject *Sender);
        void __fastcall Nowy1Click(TObject *Sender);
        void __fastcall trescKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall Zakocz1Click(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall WytnijxCtrlX1Click(TObject *Sender);
        void __fastcall CopiujCtrlC1Click(TObject *Sender);
        void __fastcall WklejCtrlV1Click(TObject *Sender);
        void __fastcall Zawijaniewierszy1Click(TObject *Sender);
        void __fastcall Czcionka1Click(TObject *Sender);
        void __fastcall Oprogramie1Click(TObject *Sender);
        void __fastcall Zapraszamnabloga1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
