/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXTapToSpeakTime.framework/AXTapToSpeakTime
*/

#import <AccessibilityUtilities/AXSettings.h>

@interface AXTimeOutputPreferences : AXSettings
+(id)sharedInstance;
-(id)tapticTimeLocalizedCurrentMode;
-(id)tapticChimesLocalizedCurrentSounds;
-(void)setTapToSpeakTimeAvailability:(long long)arg1 ;
-(BOOL)_voiceOverIsInTripleClick;
-(void)_setNPSValue:(id)arg1 preferenceKey:(id)arg2 ;
-(id)tapToSpeakAvailabilityOptions;
-(id)localizedStringForKey:(id)arg1 ;
-(void)setVoiceOverTapticChimesFrequencyEncoding:(long long)arg1 ;
-(long long)_npsIntegerValueForPreferenceKey:(id)arg1 defaultValue:(long long)arg2 ;
-(void)setVoiceOverTapticTimeEncoding:(long long)arg1 ;
-(BOOL)tapToSpeakTimeEnabled;
-(BOOL)_npsBoolValueForPreferenceKey:(id)arg1 defaultValue:(BOOL)arg2 ;
-(void)setVoiceOverTapticTimeMode:(BOOL)arg1 ;
-(void)setVoiceOverTapticChimesEnabled:(BOOL)arg1 ;
-(void)setTapToSpeakTimeEnabled:(BOOL)arg1 ;
-(id)_npsValueForPreferenceKey:(id)arg1 ;
-(id)tapticChimesSoundsLocalizedTitle;
-(long long)voiceOverTapticChimesSoundType;
-(void)setVoiceOverTapticChimesSoundType:(long long)arg1 ;
-(id)tapticChimesFrequencyOptions;
-(id)tapToSpeakTimeLocalizedTitle;
-(id)tapticChimesLocalizedTitle;
-(id)tapticTimeLocalizedTitle;
-(id)accessibilityDomainAccessor;
-(BOOL)_voiceOverIsEnabled;
-(BOOL)voiceOverTapticChimesEnabled;
-(id)tapticTimeLocalizedDescription;
-(BOOL)voiceOverTapticTimeMode;
-(long long)voiceOverTapticTimeEncoding;
-(id)localizedStringForTapticChimesSoundType:(long long)arg1 ;
-(id)tapticChimesLocalizedDescription;
-(id)tapticChimesLocalizedCurrentFrequency;
-(id)tapticChimesSoundsOptions;
-(id)tapticTimeModeLocalizedDescription;
-(long long)voiceOverTapticChimesFrequencyEncoding;
-(id)localizedStringForTapticTimeEncoding:(long long)arg1 ;
-(id)tapticChimesScheduleLocalizedTitle;
-(id)_npsValueForPreferenceKey:(id)arg1 expectedClass:(Class)arg2 ;
-(id)localizedStringForTapticChimesFrequencyEncoding:(long long)arg1 ;
-(id)tapticTimeEncodingOptions;
-(id)localizedStringForTapToSpeakTimeAvailability:(long long)arg1 ;
-(long long)tapToSpeakTimeAvailability;
-(id)tapToSpeakTimeLocalizedDescription;
@end

