/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
-(void)_updateSpecifiersFromPreferences;
-(void)_refreshFooterForSpecifier:(id)arg1 ;
-(id)_localizeTriggerString:(id)arg1 ;
-(void)preferencesDidChange:(id)arg1 ;
-(id)footerVariant;
@end

