/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Settings/SoundsAndHapticsSettings.framework/SoundsAndHapticsSettings
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/PSListControllerTestableSpecifiers.h>

@class PSSpecifier, NSString;

@interface SHSSoundsPrefController : PSListController <PSListControllerTestableSpecifiers> {

	float _volume;
	float _rateLimitedVolume;
	BOOL _hasTelephony;
	BOOL _volumeHUDsuppressed;
	double _lastTime;
	PSSpecifier* _voiceMailSpecifier;
	long long _voiceMailSpecifierIndex;
	BOOL _sliderActive;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)booleanCapabilitiesToTest;
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willBecomeActive;
-(void)willResignActive;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(int)_deviceType;
-(void)endInterruption;
-(id)specifiers;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
-(void)didLock;
-(void)updateVolume;
-(void)volumeChangedExternally:(id)arg1 ;
-(void)updateVoiceMailVisibility;
-(void)didBackground;
-(void)willForeground;
-(BOOL)_canChangeRingtoneWithButtons;
-(void)setVolumeHUDsuppression:(BOOL)arg1 ;
-(void)willHideSlider;
-(void)willShowSlider;
-(void)setSystemHapticsEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)systemHapticsEnabled:(id)arg1 ;
-(void)startRingtonePreview;
-(void)setVolumeAfterRateLimiting;
-(void)setSoundEffects:(id)arg1 specifier:(id)arg2 ;
-(id)soundEffects:(id)arg1 ;
-(id)volume:(id)arg1 ;
-(void)setVolume:(id)arg1 specifier:(id)arg2 ;
-(id)detailTextForToneWithSpecifier:(id)arg1 ;
-(id)shouldPlayCalendarSound:(id)arg1 ;
-(void)setPlayKeyboardSound:(id)arg1 specifier:(id)arg2 ;
-(id)canChangeRingtoneWithButtons:(id)arg1 ;
-(void)setCanChangeRingtoneWithButtons:(id)arg1 specifier:(id)arg2 ;
@end

