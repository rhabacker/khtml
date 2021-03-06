/*
    Copyright (C) 2004, 2005 Nikolas Zimmermann <wildfox@kde.org>
                  2004, 2005, 2006 Rob Buis <buis@kde.org>

    This file is part of the KDE project

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "wtf/Platform.h"
#if ENABLE(SVG)
#include "SVGSymbolElement.h"

#include "PlatformString.h"
#include "SVGFitToViewBox.h"

namespace WebCore
{

SVGSymbolElement::SVGSymbolElement(const QualifiedName &tagName, Document *doc)
    : SVGStyledElement(tagName, doc)
    , SVGLangSpace()
    , SVGExternalResourcesRequired()
    , SVGFitToViewBox()
{
}

SVGSymbolElement::~SVGSymbolElement()
{
}

void SVGSymbolElement::parseMappedAttribute(MappedAttribute *attr)
{
    if (SVGLangSpace::parseMappedAttribute(attr)) {
        return;
    }
    if (SVGExternalResourcesRequired::parseMappedAttribute(attr)) {
        return;
    }
    if (SVGFitToViewBox::parseMappedAttribute(attr)) {
        return;
    }

    SVGStyledElement::parseMappedAttribute(attr);
}

}

#endif // ENABLE(SVG)

