///////////////////////////////////////////////////////////////////////////////
// FILE:          IDS_peak.cpp
// PROJECT:       Micro-Manager
// SUBSYSTEM:     DeviceAdapters
//-----------------------------------------------------------------------------
// DESCRIPTION:   IDS PEAK API based cameras (U3 series)
//
// AUTHOR:        Marcel Mueller
//
// LICENSE:       This file is distributed under the BSD license.
//                License text is included with the source distribution.
//
//                This file is distributed in the hope that it will be useful,
//                but WITHOUT ANY WARRANTY; without even the implied warranty
//                of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//
//                IN NO EVENT SHALL THE COPYRIGHT OWNER OR
//                CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
//                INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES.
//

#include "IDS_peak.h"
#include "ids_peak_comfort_c/ids_peak_comfort_c.h"

CIDS_peak::CIDS_peak() :
	CCameraBase<CIDS_peak>() {

	// call the base class method to set-up default error codes/messages
	InitializeDefaultErrorMessages();
	//readoutStartTime_ = GetCurrentMMTime();
	//thd_ = new MySequenceThread(this);

	// parent ID display
	CreateHubIDProperty();



}

CIDS_peak::~CIDS_peak()
{
}
