#ifndef _TABWIDGET_
#define _TABWIDGET_
#include <QWidget>
#include <math.h>
#include <QTabWidget>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <qlayout.h>
#include <qwt_plot.h>
#include <qwt_plot_marker.h>
#include <qwt_plot_curve.h>
#include <qwt_legend.h>
#include <qwt_point_data.h>
#include <qwt_plot_canvas.h>
#include <qwt_plot_panner.h>
#include <qwt_plot_magnifier.h>
#include <qwt_text.h>
#include <qwt_symbol.h>
#include <qwt_math.h>
#include <math.h>

//-----------------------------------------------------------------
//      A simple example which shows how to use QwtPlot connected
//      to a data class without any storage, calculating each values
//      on the fly.
//-----------------------------------------------------------------
/////////////////////////////////////////////////////////////////////////////////////////////////////
class CTabWidget : public QTabWidget
{
public:
	CTabWidget();
	virtual ~CTabWidget() {}
    CTabWidget  *getTabWidget() { return this; }
	void setTabWidget(CTabWidget* tab) { _tab = tab;  }
	CTabWidget* getters() { return this; }
	void setters(CTabWidget* tab) { _tab = tab; }
	void CpuPlot_Done();
	void sinusplot();
private:
	CTabWidget* _tab;
	QWidget * vBox;
};

#endif