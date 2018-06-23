#pragma once

#include <string>
#include <vector>

#include <wx/fileconf.h>

class Options
{
public:
	Options();

	void Load();
	void Save();

	void Open();
	void Close();

	int nrThreads;

	wxString materialName;
	int nrPoints;
	int nearestNeighbors;
	int nrLevels;

	int pathNo;

	std::vector<std::vector<std::string>> paths;

protected:
	wxFileConfig *m_fileconfig;
};

