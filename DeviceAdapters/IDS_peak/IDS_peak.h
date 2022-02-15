///////////////////////////////////////////////////////////////////////////////
// FILE:          IDS_peak.h
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

#ifndef _IDS_PEAK_H_
#define _IDS_PEAK_H_

#include "DeviceBase.h"
#include "ImgBuffer.h"
#include "DeviceThreads.h"

class CIDS_peak : public CCameraBase<CIDS_peak>
{

public:

	CIDS_peak();                                           //constructor
	~CIDS_peak();


private:
	//friend class MySequenceThread;
	//MySequenceThread * thd_;


};

#endif // ifndef _IDS_PEAK_H