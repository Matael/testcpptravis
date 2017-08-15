/*
 * b.h
 *
 * Copyright (C) 2017 Mathieu Gaborit (matael) <mathieu@matael.org>
 *
 * Licensed under the "THE BEER-WARE LICENSE" (Revision 42):
 * Mathieu (matael) Gaborit wrote this file. As long as you retain this notice you
 * can do whatever you want with this stuff. If we meet some day, and you think
 * this stuff is worth it, you can buy me a beer or coffee in return
 *
 */

#pragma once

#include "a.h"

namespace ns {

	class B : public A<1,2> {
	public:
		B(int o);
	};
}
