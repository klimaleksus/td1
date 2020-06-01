
void _myawesomeexport_ChatSelected(void* data);
void _myawesomeexport_ExportRequested(void);

#ifdef _myawesomeexport_cpp
#undef _myawesomeexport_cpp

#include "window/window_peer_menu.h"
#include "data/data_peer.h"

PeerData* _myawesomeexport_chatselected_ = NULL;

void _myawesomeexport_ChatSelected(void* data){
  _myawesomeexport_chatselected_ = (PeerData*)data;
};

void _myawesomeexport_ExportRequested(void){
  if(!_myawesomeexport_chatselected_)
    return;
  Window::PeerMenuExportChat(_myawesomeexport_chatselected_);
};

#endif

//EOF
