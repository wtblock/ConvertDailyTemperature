/////////////////////////////////////////////////////////////////////////////
// Copyright © 2023 by W. T. Block, all rights reserved
/////////////////////////////////////////////////////////////////////////////
#pragma once
#include "KeyedCollection.h"

/////////////////////////////////////////////////////////////////////////////
// class to cross reference state ID codes with postal 2 letter abbreviation
class CState
{
// protected data
protected:
	// two digit state number
	CString m_csCode;

	// two letter postal name
	CString m_csPostal;

	// name
	CString m_csName;

// public properties
public:
	// two letter postal name
	inline CString GetPostal()
	{
		CString value = m_csPostal;

		return value;
	}
	// two letter postal name
	inline void SetPostal( CString value )
	{
		m_csPostal = value;
	}
	// two letter postal name
	__declspec( property( get = GetPostal, put = SetPostal ) )
		CString Postal;

	// two digit state number
	inline CString GetCode()
	{
		CString value = m_csCode;

		return value;
	}
	// two digit state number
	inline void SetCode( CString value )
	{
		m_csCode = value;
	}
	// two digit state number
	__declspec( property( get = GetCode, put = SetCode ) )
		CString Code;

	// state name
	inline CString GetName()
	{
		CString value = m_csName;

		return value;
	}
	// state name
	inline void SetName( CString value )
	{
		m_csName = value;
	}
	// state name
	__declspec( property( get = GetName, put = SetName ) )
		CString Name;

// protected methods
protected:

// public methods
public:

// protected virtuals
protected:

// publich virtuals
public:

// public constructor/destructor
public:
	CState();
	virtual ~CState();

};

