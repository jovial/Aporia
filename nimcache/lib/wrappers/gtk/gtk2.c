/* Generated by Nimrod Compiler v0.8.8 */
/*   (c) 2009 Andreas Rumpf */
/* Compiled for: Windows, i386, gcc */
/* Command for C compiler:
   C:\Programy\nimrod\dist\mingw\bin\gcc.exe -c  -w  -IC:\Programy\nimrod\lib -o nimcache\lib\wrappers\gtk\gtk2.o nimcache\lib\wrappers\gtk\gtk2.c */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY39571 TY39571;
typedef struct TY39719 TY39719;
typedef struct TY39621 TY39621;
typedef struct TY39653 TY39653;
typedef struct TY39403 TY39403;
typedef struct TY38465 TY38465;
typedef struct TY39501 TY39501;
typedef struct TY38573 TY38573;
typedef struct TY28248 TY28248;
typedef struct TY39755 TY39755;
typedef struct TY38547 TY38547;
typedef struct TY38495 TY38495;
typedef struct TY38531 TY38531;
typedef struct TY39373 TY39373;
typedef struct TY38977 TY38977;
typedef struct TY38723 TY38723;
typedef struct TY38967 TY38967;
typedef struct TY38407 TY38407;
typedef struct TY39523 TY39523;
typedef struct TY38629 TY38629;
typedef struct TY39795 TY39795;
typedef struct TY39009 TY39009;
typedef struct TY38985 TY38985;
typedef struct TY38463 TY38463;
typedef struct TY38649 TY38649;
typedef struct TY38843 TY38843;
typedef struct TY38511 TY38511;
typedef struct TY38871 TY38871;
typedef struct TY18896 TY18896;
typedef struct TY17358 TY17358;
typedef struct TY17354 TY17354;
typedef struct TY39133 TY39133;
typedef struct TY31326 TY31326;
typedef struct TY31220 TY31220;
typedef struct TY17384 TY17384;
typedef struct TY17380 TY17380;
typedef struct TY39645 TY39645;
typedef struct TY38519 TY38519;
typedef struct TY39729 TY39729;
typedef struct TY28284 TY28284;
typedef struct TY38959 TY38959;
typedef struct TY38479 TY38479;
typedef struct TY28252 TY28252;
typedef struct TY28260 TY28260;
typedef struct TY38505 TY38505;
typedef struct TY38537 TY38537;
typedef struct TY31298 TY31298;
typedef struct TY31384 TY31384;
typedef struct TY38715 TY38715;
typedef struct TY39775 TY39775;
typedef struct TY31214 TY31214;
typedef struct TY31276 TY31276;
typedef struct TY31352 TY31352;
typedef struct TY31240 TY31240;
typedef struct TY39115 TY39115;
typedef struct TY39641 TY39641;
typedef struct TY28272 TY28272;
typedef struct TY39743 TY39743;
typedef struct TY38503 TY38503;
typedef struct TY18357 TY18357;
typedef struct TY31322 TY31322;
typedef struct TY39773 TY39773;
typedef struct TY17298 TY17298;
typedef struct TY31346 TY31346;
typedef struct TY39639 TY39639;
typedef struct TY28294 TY28294;
typedef struct TY39713 TY39713;
typedef struct TY17370 TY17370;
typedef struct TY18365 TY18365;
typedef struct TY39691 TY39691;
typedef struct TY39711 TY39711;
typedef struct TY39707 TY39707;
typedef struct TY39677 TY39677;
typedef struct TY39665 TY39665;
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
typedef N_CDECL_PTR(void, TY52826) (void);
typedef N_CDECL_PTR(void, TY54462) (TY39571* Statusbar_54463, NI32 Contextid_54464);
typedef N_CDECL_PTR(void, TY56317) (TY39719* Buffer_56318, TY39621* Iter_56319, TY39653* Mark_56320);
typedef N_CDECL_PTR(TY39653*, TY56243) (TY39719* Buffer_56244);
typedef N_CDECL_PTR(NI32, TY54829) (TY39621* Iter_54830);
typedef N_CDECL_PTR(NI32, TY54832) (TY39621* Iter_54833);
typedef N_CDECL_PTR(NI32, TY54457) (TY39571* Statusbar_54458, NI32 Contextid_54459, NCSTRING Text_54460);
typedef N_CDECL_PTR(NI32, TY53165) (TY39403* Notebook_53166);
typedef N_CDECL_PTR(void, TY53232) (TY39403* Notebook_53233, TY38465* Child_53234, NCSTRING Tabtext_53235);
typedef N_CDECL_PTR(TY38465*, TY53171) (TY39403* Notebook_53172, NI32 Pagenum_53173);
typedef N_CDECL_PTR(TY39501*, TY53804) (TY38573* Hadjustment_53805, TY38573* Vadjustment_53806);
typedef N_CDECL_PTR(void, TY44995) (TY38465* Widget_44996);
typedef N_CDECL_PTR(void, TY45301) (TY38465* Widget_45302, TY28248* Fontdesc_45303);
typedef N_CDECL_PTR(void, TY53846) (TY39501* Scrolledwindow_53847, TY38465* Child_53848);
typedef N_CDECL_PTR(TY39719*, TY56739) (TY39755* Textview_56740);
typedef N_CDECL_PTR(TY38547*, TY46347) (NCSTRING Str_46348);
typedef N_CDECL_PTR(NI32, TY53126) (TY39403* Notebook_53127, TY38465* Child_53128, TY38465* Tablabel_53129);
typedef N_CDECL_PTR(void, TY56735) (TY39755* Textview_56736, TY39719* Buffer_56737);
typedef N_CDECL_PTR(void, TY53179) (TY39403* Notebook_53180, NI32 Pagenum_53181);
typedef N_CDECL_PTR(void, TY56136) (TY39719* Buffer_56137, NCSTRING Text_56138, NI32 Len_56139);
typedef N_CDECL_PTR(void, TY56304) (TY39719* Buffer_56305, TY39621* Iter_56306);
typedef N_CDECL_PTR(void, TY56308) (TY39719* Buffer_56309, TY39621* Iter_56310);
typedef N_CDECL_PTR(NCSTRING, TY56189) (TY39719* Buffer_56190, TY39621* Start_56191, TY39621* Theend_56192, NIM_BOOL Includehiddenchars_56193);
typedef N_CDECL_PTR(TY38495*, TY45490) (void);
typedef N_CDECL_PTR(void, TY46008) (TY38531* Window_46009, TY38495* Accelgroup_46010);
typedef N_CDECL_PTR(TY39373*, TY52972) (void);
typedef N_CDECL_PTR(TY38977*, TY49659) (void);
typedef N_CDECL_PTR(TY38723*, TY47683) (NCSTRING Label_47684);
typedef N_CDECL_PTR(void, TY49534) (TY38967* Menushell_49535, TY38465* Child_49536);
typedef N_NIMCALL_PTR(void, TY38423) (void);
typedef N_CDECL_PTR(void, TY38425) (TY38423 Para1_40008);
typedef N_CDECL_PTR(NI, TY63284) (TY38407* Anobject_63285, NCSTRING Name_63286, TY38425 Fun_63287, void* Unknown1_63288, void* Funcdata_63289, void* Unknown2_63290, NI Unknown3_63291, NI Unknown4_63292);
typedef N_CDECL_PTR(TY39523*, TY53983) (void);
typedef N_CDECL_PTR(void, TY45047) (TY38465* Widget_45048, NCSTRING Accelsignal_45049, TY38495* Accelgroup_45050, NI32 Accelkey_45051, NI32 Accelmods_45052, NI32 Accelflags_45053);
typedef N_CDECL_PTR(TY38723*, TY47686) (NCSTRING Label_47687);
typedef N_CDECL_PTR(void, TY47689) (TY38723* Menuitem_47690, TY38465* Submenu_47691);
typedef N_CDECL_PTR(void, TY46916) (TY38629* Box_46917, TY38465* Child_46918, NIM_BOOL Expand_46919, NIM_BOOL Fill_46920, NI32 Padding_46921);
typedef N_CDECL_PTR(TY39795*, TY57121) (void);
typedef N_CDECL_PTR(void, TY57231) (TY39795* Toolbar_57232, NI32 Style_57233);
typedef N_CDECL_PTR(TY38465*, TY57151) (TY39795* Toolbar_57152, NCSTRING Stockid_57153, NCSTRING Tooltiptext_57154, NCSTRING Tooltipprivatetext_57155, TY38425 Callback_57156, void* Userdata_57157, NI32 Position_57158);
typedef N_CDECL_PTR(void, TY57160) (TY39795* Toolbar_57161);
typedef N_CDECL_PTR(TY39403*, TY53124) (void);
typedef N_CDECL_PTR(void, TY53210) (TY39403* Notebook_53211, NIM_BOOL Scrollable_53212);
typedef N_CDECL_PTR(TY39009*, TY50193) (void);
typedef N_CDECL_PTR(TY38985*, TY49864) (void);
typedef N_CDECL_PTR(void, TY50195) (TY39009* Fixed_50196, TY38465* Widget_50197, NI32 X_50198, NI32 Y_50199);
typedef N_CDECL_PTR(void, TY45035) (TY38465* Widget_45036, TY38463* Requisition_45037);
typedef N_CDECL_PTR(void, TY45177) (TY38465* Widget_45178, NI32 Width_45179, NI32 Height_45180);
typedef N_CDECL_PTR(TY38649*, TY47109) (NCSTRING Label_47110);
typedef N_CDECL_PTR(TY39571*, TY54451) (void);
typedef N_CDECL_PTR(TY38531*, TY45986) (NI32 Thetype_45987);
typedef N_CDECL_PTR(void, TY46199) (TY38531* Window_46200, NI32 Width_46201, NI32 Height_46202);
typedef N_CDECL_PTR(void, TY45989) (TY38531* Window_45990, NCSTRING Title_45991);
typedef N_CDECL_PTR(TY38843*, TY48492) (NIM_BOOL Homogeneous_48493, NI32 Spacing_48494);
typedef N_CDECL_PTR(void, TY45641) (TY38511* Container_45642, TY38465* Widget_45643);
typedef NCSTRING TY65850[256];
typedef N_CDECL_PTR(void, TY52820) (void* Argc_52821, void* Argv_52822);
typedef N_CDECL_PTR(void, TY52818) (void);
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY17358 {
TY17354* Gclass;
};
struct TY18896 {
TY17358 Gtypeinstance;
NI32 Refcount;
void* Qdata;
};
struct TY38407 {
  TY18896 Sup;
NI32 Flags;
};
struct TY38463 {
NI32 Width;
NI32 Height;
};
struct TY31326 {
NI32 X;
NI32 Y;
NI32 Width;
NI32 Height;
};
struct TY38465 {
  TY38407 Sup;
NI16 Privateflags;
NI8 State;
NI8 Savedstate;
NCSTRING Name;
TY39133* Style;
TY38463 Requisition;
TY31326 Allocation;
TY31220* Window;
TY38465* Parent;
};
struct TY38511 {
  TY38465 Sup;
TY38465* Focuschild;
NI32 Containerflag0;
};
struct TY38629 {
  TY38511 Sup;
TY17384* Children;
NI16 Spacing;
NI16 Boxflag0;
};
struct TY38871 {
  TY38629 Sup;
};
struct TY39571 {
  TY38871 Sup;
TY38465* Frame;
TY38465* Label;
TY17380* Messages;
TY17380* Keys;
NI32 Seqcontextid;
NI32 Seqmessageid;
TY31220* Gripwindow;
NI16 Statusbarflag0;
};
struct TY39719 {
  TY18896 Sup;
TY39645* Tagtable;
void* Btree;
TY17380* Clipboardcontentsbuffers;
TY17380* Selectionclipboards;
void* Logattrcache;
NI32 Useractioncount;
NI16 Textbufferflag0;
};
struct TY39621 {
void* Dummy1;
void* Dummy2;
NI32 Dummy3;
NI32 Dummy4;
NI32 Dummy5;
NI32 Dummy6;
NI32 Dummy7;
NI32 Dummy8;
void* Dummy9;
void* Dummy10;
NI32 Dummy11;
NI32 Dummy12;
NI32 Dummy13;
void* Dummy14;
};
struct TY39653 {
  TY18896 Sup;
void* Segment;
};
struct TY39403 {
  TY38511 Sup;
void* Curpage;
TY17384* Children;
TY17384* Firsttab;
TY17384* Focustab;
TY38465* Menu;
TY31220* Eventwindow;
NI32 Timer;
NI16 Tabhborder;
NI16 Tabvborder;
NI16 Notebookflag0;
};
struct TY38519 {
  TY38511 Sup;
TY38465* Child;
};
struct TY39501 {
  TY38519 Sup;
TY38465* Hscrollbar;
TY38465* Vscrollbar;
NI16 Scrolledwindowflag0;
NI16 Shadowtype;
};
struct TY38573 {
  TY38407 Sup;
NF64 Lower;
NF64 Upper;
NF64 Value;
NF64 Stepincrement;
NF64 Pageincrement;
NF64 Pagesize;
};
struct TY28248 {
char dummy;
};
struct TY39755 {
  TY38511 Sup;
TY39729* Layout;
TY39719* Buffer;
NI32 Selectiondraghandler;
NI32 Scrolltimeout;
NI32 Pixelsabovelines;
NI32 Pixelsbelowlines;
NI32 Pixelsinsidewrap;
NI32 Wrapmode;
NI32 Justify;
NI32 Leftmargin;
NI32 Rightmargin;
NI32 Indent;
TY28284* Tabs;
NI16 Textviewflag0;
void* Textwindow;
void* Leftwindow;
void* Rightwindow;
void* Topwindow;
void* Bottomwindow;
TY38573* Hadjustment;
TY38573* Vadjustment;
NI32 Xoffset;
NI32 Yoffset;
NI32 Width;
NI32 Height;
NI32 Virtualcursorx;
NI32 Virtualcursory;
TY39653* Firstparamark;
NI32 Firstparapixels;
TY39653* Dndmark;
NI32 Blinktimeout;
NI32 Firstvalidateidle;
NI32 Incrementalvalidateidle;
TY38959* Imcontext;
TY38465* Popupmenu;
NI32 Dragstartx;
NI32 Dragstarty;
TY17380* Children;
void* Pendingscroll;
NI32 Pendingplacecursorbutton;
};
struct TY38479 {
  TY38465 Sup;
NF32 Xalign;
NF32 Yalign;
NI16 Xpad;
NI16 Ypad;
};
struct TY38547 {
  TY38479 Sup;
NCSTRING Label;
NI16 Labelflag0;
NI32 Mnemonickeyval;
NCSTRING Text;
TY28252* Attrs;
TY28252* Effectiveattrs;
TY28260* Layout;
TY38465* Mnemonicwidget;
TY38531* Mnemonicwindow;
void* Selectinfo;
};
struct TY38495 {
  TY18896 Sup;
NI32 Lockcount;
NI32 Modifiermask;
TY17380* Acceleratables;
NI32 Naccels;
TY38505* Privaccels;
};
struct TY38531 {
  TY38519 Sup;
NCSTRING Title;
NCSTRING Wmclassname;
NCSTRING Wmclassclass;
NCSTRING Wmrole;
TY38465* Focuswidget;
TY38465* Defaultwidget;
TY38531* Transientparent;
void* Geometryinfo;
TY31220* Frame;
TY38537* Group;
NI16 Configurerequestcount;
NI32 Windowflag0;
NI32 Frameleft;
NI32 Frametop;
NI32 Frameright;
NI32 Framebottom;
NI32 Keyschangedhandler;
NI32 Mnemonicmodifier;
TY31298* Screen;
};
struct TY38967 {
  TY38511 Sup;
TY17384* Children;
TY38465* Activemenuitem;
TY38465* Parentmenushell;
NI32 Button;
NI32 Activatetime;
NI16 Menushellflag0;
};
struct TY39373 {
  TY38967 Sup;
};
typedef N_CDECL_PTR(void, TY38973) (TY38977* Menu_41815, NI32* X_41816, NI32* Y_41817, NIM_BOOL* Pushin_41818, void* Userdata_41819);
struct TY38977 {
  TY38967 Sup;
TY38465* Parentmenuitem;
TY38465* Oldactivemenuitem;
TY38495* Accelgroup;
NCSTRING Accelpath;
TY38973 Positionfunc;
void* Positionfuncdata;
NI32 Togglesize;
TY38465* Toplevel;
TY38465* Tearoffwindow;
TY38465* Tearoffhbox;
TY38465* Tearoffscrollbar;
TY38573* Tearoffadjustment;
TY31220* Viewwindow;
TY31220* Binwindow;
NI32 Scrolloffset;
NI32 Savedscrolloffset;
NI32 Scrollstep;
NI32 Timeoutid;
TY31384* Navigationregion;
NI32 Navigationtimeout;
NI16 Menuflag0;
};
struct TY38715 {
  TY38519 Sup;
};
struct TY38723 {
  TY38715 Sup;
TY38465* Submenu;
TY31220* Eventwindow;
NI16 Togglesize;
NI16 Acceleratorwidth;
NCSTRING Accelpath;
NI16 Menuitemflag0;
NI32 Timer;
};
struct TY39523 {
  TY38723 Sup;
};
struct TY39795 {
  TY38511 Sup;
NI32 Numchildren;
TY17384* Children;
NI32 Orientation;
NI32 Toolbarstyle;
NI32 Iconsize;
TY39775* Tooltips;
NI32 Buttonmaxw;
NI32 Buttonmaxh;
NI32 Stylesetconnection;
NI32 Iconsizeconnection;
NI16 Toolbarflag0;
};
struct TY39009 {
  TY38511 Sup;
TY17384* Children;
};
struct TY38985 {
  TY38465 Sup;
NCSTRING Text;
NI16 Entryflag0;
NI16 Textlength;
NI16 Textmaxlength;
TY31220* Textarea;
TY38959* Imcontext;
TY38465* Popupmenu;
NI32 Currentpos;
NI32 Selectionbound;
TY28260* Cachedlayout;
NI16 Flag1;
NI32 Button;
NI32 Blinktimeout;
NI32 Recomputeidle;
NI32 Scrolloffset;
NI32 Ascent;
NI32 Descent;
NI16 Textsize;
NI16 Nbytes;
NI16 Preeditlength;
NI16 Preeditcursor;
NI32 Dndposition;
NI32 Dragstartx;
NI32 Dragstarty;
NI32 Invisiblechar;
NI32 Widthchars;
};
struct TY38649 {
  TY38519 Sup;
TY31220* Eventwindow;
NCSTRING Labeltext;
NI32 Activatetimeout;
NI16 Buttonflag0;
};
struct TY38843 {
  TY38629 Sup;
};
struct TY17354 {
NI Gtype;
};
struct TY31214 {
NI32 Pixel;
NI16 Red;
NI16 Green;
NI16 Blue;
};
typedef TY31214 TY42275[5];
typedef TY31276* TY42304[5];
typedef TY31220* TY42330[5];
struct TY39133 {
  TY18896 Sup;
TY42275 Fg;
TY42275 Bg;
TY42275 Light;
TY42275 Dark;
TY42275 Mid;
TY42275 Text;
TY42275 Base;
TY42275 Textaa;
TY31214 Black;
TY31214 White;
TY28248* Fontdesc;
NI32 Xthickness;
NI32 Ythickness;
TY42304 Fggc;
TY42304 Bggc;
TY42304 Lightgc;
TY42304 Darkgc;
TY42304 Midgc;
TY42304 Textgc;
TY42304 Basegc;
TY42304 Textaagc;
TY31276* Blackgc;
TY31276* Whitegc;
TY42330 Bgpixmap;
NI32 Attachcount;
NI32 Depth;
TY31352* Colormap;
TY31240* Privatefont;
TY28248* Privatefontdesc;
TY39115* Rcstyle;
TY17380* Styles;
void* Propertycache;
TY17380* Iconfactories;
};
struct TY31220 {
  TY18896 Sup;
};
struct TY17384 {
void* Data;
TY17384* Next;
TY17384* Prev;
};
struct TY17380 {
void* Data;
TY17380* Next;
};
struct TY39645 {
  TY18896 Sup;
void* Hash;
TY17380* Anonymous;
NI32 Anoncount;
TY17380* Buffers;
};
struct TY39729 {
  TY18896 Sup;
NI32 Screenwidth;
NI32 Width;
NI32 Height;
TY39719* Buffer;
TY39641* Defaultstyle;
TY28272* Ltrcontext;
TY28272* Rtlcontext;
TY39641* Onestylecache;
TY39743* Onedisplaycache;
NI32 Wraploopcount;
NI16 Textlayoutflag0;
NCSTRING Preeditstring;
TY28252* Preeditattrs;
NI32 Preeditlen;
NI32 Preeditcursor;
};
struct TY28284 {
char dummy;
};
struct TY38959 {
  TY18896 Sup;
};
struct TY28252 {
char dummy;
};
struct TY28260 {
char dummy;
};
struct TY38503 {
NI32 Accelkey;
NI32 Accelmods;
NI16 Flag0;
};
struct TY38505 {
TY38503 Key;
TY18357* Closure;
NI32 Accelpathquark;
};
struct TY38537 {
  TY18896 Sup;
TY17380* Grabs;
};
struct TY31298 {
  TY18896 Sup;
};
struct TY31322 {
NI32 X1;
NI32 Y1;
NI32 X2;
NI32 Y2;
};
struct TY31384 {
NI32 Size;
NI32 Numrects;
TY31322* Rects;
TY31322 Extents;
};
struct TY17298 {
NI Tvsec;
NI Tvusec;
};
struct TY39775 {
  TY38407 Sup;
TY38465* Tipwindow;
TY38465* Tiplabel;
TY39773* Activetipsdata;
TY17384* Tipsdatalist;
NI32 Tooltipsflag0;
NI16 Flag1;
NI32 Timertag;
TY17298 Lastpopdown;
};
struct TY31276 {
  TY18896 Sup;
NI32 Clipxorigin;
NI32 Clipyorigin;
NI32 Tsxorigin;
NI32 Tsyorigin;
TY31352* Colormap;
};
struct TY31352 {
  TY18896 Sup;
NI32 Size;
TY31214* Colors;
TY31346* Visual;
void* Windowingdata;
TY31298* Screen;
};
struct TY31240 {
NU8 Type;
NI32 Ascent;
NI32 Descent;
};
typedef NCSTRING TY42173[5];
typedef NI32 TY42177[5];
struct TY39115 {
  TY18896 Sup;
NCSTRING Name;
TY42173 Bgpixmapname;
TY28248* Fontdesc;
TY42177 Colorflags;
TY42275 Fg;
TY42275 Bg;
TY42275 Text;
TY42275 Base;
NI32 Xthickness;
NI32 Ythickness;
void* Rcproperties;
TY17380* Rcstylelists;
TY17380* Iconfactories;
NI16 Rcstyleflag0;
};
struct TY39639 {
TY31214 Bgcolor;
TY31214 Fgcolor;
TY31220* Bgstipple;
TY31220* Fgstipple;
NI32 Rise;
void* Padding1;
NI16 Flag0;
};
struct TY39641 {
NI32 Refcount;
TY39639 Appearance;
NI32 Justification;
NI32 Direction;
TY28248* Font;
NF64 Fontscale;
NI32 Leftmargin;
NI32 Indent;
NI32 Rightmargin;
NI32 Pixelsabovelines;
NI32 Pixelsbelowlines;
NI32 Pixelsinsidewrap;
TY28284* Tabs;
NI32 Wrapmode;
TY28294* Language;
void* Padding1;
NI16 Flag0;
};
struct TY28272 {
char dummy;
};
struct TY39743 {
TY28260* Layout;
TY17380* Cursors;
TY17380* Shapedobjects;
NI32 Direction;
NI32 Width;
NI32 Totalwidth;
NI32 Height;
NI32 Xoffset;
NI32 Leftmargin;
NI32 Rightmargin;
NI32 Topmargin;
NI32 Bottommargin;
NI32 Insertindex;
NIM_BOOL Sizeonly;
TY39713* Line;
};
typedef N_CDECL_PTR(void, TY18370) (TY18357* Closure_18371, TY17370* Returnvalue_18372, NI32 Nparamvalues_18373, TY17370* Paramvalues_18374, void* Invocationhint_18375, void* Marshaldata_18376);
struct TY18357 {
NI32 Flag0;
TY18370 Marshal;
void* Data;
TY18365* Notifiers;
};
struct TY39773 {
TY39775* Tooltips;
TY38465* Widget;
NCSTRING Tiptext;
NCSTRING Tipprivate;
};
struct TY31346 {
  TY18896 Sup;
NU8 Thetype;
NI32 Depth;
NU8 Byteorder;
NI32 Colormapsize;
NI32 Bitsperrgb;
NI32 Redmask;
NI32 Redshift;
NI32 Redprec;
NI32 Greenmask;
NI32 Greenshift;
NI32 Greenprec;
NI32 Bluemask;
NI32 Blueshift;
NI32 Blueprec;
TY31298* Screen;
};
struct TY28294 {
char dummy;
};
struct TY39713 {
void* Parent;
TY39713* Next;
TY39691* Segments;
TY39711* Views;
};
typedef NF64 TY17445[2];
struct TY17370 {
NI Gtype;
TY17445 Data;
};
typedef N_CDECL_PTR(void, TY18355) (void* Data_18366, TY18357* Closure_18367);
struct TY18365 {
void* Data;
TY18355 Notify;
};
struct TY39677 {
TY39665* Obj;
TY17380* Widgets;
void* Tree;
TY39713* Line;
};
struct TY39691 {
TY39707* Type;
TY39691* Next;
NI32 Charcount;
NI32 Bytecount;
TY39677 Body;
};
struct TY39711 {
void* Viewid;
TY39711* Next;
NI32 Height;
NI32 Flag0;
};
typedef N_CDECL_PTR(NIM_BOOL, TY39697) (TY39691* Seg_43940, TY39713* Line_43941, NIM_BOOL Treegone_43942);
typedef N_CDECL_PTR(void, TY39703) (TY39691* Seg_43944, TY39713* Line_43945);
typedef N_CDECL_PTR(void, TY39705) (TY39691* Seg_43947, TY39713* Line_43948);
struct TY39707 {
NCSTRING Name;
NIM_BOOL Leftgravity;
TY39691 Splitfunc;
TY39697 Deletefunc;
TY39691 Cleanupfunc;
TY39703 Linechangefunc;
TY39705 Checkfunc;
};
struct TY39665 {
  TY18896 Sup;
void* Segment;
};
N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* Path_6470);
N_NIMCALL(void, nimUnloadLibrary)(void* Lib_6473);
N_NOINLINE(void, nimLoadLibraryError)(NimStringDesc* Path_6480);
N_NIMCALL(void*, nimGetProcAddr)(void* Lib_6476, NCSTRING Name_6477);
STRING_LITERAL(TMP124068, "libgtk-win32-2.0-0.dll", 22);
STRING_LITERAL(TMP124069, "libgtk-win32-2.0-0.dll", 22);
static void* TMP124067;
TY52826 Dl_52825;
TY54462 Dl_54461;
TY56317 Dl_56316;
TY56243 Dl_56242;
TY54829 Dl_54828;
TY54832 Dl_54831;
TY54457 Dl_54456;
TY53165 Dl_53164;
TY53232 Dl_53231;
TY53171 Dl_53170;
TY53804 Dl_53803;
TY44995 Dl_44994;
TY45301 Dl_45300;
TY53846 Dl_53845;
TY56739 Dl_56738;
TY46347 Dl_46346;
TY53126 Dl_53125;
TY56735 Dl_56734;
TY53179 Dl_53178;
TY56136 Dl_56135;
TY56304 Dl_56303;
TY56308 Dl_56307;
TY56189 Dl_56188;
TY45490 Dl_45489;
TY46008 Dl_46007;
TY52972 Dl_52971;
TY49659 Dl_49658;
TY47683 Dl_47682;
TY49534 Dl_49533;
TY63284 Dl_63283;
TY53983 Dl_53982;
TY45047 Dl_45046;
TY47686 Dl_47685;
TY47689 Dl_47688;
TY46916 Dl_46915;
TY57121 Dl_57120;
TY57231 Dl_57230;
TY57151 Dl_57150;
TY57160 Dl_57159;
TY53124 Dl_53123;
TY53210 Dl_53209;
TY50193 Dl_50192;
TY49864 Dl_49863;
TY50195 Dl_50194;
TY45035 Dl_45034;
TY45177 Dl_45176;
TY47109 Dl_47108;
TY54451 Dl_54450;
TY45986 Dl_45985;
TY46199 Dl_46198;
TY45989 Dl_45988;
TY48492 Dl_48491;
TY45641 Dl_45640;
TY52820 Dl_52819;
TY52818 Dl_52817;
N_NIMCALL(NI, Signalconnect_63300)(TY38407* Anobject_63302, NCSTRING Name_63303, TY38425 Fun_63304, void* Funcdata_63305) {
NI Result_63306;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "gtk2.signal_connect";
F.prev = framePtr;
F.filename = "C:\\Programy\\nimrod\\lib\\wrappers\\gtk\\gtk2.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_63306 = 0;
F.line = 14682;
Result_63306 = Dl_63283(Anobject_63302, Name_63303, Fun_63304, 0, Funcdata_63305, 0, 0, 0);
framePtr = framePtr->prev;
return Result_63306;
}
N_NIMCALL(TY38425, Signalfunc_44837)(void* F_44839) {
TY38425 Result_58853;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "gtk2.SIGNAL_FUNC";
F.prev = framePtr;
F.filename = "C:\\Programy\\nimrod\\lib\\wrappers\\gtk\\gtk2.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_58853 = 0;
F.line = 10879;
Result_58853 = ((TY38425) (F_44839));
framePtr = framePtr->prev;
return Result_58853;
}
N_NIMCALL(void, Nimrodinit_65848)(void) {
TY65850 cmdLine;
NI32 cmdCount;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "gtk2.nimrod_init";
F.prev = framePtr;
F.filename = "C:\\Programy\\nimrod\\lib\\wrappers\\gtk\\gtk2.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
memset((void*)&cmdLine, 0, sizeof(cmdLine));
cmdCount = 0;
F.line = 16879;
Dl_52819(((void*) (cmdLine)), ((void*) (&cmdCount)));
framePtr = framePtr->prev;
}
N_NOINLINE(void, gtk2Init)(void) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "module gtk2";
F.prev = framePtr;
F.filename = "C:\\Programy\\nimrod\\lib\\wrappers\\gtk\\gtk2.nim";
F.line = 0;
framePtr = (TFrame*)&F;
if (!((TMP124067 = nimLoadLibrary((NimStringDesc*) &TMP124068))
)) nimLoadLibraryError((NimStringDesc*) &TMP124069);
Dl_52825 = (TY52826) nimGetProcAddr(TMP124067, "gtk_main_quit");
Dl_54461 = (TY54462) nimGetProcAddr(TMP124067, "gtk_statusbar_pop");
Dl_56316 = (TY56317) nimGetProcAddr(TMP124067, "gtk_text_buffer_get_iter_at_mark");
Dl_56242 = (TY56243) nimGetProcAddr(TMP124067, "gtk_text_buffer_get_insert");
Dl_54828 = (TY54829) nimGetProcAddr(TMP124067, "gtk_text_iter_get_line");
Dl_54831 = (TY54832) nimGetProcAddr(TMP124067, "gtk_text_iter_get_line_offset");
Dl_54456 = (TY54457) nimGetProcAddr(TMP124067, "gtk_statusbar_push");
Dl_53164 = (TY53165) nimGetProcAddr(TMP124067, "gtk_notebook_get_current_page");
Dl_53231 = (TY53232) nimGetProcAddr(TMP124067, "gtk_notebook_set_tab_label_text");
Dl_53170 = (TY53171) nimGetProcAddr(TMP124067, "gtk_notebook_get_nth_page");
Dl_53803 = (TY53804) nimGetProcAddr(TMP124067, "gtk_scrolled_window_new");
Dl_44994 = (TY44995) nimGetProcAddr(TMP124067, "gtk_widget_show");
Dl_45300 = (TY45301) nimGetProcAddr(TMP124067, "gtk_widget_modify_font");
Dl_53845 = (TY53846) nimGetProcAddr(TMP124067, "gtk_scrolled_window_add_with_viewport");
Dl_56738 = (TY56739) nimGetProcAddr(TMP124067, "gtk_text_view_get_buffer");
Dl_46346 = (TY46347) nimGetProcAddr(TMP124067, "gtk_label_new");
Dl_53125 = (TY53126) nimGetProcAddr(TMP124067, "gtk_notebook_append_page");
Dl_56734 = (TY56735) nimGetProcAddr(TMP124067, "gtk_text_view_set_buffer");
Dl_53178 = (TY53179) nimGetProcAddr(TMP124067, "gtk_notebook_set_current_page");
Dl_56135 = (TY56136) nimGetProcAddr(TMP124067, "gtk_text_buffer_set_text");
Dl_56303 = (TY56304) nimGetProcAddr(TMP124067, "gtk_text_buffer_get_start_iter");
Dl_56307 = (TY56308) nimGetProcAddr(TMP124067, "gtk_text_buffer_get_end_iter");
Dl_56188 = (TY56189) nimGetProcAddr(TMP124067, "gtk_text_buffer_get_text");
Dl_45489 = (TY45490) nimGetProcAddr(TMP124067, "gtk_accel_group_new");
Dl_46007 = (TY46008) nimGetProcAddr(TMP124067, "gtk_window_add_accel_group");
Dl_52971 = (TY52972) nimGetProcAddr(TMP124067, "gtk_menu_bar_new");
Dl_49658 = (TY49659) nimGetProcAddr(TMP124067, "gtk_menu_new");
Dl_47682 = (TY47683) nimGetProcAddr(TMP124067, "gtk_menu_item_new_with_label");
Dl_49533 = (TY49534) nimGetProcAddr(TMP124067, "gtk_menu_shell_append");
Dl_63283 = (TY63284) nimGetProcAddr(TMP124067, "gtk_signal_connect_full");
Dl_53982 = (TY53983) nimGetProcAddr(TMP124067, "gtk_separator_menu_item_new");
Dl_45046 = (TY45047) nimGetProcAddr(TMP124067, "gtk_widget_add_accelerator");
Dl_47685 = (TY47686) nimGetProcAddr(TMP124067, "gtk_menu_item_new_with_mnemonic");
Dl_47688 = (TY47689) nimGetProcAddr(TMP124067, "gtk_menu_item_set_submenu");
Dl_46915 = (TY46916) nimGetProcAddr(TMP124067, "gtk_box_pack_start");
Dl_57120 = (TY57121) nimGetProcAddr(TMP124067, "gtk_toolbar_new");
Dl_57230 = (TY57231) nimGetProcAddr(TMP124067, "gtk_toolbar_set_style");
Dl_57150 = (TY57151) nimGetProcAddr(TMP124067, "gtk_toolbar_insert_stock");
Dl_57159 = (TY57160) nimGetProcAddr(TMP124067, "gtk_toolbar_append_space");
Dl_53123 = (TY53124) nimGetProcAddr(TMP124067, "gtk_notebook_new");
Dl_53209 = (TY53210) nimGetProcAddr(TMP124067, "gtk_notebook_set_scrollable");
Dl_50192 = (TY50193) nimGetProcAddr(TMP124067, "gtk_fixed_new");
Dl_49863 = (TY49864) nimGetProcAddr(TMP124067, "gtk_entry_new");
Dl_50194 = (TY50195) nimGetProcAddr(TMP124067, "gtk_fixed_put");
Dl_45034 = (TY45035) nimGetProcAddr(TMP124067, "gtk_widget_size_request");
Dl_45176 = (TY45177) nimGetProcAddr(TMP124067, "gtk_widget_set_size_request");
Dl_47108 = (TY47109) nimGetProcAddr(TMP124067, "gtk_button_new_with_label");
Dl_54450 = (TY54451) nimGetProcAddr(TMP124067, "gtk_statusbar_new");
Dl_45985 = (TY45986) nimGetProcAddr(TMP124067, "gtk_window_new");
Dl_46198 = (TY46199) nimGetProcAddr(TMP124067, "gtk_window_set_default_size");
Dl_45988 = (TY45989) nimGetProcAddr(TMP124067, "gtk_window_set_title");
Dl_48491 = (TY48492) nimGetProcAddr(TMP124067, "gtk_vbox_new");
Dl_45640 = (TY45641) nimGetProcAddr(TMP124067, "gtk_container_add");
Dl_52819 = (TY52820) nimGetProcAddr(TMP124067, "gtk_init");
Dl_52817 = (TY52818) nimGetProcAddr(TMP124067, "gtk_main");
F.len = 0;
framePtr = framePtr->prev;
}
