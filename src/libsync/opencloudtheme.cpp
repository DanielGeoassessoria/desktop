/*
 * Copyright (C) by Klaas Freitag <freitag@owncloud.com>
 *
 * Customized for Canoinhas Geoassessoria (cloud.canoinhasgeo.com.br) — 2026
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 */

#include "opencloudtheme.h"

#include <QCoreApplication>
#include <QIcon>
#include <QString>
#include <QVariant>

namespace OCC {

OpenCloudTheme::OpenCloudTheme()
    : Theme()
{
}

QColor OpenCloudTheme::wizardHeaderBackgroundColor() const
{
    return QColor("#2d5031");
}

QColor OpenCloudTheme::wizardHeaderTitleColor() const
{
    return Qt::white;
}

QIcon OpenCloudTheme::wizardHeaderLogo() const
{
    return Resources::themeUniversalIcon(QStringLiteral("wizard_logo"));
}

QmlButtonColor OpenCloudTheme::primaryButtonColor() const
{
    return {"#3f6e41", "#ffffff", "#DADADA"};
}

QmlButtonColor OpenCloudTheme::secondaryButtonColor() const
{
    return {"#5a8a5c", "#ffffff", "#B0B0B0"};
}
}
