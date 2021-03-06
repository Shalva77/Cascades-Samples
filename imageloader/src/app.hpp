/* Copyright (c) 2012, 2013  BlackBerry Limited.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef APP_HPP
#define APP_HPP

#include "imageloader.hpp"

#include <QtCore/QObject>
#include <QtCore/QVector>

#include <bb/cascades/QListDataModel>

/**
 * @short The central class of the application
 */
//! [0]
class App : public QObject
{
    Q_OBJECT

    // The model that contains the progress and image data
    Q_PROPERTY(bb::cascades::DataModel* model READ model CONSTANT)

public:
    App(QObject *parent = 0);

    // This method is called to start the loading of all images.
    Q_INVOKABLE void loadImages();

private:
    // The accessor method for the property
    bb::cascades::DataModel* model() const;

    // The model that contains the progress and image data
    bb::cascades::QListDataModel<QObject*>* m_model;
};
//! [0]

#endif
