/////////////////////////////////////////////////////////////////////////////
// Copyright © 2023 by W. T. Block, all rights reserved
/////////////////////////////////////////////////////////////////////////////
#pragma once

#include "resource.h"
#include "ClimateStation.h"
#include "State.h"
#include "CHelper.h"
#include "KeyedCollection.h"
#include "SmartArray.h"

// a collection stations and their associated temperatures
typedef CKeyedCollection<CString, float> STATIONS;

// a collection of dates and the station temperatures for that date
typedef CKeyedCollection<CString, STATIONS > DATES;

// collection of stations keyed by station ID
CKeyedCollection<CString, CClimateStation> m_Stations;

// collection of states by postal name
CKeyedCollection<CString, CState> m_States;

// cross reference of state codes to postal names
CKeyedCollection<CString, CString> m_StateCodes;

// path to the stations file
CString m_csStationPath;

// path to the data file
CString m_csPath;

// wild card string
CString m_csWildcard;

// CSV filename to process
CString m_csFilename;

// current state abbreviation 
CString m_csState;

// current station code 
CString m_csStation;

// state stations 
STATIONS m_StateStations;

// a collection keyed by date of collections keyed by station
// of an array of temperatures 
DATES m_StationDates;
