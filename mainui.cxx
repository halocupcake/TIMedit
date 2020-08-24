// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "mainui.h"

Fl_Menu_Item MainUI::menu_[] = {
 {"&File", 0,  0, 0, 64, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {"&New Project", 0,  (Fl_Callback*)cb_NewProject, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {"&Open Project", 0x4006f,  (Fl_Callback*)cb_OpenProject, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {"&Save Project", 0x40073,  (Fl_Callback*)cb_SaveProject, (void*)(0), 0, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {"Save Project &As", 0,  (Fl_Callback*)cb_SaveProject, (void*)(1), 128, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {"Import Image...", 0,  (Fl_Callback*)cb_ImportImage, 0, 128, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {"E&xit", 0,  (Fl_Callback*)cb_Exit, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {0,0,0,0,0,0,0,0,0},
 {"&Edit", 0,  0, 0, 64, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {"Edit CLUT...", 0,  (Fl_Callback*)cb_EditClut, 0, 128, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {"Add Group...", 0,  (Fl_Callback*)cb_AddGroup, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {"Remove Current Group", 0,  (Fl_Callback*)cb_RemoveGroup, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {"Move TIM to Group...", 0,  (Fl_Callback*)cb_MoveTimToGroup, 0, 128, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {"Re-import Selected TIM", 0,  (Fl_Callback*)cb_ReimportTim, (void*)(0), 0, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {"Edit Import Parameters...", 0,  (Fl_Callback*)cb_ReimportTim, (void*)(1), 128, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {"Check for Overlapping TIMs", 0,  (Fl_Callback*)cb_CheckOverlap, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {0,0,0,0,0,0,0,0,0},
 {"Frame&buffer", 0,  0, 0, 64, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {"Resolution", 0,  0, 0, 64, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {"None", 0,  (Fl_Callback*)cb_SetBufferRes, (void*)(0), 12, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {"256x240 NTSC", 0,  (Fl_Callback*)cb_SetBufferRes, (void*)(1), 8, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {"320x240 NTSC", 0,  (Fl_Callback*)cb_SetBufferRes, (void*)(2), 8, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {"384x240 NTSC (16:9)", 0,  (Fl_Callback*)cb_SetBufferRes, (void*)(3), 8, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {"512x240 NTSC", 0,  (Fl_Callback*)cb_SetBufferRes, (void*)(4), 8, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {"640x240 NTSC", 0,  (Fl_Callback*)cb_SetBufferRes, (void*)(5), 8, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {"256x480 NTSC", 0,  (Fl_Callback*)cb_SetBufferRes, (void*)(6), 8, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {"320x480 NTSC", 0,  (Fl_Callback*)cb_SetBufferRes, (void*)(7), 8, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {"384x480 NTSC", 0,  (Fl_Callback*)cb_SetBufferRes, (void*)(8), 8, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {"512x480 NTSC", 0,  (Fl_Callback*)cb_SetBufferRes, (void*)(9), 8, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {"640x480 NTSC", 0,  (Fl_Callback*)cb_SetBufferRes, (void*)(10), 8, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {"256x256 PAL", 0,  (Fl_Callback*)cb_SetBufferRes, (void*)(11), 8, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {"320x256 PAL", 0,  (Fl_Callback*)cb_SetBufferRes, (void*)(12), 8, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {"384x256 PAL", 0,  (Fl_Callback*)cb_SetBufferRes, (void*)(13), 8, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {"512x256 PAL", 0,  (Fl_Callback*)cb_SetBufferRes, (void*)(14), 8, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {"640x256 PAL", 0,  (Fl_Callback*)cb_SetBufferRes, (void*)(15), 8, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {"256x512 PAL", 0,  (Fl_Callback*)cb_SetBufferRes, (void*)(16), 8, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {"320x512 PAL", 0,  (Fl_Callback*)cb_SetBufferRes, (void*)(17), 8, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {"384x512 PAL", 0,  (Fl_Callback*)cb_SetBufferRes, (void*)(18), 8, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {"512x512 PAL", 0,  (Fl_Callback*)cb_SetBufferRes, (void*)(19), 8, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {"640x512 PAL", 0,  (Fl_Callback*)cb_SetBufferRes, (void*)(20), 8, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {0,0,0,0,0,0,0,0,0},
 {"Side-by-side Buffers", 0,  (Fl_Callback*)cb_SetBufferOrder, 0, 2, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {0,0,0,0,0,0,0,0,0},
 {"About", 0,  (Fl_Callback*)cb_About, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {0,0,0,0,0,0,0,0,0}
};
Fl_Menu_Item* MainUI::buffer_res[21];
Fl_Menu_Item* MainUI::bufferOrderToggle = MainUI::menu_ + 41;
MainUI::MainUI(int X, int Y, int W, int H, const char *L)
  : Fl_Double_Window(X, Y, W, H, L) {
  _MainUI();
}

MainUI::MainUI(int W, int H, const char *L)
  : Fl_Double_Window(0, 0, W, H, L) {
  clear_flag(16);
  _MainUI();
}

MainUI::MainUI()
  : Fl_Double_Window(0, 0, 905, 545, "TIMedit") {
  clear_flag(16);
  _MainUI();
}

void MainUI::_MainUI() {
this->box(FL_FLAT_BOX);
this->color(FL_BACKGROUND_COLOR);
this->selection_color(FL_BACKGROUND_COLOR);
this->labeltype(FL_NO_LABEL);
this->labelfont(0);
this->labelsize(14);
this->labelcolor(FL_FOREGROUND_COLOR);
this->callback((Fl_Callback*)cb_MainWindow);
this->align(Fl_Align(FL_ALIGN_TOP));
this->when(FL_WHEN_RELEASE);
{ Fl_Menu_Bar* o = new Fl_Menu_Bar(0, 0, 905, 20);
  o->labelsize(12);
  o->textsize(12);
  buffer_res[0] = &menu_[19];
  buffer_res[1] = &menu_[20];
  buffer_res[2] = &menu_[21];
  buffer_res[3] = &menu_[22];
  buffer_res[4] = &menu_[23];
  buffer_res[5] = &menu_[24];
  buffer_res[6] = &menu_[25];
  buffer_res[7] = &menu_[26];
  buffer_res[8] = &menu_[27];
  buffer_res[9] = &menu_[28];
  buffer_res[10] = &menu_[29];
  buffer_res[11] = &menu_[30];
  buffer_res[12] = &menu_[31];
  buffer_res[13] = &menu_[32];
  buffer_res[14] = &menu_[33];
  buffer_res[15] = &menu_[34];
  buffer_res[16] = &menu_[35];
  buffer_res[17] = &menu_[36];
  buffer_res[18] = &menu_[37];
  buffer_res[19] = &menu_[38];
  buffer_res[20] = &menu_[39];
  o->menu(menu_);
} // Fl_Menu_Bar* o
{ fbArea = new Fl_Scroll(7, 39, 623, 334, "Framebuffer");
  fbArea->box(FL_DOWN_BOX);
  fbArea->labelsize(12);
  fbArea->align(Fl_Align(FL_ALIGN_TOP_LEFT));
  { vramArea = new Fl_VramArea(9, 41, 128, 128);
    vramArea->box(FL_FLAT_BOX);
    vramArea->color((Fl_Color)31);
    vramArea->selection_color(FL_BACKGROUND_COLOR);
    vramArea->labeltype(FL_NORMAL_LABEL);
    vramArea->labelfont(0);
    vramArea->labelsize(14);
    vramArea->labelcolor(FL_FOREGROUND_COLOR);
    vramArea->callback((Fl_Callback*)cb_VramArea);
    vramArea->align(Fl_Align(FL_ALIGN_TOP));
    vramArea->when(FL_WHEN_RELEASE);
    vramArea->end();
  } // Fl_VramArea* vramArea
  fbArea->end();
  Fl_Group::current()->resizable(fbArea);
} // Fl_Scroll* fbArea
{ Fl_Group* o = new Fl_Group(633, 38, 267, 496);
  { Fl_Group* o = new Fl_Group(633, 38, 266, 26, "Snap to");
    o->box(FL_ENGRAVED_BOX);
    o->labelsize(12);
    o->align(Fl_Align(FL_ALIGN_TOP_LEFT));
    { snapImages = new Fl_Check_Button(637, 44, 80, 15, "Images");
      snapImages->tooltip("Snap to texture images");
      snapImages->down_box(FL_DOWN_BOX);
      snapImages->labelsize(12);
      snapImages->callback((Fl_Callback*)cb_SnapOption);
    } // Fl_Check_Button* snapImages
    { snapCluts = new Fl_Check_Button(724, 44, 80, 15, "CLUTs");
      snapCluts->tooltip("Snap to CLUTs (CLUTs do not snap to other CLUTs)");
      snapCluts->down_box(FL_DOWN_BOX);
      snapCluts->labelsize(12);
      snapCluts->callback((Fl_Callback*)cb_SnapOption);
    } // Fl_Check_Button* snapCluts
    { snapGrid = new Fl_Check_Button(809, 44, 80, 15, "Grid");
      snapGrid->tooltip("Snap to grid");
      snapGrid->down_box(FL_DOWN_BOX);
      snapGrid->labelsize(12);
      snapGrid->callback((Fl_Callback*)cb_SnapOption);
    } // Fl_Check_Button* snapGrid
    o->end();
  } // Fl_Group* o
  { timParams = new Fl_Group(633, 84, 266, 190, "TIM Parameters");
    timParams->box(FL_ENGRAVED_BOX);
    timParams->labelsize(12);
    timParams->align(Fl_Align(FL_ALIGN_TOP_LEFT));
    timParams->deactivate();
    { Fl_Group* o = new Fl_Group(640, 107, 253, 35, "Image Position");
      o->box(FL_ENGRAVED_BOX);
      o->labelsize(12);
      o->align(Fl_Align(FL_ALIGN_TOP_LEFT));
      { imageXpos = new Fl_Spinner(662, 113, 50, 21, "X:");
        imageXpos->labelsize(12);
        imageXpos->minimum(0);
        imageXpos->value(0);
        imageXpos->textsize(12);
        imageXpos->callback((Fl_Callback*)cb_ImagePosition);
      } // Fl_Spinner* imageXpos
      { imageYpos = new Fl_Spinner(737, 113, 50, 21, "Y:");
        imageYpos->labelsize(12);
        imageYpos->minimum(0);
        imageYpos->value(0);
        imageYpos->textsize(12);
        imageYpos->callback((Fl_Callback*)cb_ImagePosition);
      } // Fl_Spinner* imageYpos
      o->end();
    } // Fl_Group* o
    { clutParams = new Fl_Group(640, 162, 253, 35, "CLUT Position");
      clutParams->box(FL_ENGRAVED_BOX);
      clutParams->labelsize(12);
      clutParams->align(Fl_Align(FL_ALIGN_TOP_LEFT));
      { clutXpos = new Fl_Spinner(662, 168, 50, 21, "X:");
        clutXpos->labelsize(12);
        clutXpos->minimum(0);
        clutXpos->value(0);
        clutXpos->textsize(12);
        clutXpos->callback((Fl_Callback*)cb_ClutPosition);
      } // Fl_Spinner* clutXpos
      { clutYpos = new Fl_Spinner(737, 168, 50, 21, "Y:");
        clutYpos->labelsize(12);
        clutYpos->minimum(0);
        clutYpos->value(0);
        clutYpos->textsize(12);
        clutYpos->callback((Fl_Callback*)cb_ClutPosition);
      } // Fl_Spinner* clutYpos
      clutParams->end();
    } // Fl_Group* clutParams
    { blendParams = new Fl_Group(640, 217, 253, 47, "Blend Operator (editor view only)");
      blendParams->box(FL_ENGRAVED_BOX);
      blendParams->labelsize(12);
      blendParams->align(Fl_Align(FL_ALIGN_TOP_LEFT));
      { blendMode[0] = new Fl_Round_Button(645, 224, 98, 15, "50%+50%");
        blendMode[0]->type(102);
        blendMode[0]->down_box(FL_ROUND_DOWN_BOX);
        blendMode[0]->labelsize(12);
        blendMode[0]->callback((Fl_Callback*)cb_ImgBlendMode, (void*)(0));
      } // Fl_Round_Button* blendMode[0]
      { blendMode[1] = new Fl_Round_Button(743, 224, 114, 15, "100%+100%");
        blendMode[1]->type(102);
        blendMode[1]->down_box(FL_ROUND_DOWN_BOX);
        blendMode[1]->labelsize(12);
        blendMode[1]->callback((Fl_Callback*)cb_ImgBlendMode, (void*)(1));
      } // Fl_Round_Button* blendMode[1]
      { blendMode[2] = new Fl_Round_Button(645, 244, 98, 15, "100%-100%");
        blendMode[2]->type(102);
        blendMode[2]->down_box(FL_ROUND_DOWN_BOX);
        blendMode[2]->labelsize(12);
        blendMode[2]->callback((Fl_Callback*)cb_ImgBlendMode, (void*)(2));
      } // Fl_Round_Button* blendMode[2]
      { blendMode[3] = new Fl_Round_Button(743, 244, 98, 15, "100%+25%");
        blendMode[3]->type(102);
        blendMode[3]->down_box(FL_ROUND_DOWN_BOX);
        blendMode[3]->labelsize(12);
        blendMode[3]->callback((Fl_Callback*)cb_ImgBlendMode, (void*)(3));
      } // Fl_Round_Button* blendMode[3]
      blendParams->end();
    } // Fl_Group* blendParams
    timParams->end();
  } // Fl_Group* timParams
  { Fl_Group* o = new Fl_Group(633, 524, 266, 10);
    o->end();
    Fl_Group::current()->resizable(o);
  } // Fl_Group* o
  o->end();
} // Fl_Group* o
{ Fl_Group* o = new Fl_Group(7, 392, 623, 142);
  { Fl_Group* o = new Fl_Group(388, 392, 87, 142);
    { Fl_Button* o = new Fl_Button(389, 393, 86, 23, "Add TIM");
      o->labelsize(12);
      o->callback((Fl_Callback*)addItem_cb);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(389, 420, 86, 25, "Remove TIM");
      o->labelsize(12);
      o->callback((Fl_Callback*)delItem_cb);
    } // Fl_Button* o
    { deprecatePaths = new Fl_Check_Button(388, 510, 87, 24, "Deprecate\nFile Paths");
      deprecatePaths->tooltip("Replaces references of your username in the file path with a randomly selecte\
d insult.");
      deprecatePaths->down_box(FL_DOWN_BOX);
      deprecatePaths->labelsize(12);
      deprecatePaths->callback((Fl_Callback*)cb_deprecatePaths);
    } // Fl_Check_Button* deprecatePaths
    o->end();
  } // Fl_Group* o
  { list = new Fl_TimList(7, 392, 373, 142, "Files");
    list->box(FL_THIN_DOWN_FRAME);
    list->color(FL_BACKGROUND_COLOR);
    list->selection_color(FL_DARK_BLUE);
    list->labeltype(FL_NORMAL_LABEL);
    list->labelfont(0);
    list->labelsize(12);
    list->labelcolor(FL_FOREGROUND_COLOR);
    list->callback((Fl_Callback*)cb_TimList);
    list->align(Fl_Align(FL_ALIGN_TOP_LEFT));
    list->when(FL_WHEN_RELEASE);
    list->end();
    Fl_Group::current()->resizable(list);
  } // Fl_TimList* list
  { Fl_Group* o = new Fl_Group(485, 392, 145, 142, "View Control");
    o->box(FL_ENGRAVED_FRAME);
    o->labelsize(12);
    o->align(Fl_Align(FL_ALIGN_TOP_LEFT));
    { Fl_Spinner* o = new Fl_Spinner(492, 400, 44, 15, "Zoom");
      o->labelsize(12);
      o->maximum(8);
      o->textsize(12);
      o->callback((Fl_Callback*)cb_ZoomValue);
      o->align(Fl_Align(FL_ALIGN_RIGHT));
      o->when(FL_WHEN_CHANGED);
    } // Fl_Spinner* o
    { overlapToggle = new Fl_Check_Button(490, 419, 135, 16, "Display Overlap");
      overlapToggle->tooltip("Images and CLUTs will display a solid color when overlapping.");
      overlapToggle->down_box(FL_DOWN_BOX);
      overlapToggle->labelsize(12);
      overlapToggle->callback((Fl_Callback*)cb_OverlapToggle);
    } // Fl_Check_Button* overlapToggle
    { semiTransToggle = new Fl_Check_Button(490, 435, 135, 15, "Semi-Transparency");
      semiTransToggle->down_box(FL_DOWN_BOX);
      semiTransToggle->labelsize(12);
      semiTransToggle->callback((Fl_Callback*)cb_ToggleSemiTrans);
    } // Fl_Check_Button* semiTransToggle
    { groupList = new Fl_Choice(492, 506, 130, 20, "Show Group");
      groupList->down_box(FL_BORDER_BOX);
      groupList->labelsize(12);
      groupList->textsize(12);
      groupList->callback((Fl_Callback*)cb_GroupChoice);
      groupList->align(Fl_Align(FL_ALIGN_TOP_LEFT));
    } // Fl_Choice* groupList
    o->end();
  } // Fl_Group* o
  o->end();
} // Fl_Group* o
end();
}