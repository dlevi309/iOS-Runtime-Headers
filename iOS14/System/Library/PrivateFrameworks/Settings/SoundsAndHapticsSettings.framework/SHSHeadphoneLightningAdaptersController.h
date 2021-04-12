/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/SoundsAndHapticsSettings.framework/SoundsAndHapticsSettings
*/

#import <Preferences/PSListController.h>

@class ADASManager;

@interface SHSHeadphoneLightningAdaptersController : PSListController {

	ADASManager* _audioSettingsManager;

}

@property (nonatomic,retain) ADASManager * audioSettingsManager;              //@synthesize audioSettingsManager=_audioSettingsManager - In the implementation block
-(id)specifiers;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)dealloc;
-(ADASManager *)audioSettingsManager;
-(void)setAudioSettingsManager:(ADASManager *)arg1 ;
-(void)setConnectedToHeadphonesEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)getConnectedToHeadphonesEnabled;
-(void)confirmForgetLightningAdaptersAction;
-(void)deleteAllLightningAdapterData;
@end

