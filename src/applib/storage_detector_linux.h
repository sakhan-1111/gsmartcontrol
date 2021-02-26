/******************************************************************************
License: GNU General Public License v3.0 only
Copyright:
	(C) 2008 - 2021 Alexander Shaduri <ashaduri@gmail.com>
******************************************************************************/
/// \file
/// \author Alexander Shaduri
/// \ingroup applib
/// \weakgroup applib
/// @{

#ifndef STORAGE_DETECTOR_LINUX_H
#define STORAGE_DETECTOR_LINUX_H

#include "config.h"  // CONFIG_*

#if defined CONFIG_KERNEL_LINUX


#include <string>
#include <vector>

#include "executor_factory.h"
#include "storage_device.h"



/// Detect drives in Linux
std::string detect_drives_linux(std::vector<StorageDevicePtr>& drives, const ExecutorFactoryPtr& ex_factory);



#endif


#endif

/// @}
