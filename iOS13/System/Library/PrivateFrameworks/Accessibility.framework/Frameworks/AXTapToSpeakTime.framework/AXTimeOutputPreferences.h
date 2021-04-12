/*
* Generated on Monday, March 1, 2021 at 2:34:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXTapToSpeakTime.framework/AXTapToSpeakTime
*/

#import <AccessibilityUtilities/AXSettings.h>

@class NPSDomainAccessor;

@interface AXTimeOutputPreferences : AXSettings {

	NPSDomainAccessor* _domainAccessor;

}

@property (nonatomic,readonly) NPSDomainAccessor * domainAccessor;              //@synthesize domainAccessor=_domainAccessor - In the implementation block
+(id)sharedInstance;
-(id)localizedStringForKey:(id)arg1 ;
-(BOOL)tapToSpeakTimeEnabled;
-(long long)tapToSpeakTimeAvailability;
-(BOOL)voiceOverTapticTimeMode;
-(long long)voiceOverTapticTimeEncoding;
-(BOOL)voiceOverTapticChimesEnabled;
-(long long)voiceOverTapticChimesFrequencyEncoding;
-(long long)voiceOverTapticChimesSoundType;
-(void)setTapToSpeakTimeEnabled:(BOOL)arg1 ;
-(void)setTapToSpeakTimeAvailability:(long long)arg1 ;
-(void)setVoiceOverTapticTimeMode:(BOOL)arg1 ;
-(void)setVoiceOverTapticTimeEncoding:(long long)arg1 ;
-(void)setVoiceOverTapticChimesEnabled:(BOOL)arg1 ;
-(void)setVoiceOverTapticChimesFrequencyEncoding:(long long)arg1 ;
-(void)setVoiceOverTapticChimesSoundType:(long long)arg1 ;
-(NPSDomainAccessor *)domainAccessor;
-(id)_npsValueForPreferenceKey:(id)arg1 expectedClass:(Class)arg2 ;
-(id)_npsValueForPreferenceKey:(id)arg1 ;
-(BOOL)_npsBoolValueForPreferenceKey:(id)arg1 defaultValue:(BOOL)arg2 ;
-(void)_setNPSValue:(id)arg1 preferenceKey:(id)arg2 ;
-(long long)_npsIntegerValueForPreferenceKey:(id)arg1 defaultValue:(long long)arg2 ;
-(BOOL)_voiceOverIsEnabled;
-(id)localizedStringForTapticChimesFrequencyEncoding:(long long)arg1 ;
-(id)localizedStringForTapticChimesSoundType:(long long)arg1 ;
-(BOOL)_voiceOverIsInTripleClick;
-(id)localizedStringForTapticTimeEncoding:(long long)arg1 ;
-(id)tapticChimesFrequencyOptions;
-(id)tapticChimesSoundsOptions;
-(id)tapToSpeakAvailabilityOptions;
-(id)tapticTimeEncodingOptions;
-(id)tapticChimesLocalizedTitle;
-(id)tapticChimesLocalizedDescription;
-(id)tapticChimesLocalizedCurrentFrequency;
-(id)tapticChimesLocalizedCurrentSounds;
-(id)tapticChimesScheduleLocalizedTitle;
-(id)tapticChimesSoundsLocalizedTitle;
-(id)tapToSpeakTimeLocalizedTitle;
-(id)tapToSpeakTimeLocalizedDescription;
-(id)localizedStringForTapToSpeakTimeAvailability:(long long)arg1 ;
-(id)tapticTimeLocalizedTitle;
-(id)tapticTimeLocalizedDescription;
-(id)tapticTimeLocalizedCurrentMode;
-(id)tapticTimeModeLocalizedDescription;
@end

