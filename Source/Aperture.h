#pragma once

#include "Preset.h"

class QAperture : public QPresetXML
{
	Q_OBJECT

public:
	QAperture(QObject* pParent = NULL);
	QAperture::QAperture(const QAperture& Other);
	QAperture& QAperture::operator=(const QAperture& Other);

	float			GetSize(void) const;
	void			SetSize(const float& Size);
	void			Reset(void);
	void			ReadXML(QDomElement& Parent);
	QDomElement		WriteXML(QDomDocument& DOM, QDomElement& Parent);

signals:
	void Changed(const QAperture& Aperture);

private:
	float			m_Size;
};