/* -*-c++-*- OpenSceneGraph - Copyright (C) 1998-2006 Robert Osfield
 *
 * This library is open source and may be redistributed and/or modified under
 * the terms of the OpenSceneGraph Public License (OSGPL) version 0.0 or
 * (at your option) any later version.  The full license is in LICENSE file
 * included with this distribution, and on the openscenegraph.org website.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * OpenSceneGraph Public License for more details.
*/

#include <osg/Notify>
#include <osg/Object>
#include <osg/Image>
#include <osg/Node>
#include <osg/Group>
#include <osg/Geode>

#include <osgDB/Registry>
#include <osgDB/WriteFile>

#ifndef IM_OSG_NO_WRITE_SERIALIZATION

using namespace osg;
using namespace osgDB;

bool osgDB::writeObjectFile(const Object& object,const std::string& filename, const Options* options )
{
    ReaderWriter::WriteResult wr = Registry::instance()->writeObject( object, filename, options );
    if (!wr.success()) OSG_WARN << "Error writing file " << filename << ": " << wr.statusMessage() << std::endl;
    return wr.success();
}


bool osgDB::writeImageFile(const Image& image,const std::string& filename, const Options* options )
{
    ReaderWriter::WriteResult wr = Registry::instance()->writeImage( image, filename, options );
    if (!wr.success()) OSG_WARN << "Error writing file " << filename << ": " << wr.statusMessage() << std::endl;
    return wr.success();
}


bool osgDB::writeHeightFieldFile(const HeightField& HeightField,const std::string& filename, const Options* options )
{
    ReaderWriter::WriteResult wr = Registry::instance()->writeHeightField( HeightField, filename, options );
    if (!wr.success()) OSG_WARN << "Error writing file " << filename << ": " << wr.statusMessage() << std::endl;
    return wr.success();
}

bool osgDB::writeNodeFile(const Node& node,const std::string& filename, const Options* options )
{
    ReaderWriter::WriteResult wr = Registry::instance()->writeNode( node, filename, options );
    if (!wr.success()) OSG_WARN << "Error writing file " << filename << ": " << wr.statusMessage() << std::endl;
    return wr.success();
}

bool osgDB::writeShaderFile(const Shader& shader,const std::string& filename, const Options* options )
{
    ReaderWriter::WriteResult wr = Registry::instance()->writeShader( shader, filename, options );
    if (!wr.success()) OSG_WARN << "Error writing file " << filename << ": " << wr.statusMessage() << std::endl;
    return wr.success();
}

bool osgDB::writeScriptFile(const Script& image,const std::string& filename, const Options* options )
{
    ReaderWriter::WriteResult wr = Registry::instance()->writeScript( image, filename, options );
    if (!wr.success()) OSG_WARN << "Error writing file " << filename << ": " << wr.statusMessage() << std::endl;
    return wr.success();
}

#endif
