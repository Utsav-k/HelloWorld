/*
  ==============================================================================

    WallComponent.cpp
    Created: 9 Nov 2018 12:49:29am
    Author:  Jesus

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "WallComponent.h"

//==============================================================================
WallComponent::WallComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

WallComponent::~WallComponent()
{
}

void WallComponent::paint (Graphics& g)
{
	Rectangle<float> wall(0, 0, 200, 120);
	g.fillCheckerBoard(wall, 20, 10, Colours::saddlebrown, Colours::sandybrown);
	g.drawRect(wall);

}

void WallComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
