/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/SoundsAndHapticsSettings.framework/SoundsAndHapticsSettings
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/SHSRingerControlDelegate.h>
#import <libobjc.A.dylib/PSListControllerTestableSpecifiers.h>

@class PSSpecifier, ADASManager, NSNumberFormatter, SHSAudioPlayback, SHSRingerControl, NSString;

@interface SHSSoundsPrefController : PSListController <SHSRingerControlDelegate, PSListControllerTestableSpecifiers> {

	BOOL _hasTelephony;
	BOOL _volumeHUDsuppressed;
	PSSpecifier* _voiceMailSpecifier;
	long long _voiceMailSpecifierIndex;
	BOOL __volumeSliderVisible;
	ADASManager* _audioSettingsManager;
	NSNumberFormatter* _numberFormatter;
	SHSAudioPlayback* __audioPlayback;
	SHSRingerControl* __ringerControl;

}

@property (nonatomic,retain) ADASManager * audioSettingsManager;                                   //@synthesize audioSettingsManager=_audioSettingsManager - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * numberFormatter;                                  //@synthesize numberFormatter=_numberFormatter - In the implementation block
@property (nonatomic,retain) SHSAudioPlayback * _audioPlayback;                                    //@synthesize _audioPlayback=__audioPlayback - In the implementation block
@property (assign,getter=_isVolumeSliderVisible,nonatomic) BOOL _volumeSliderVisible;              //@synthesize _volumeSliderVisible=__volumeSliderVisible - In the implementation block
@property (nonatomic,retain) SHSRingerControl * _ringerControl;                                    //@synthesize _ringerControl=__ringerControl - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)booleanCapabilitiesToTest;
-(void)willBecomeActive;
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(NSNumberFormatter *)numberFormatter;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)specifiers;
-(id)init;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didLock;
-(void)updateVolume;
-(int)_deviceType;
-(void)endInterruption;
-(void)willResignActive;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
-(id)volume:(id)arg1 ;
-(void)dealloc;
-(SHSRingerControl *)_ringerControl;
-(void)updateVoiceMailVisibility;
-(void)didBackground;
-(void)willForeground;
-(void)setVolumeHUDsuppression:(BOOL)arg1 ;
-(void)willHideSlider;
-(void)willShowSlider;
-(void)setSystemHapticsEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)systemHapticsEnabled:(id)arg1 ;
-(SHSAudioPlayback *)_audioPlayback;
-(BOOL)_isVolumeSliderVisible;
-(void)startRingtonePreview;
-(ADASManager *)audioSettingsManager;
-(id)_volumeSliderCell;
-(void)ringerControlDidObserveEffectiveSystemVolumeChange:(id)arg1 ;
-(void)ringerControl:(id)arg1 volumeValueDidChange:(float)arg2 ;
-(void)setSoundEffects:(id)arg1 specifier:(id)arg2 ;
-(id)soundEffects:(id)arg1 ;
-(void)setVolume:(id)arg1 specifier:(id)arg2 ;
-(id)detailTextForToneWithSpecifier:(id)arg1 ;
-(id)shouldPlayCalendarSound:(id)arg1 ;
-(void)setPlayKeyboardSound:(id)arg1 specifier:(id)arg2 ;
-(id)canChangeRingtoneWithButtons:(id)arg1 ;
-(void)setCanChangeRingtoneWithButtons:(id)arg1 specifier:(id)arg2 ;
-(id)getHeadphoneLevelLimitSetting;
-(void)setAudioSettingsManager:(ADASManager *)arg1 ;
-(void)set_audioPlayback:(SHSAudioPlayback *)arg1 ;
-(void)set_volumeSliderVisible:(BOOL)arg1 ;
-(void)set_ringerControl:(SHSRingerControl *)arg1 ;
@end

