/*
 * This file is part of the PulseView project.
 *
 * Copyright (C) 2013 Joel Holdsworth <joel@airwebreathe.org.uk>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 */

#ifndef PULSEVIEW_PV_WIDGETS_COLORPOPUP_HPP
#define PULSEVIEW_PV_WIDGETS_COLORPOPUP_HPP

#include "popup.hpp"
#include "wellarray.hpp"

#include <QVBoxLayout>

namespace pv {
namespace widgets {

class ColorPopup : public Popup
{
	Q_OBJECT

public:
	ColorPopup(int rows, int cols, QWidget *parent);

	WellArray& well_array();

Q_SIGNALS:
	void selected(int row, int col);

private Q_SLOTS:
	void color_selected(int, int);

private:
	WellArray well_array_;
	QVBoxLayout layout_;
};

}  // namespace widgets
}  // namespace pv

#endif // PULSEVIEW_PV_WIDGETS_COLORPOPUP_HPP
