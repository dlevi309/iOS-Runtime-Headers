/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)_archiveFileName;
-(void)save;
-(void)setDefaultValues;
-(ISPerformanceDiagnosticsSettings *)performanceDiagnosticsSettings;
-(void)setPerformanceDiagnosticsSettings:(ISPerformanceDiagnosticsSettings *)arg1 ;
-(ISPlayerSettings *)playerSettings;
-(void)setPlayerSettings:(ISPlayerSettings *)arg1 ;
-(ISVitalitySettings *)vitalitySettings;
-(void)setVitalitySettings:(ISVitalitySettings *)arg1 ;
@end

