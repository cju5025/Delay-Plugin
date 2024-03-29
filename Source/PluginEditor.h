#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

class Delay03AudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    Delay03AudioProcessorEditor (Delay03AudioProcessor&);
    ~Delay03AudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;


private:
    Slider mDryWetSlider;
    Slider mFeedbackSlider;
    Slider mDelayTimeSlider;

    Delay03AudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Delay03AudioProcessorEditor)
};
