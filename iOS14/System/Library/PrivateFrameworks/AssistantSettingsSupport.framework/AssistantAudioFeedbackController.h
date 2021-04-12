/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
*/

#import <Preferences/PSListController.h>

@class PSSpecifier;

@interface AssistantAudioFeedbackController : PSListController {

	PSSpecifier* _switchWithRingerSpecifier;
	PSSpecifier* _alwaysSpecifier;
	PSSpecifier* _handsfreeSpecifier;
	PSSpecifier* _groupSpecifier;
	long long _useDeviceSpeakerForTTSPreference;

}
+(id)bundle;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)alwaysShowRecognizedSpeech;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)_localizeTriggerString:(id)arg1 ;
-(void)preferencesDidChange:(id)arg1 ;
-(void)_updateSpecifiersFromPreferences;
-(void)_refreshFooterForSpecifier:(id)arg1 ;
-(id)footerVariant;
-(id)isAlwaysPrintSiriResponseEnabled:(id)arg1 ;
-(void)setAlwaysPrintSiriResponseEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setAlwaysShowRecognizedSpeech:(id)arg1 forSpecifier:(id)arg2 ;
@end

