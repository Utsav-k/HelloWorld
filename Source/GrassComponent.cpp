/*
  ==============================================================================

    GrassComponent.cpp
    Created: 9 Nov 2018 1:36:40am
    Author:  Jesus

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "GrassComponent.h"

//==============================================================================
GrassComponent::GrassComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

GrassComponent::~GrassComponent()
{
}

void GrassComponent::paint (Graphics& g)
{
	g.setColour(Colours::green);
	g.drawLine(10, 325, getWidth() - 10, 325, 10.0f);
}

void GrassComponent::resized()
{

}
