/*
 * Copyright 2015-2016 Gary R. Van Sickle (grvs@users.sourceforge.net).
 *
 * This file is part of UniversalCodeGrep.
 *
 * UniversalCodeGrep is free software: you can redistribute it and/or modify it under the
 * terms of version 3 of the GNU General Public License as published by the Free
 * Software Foundation.
 *
 * UniversalCodeGrep is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
 * PARTICULAR PURPOSE.  See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * UniversalCodeGrep.  If not, see <http://www.gnu.org/licenses/>.
 */

/** @file */

#ifndef MATCHLIST_H_
#define MATCHLIST_H_

#include <string>
#include <vector>

#include "Match.h"

/*
 *
 */
class MatchList
{
public:
	MatchList() {};
	MatchList(const MatchList &lvalue) = default;
	MatchList(const std::string &filename);
	virtual ~MatchList();

	void AddMatch(const Match &match);

	void Print(bool istty, bool enable_color) const;

	bool empty() const noexcept { return m_match_list.empty(); };

private:

	std::string m_filename;

	std::vector<Match> m_match_list;
};

#endif /* MATCHLIST_H_ */
