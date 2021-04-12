/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/

#import <PhotosPlayer/ISSettings.h>

@class ISPlayerSettings, ISVitalitySettings, ISPerformanceDiagnosticsSettings;

@interface ISRootSettings : ISSettings {

	ISPlayerSettings* _playerSettings;
	ISVitalitySettings* _vitalitySettings;
	ISPerformanceDiagnosticsSettings* _performanceDiagnosticsSettings;

}

@property (nonatomic,retain) ISPlayerSettings * playerSettings;                                              //@synthesize playerSettings=_playerSettings - In the implementation block
@property (nonatomic,retain) ISVitalitySettings * vitalitySettings;                                          //@synthesize vitalitySettings=_vitalitySettings - In the implementation block
@property (nonatomic,retain) ISPerformanceDiagnosticsSettings * performanceDiagnosticsSettings;              //@synthesize performanceDiagnosticsSettings=_performanceDiagnosticsSettings - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
+(id)_defaultsKey;
-(void)setDefaultValues;
-(void)setPlayerSettings:(ISPlayerSettings *)arg1 ;
-(void)save;
-(ISVitalitySettings *)vitalitySettings;
-(ISPlayerSettings *)playerSettings;
-(void)setPerformanceDiagnosticsSettings:(ISPerformanceDiagnosticsSettings *)arg1 ;
-(ISPerformanceDiagnosticsSettings *)performanceDiagnosticsSettings;
-(void)setVitalitySettings:(ISVitalitySettings *)arg1 ;
@end

