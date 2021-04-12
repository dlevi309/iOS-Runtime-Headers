/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@class CAMCaptureConfiguration, CAMConflictingControlConfiguration, NSDate, NSUserDefaults;

@interface CAMUserPreferences : NSObject {

	BOOL _didResetTorchMode;
	BOOL _shouldShowGridView;
	BOOL _QRBannersEnabledInSettings;
	BOOL _forceEnableQRBanners;
	BOOL _shouldCaptureHDREV0;
	BOOL _shouldUseModernHDRBehavior;
	BOOL _didAcknowledgePortraitModeDescription;
	BOOL _autoLowLightVideoEnabled;
	BOOL _shouldForceMonoAudioRecording;
	BOOL _photoOverCaptureEnabled;
	BOOL _videoOverCaptureEnabled;
	BOOL _autoAdjustmentsEnabled;
	BOOL _didAcknowledgeCTMDescription;
	BOOL _preserveEffectFilter;
	BOOL _preserveCaptureMode;
	BOOL _preserveLivePhoto;
	BOOL _lockAsShutterEnabled;
	BOOL _shouldDelayRemotePersistence;
	BOOL _burstFollowsEncoderSettings;
	BOOL __preferHEVCWhenAvailable;
	BOOL __shouldDisableCameraSwitchingDuringVideoRecording;
	CAMCaptureConfiguration* _captureConfiguration;
	CAMConflictingControlConfiguration* _conflictingControlConfiguration;
	long long _videoConfiguration;
	long long _slomoConfiguration;
	long long _previewViewAspectMode;
	long long _photoModeLastCapturedEffectFilterType;
	long long _squareModeLastCapturedEffectFilterType;
	long long _portraitModeLastCapturedEffectFilterType;
	NSDate* _resetTimeoutDate;
	long long _preferredMinimumFreeBytes;
	long long _overriddenBackCaptureInterval;
	long long _overriddenFrontCaptureInterval;
	NSUserDefaults* __underlyingUserDefaults;
	double __resetTimeoutOverride;

}

@property (setter=_setUnderlyingUserDefaults:,getter=_underlyingUserDefaults,nonatomic,retain) NSUserDefaults * _underlyingUserDefaults;              //@synthesize _underlyingUserDefaults=__underlyingUserDefaults - In the implementation block
@property (setter=_setResetTimeoutDate:,nonatomic,retain) NSDate * resetTimeoutDate;                                                                  //@synthesize resetTimeoutDate=_resetTimeoutDate - In the implementation block
@property (assign,setter=_setDidResetTorchMode:,nonatomic) BOOL didResetTorchMode;                                                                    //@synthesize didResetTorchMode=_didResetTorchMode - In the implementation block
@property (nonatomic,readonly) BOOL _preferHEVCWhenAvailable;                                                                                         //@synthesize _preferHEVCWhenAvailable=__preferHEVCWhenAvailable - In the implementation block
@property (nonatomic,readonly) double _resetTimeoutOverride;                                                                                          //@synthesize _resetTimeoutOverride=__resetTimeoutOverride - In the implementation block
@property (nonatomic,readonly) BOOL _shouldDisableCameraSwitchingDuringVideoRecording;                                                                //@synthesize _shouldDisableCameraSwitchingDuringVideoRecording=__shouldDisableCameraSwitchingDuringVideoRecording - In the implementation block
@property (nonatomic,retain) CAMCaptureConfiguration * captureConfiguration;                                                                          //@synthesize captureConfiguration=_captureConfiguration - In the implementation block
@property (nonatomic,retain) CAMConflictingControlConfiguration * conflictingControlConfiguration;                                                    //@synthesize conflictingControlConfiguration=_conflictingControlConfiguration - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowGridView;                                                                                               //@synthesize shouldShowGridView=_shouldShowGridView - In the implementation block
@property (nonatomic,readonly) BOOL QRBannersEnabledInSettings;                                                                                       //@synthesize QRBannersEnabledInSettings=_QRBannersEnabledInSettings - In the implementation block
@property (assign,nonatomic) BOOL forceEnableQRBanners;                                                                                               //@synthesize forceEnableQRBanners=_forceEnableQRBanners - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowQRBanners; 
@property (nonatomic,readonly) BOOL shouldCaptureHDREV0;                                                                                              //@synthesize shouldCaptureHDREV0=_shouldCaptureHDREV0 - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseModernHDRBehavior;                                                                                       //@synthesize shouldUseModernHDRBehavior=_shouldUseModernHDRBehavior - In the implementation block
@property (assign,nonatomic) BOOL didAcknowledgePortraitModeDescription;                                                                              //@synthesize didAcknowledgePortraitModeDescription=_didAcknowledgePortraitModeDescription - In the implementation block
@property (nonatomic,readonly) BOOL usingMostCompatibleEncoding; 
@property (nonatomic,readonly) BOOL didConfirmVideo4k60MostCompatible; 
@property (nonatomic,readonly) BOOL didConfirmSlomo1080p240MostCompatible; 
@property (nonatomic,readonly) long long videoConfiguration;                                                                                          //@synthesize videoConfiguration=_videoConfiguration - In the implementation block
@property (nonatomic,readonly) long long slomoConfiguration;                                                                                          //@synthesize slomoConfiguration=_slomoConfiguration - In the implementation block
@property (getter=isAutoLowLightVideoEnabled,nonatomic,readonly) BOOL autoLowLightVideoEnabled;                                                       //@synthesize autoLowLightVideoEnabled=_autoLowLightVideoEnabled - In the implementation block
@property (nonatomic,readonly) BOOL shouldForceMonoAudioRecording;                                                                                    //@synthesize shouldForceMonoAudioRecording=_shouldForceMonoAudioRecording - In the implementation block
@property (getter=isPhotoOverCaptureEnabled,nonatomic,readonly) BOOL photoOverCaptureEnabled;                                                         //@synthesize photoOverCaptureEnabled=_photoOverCaptureEnabled - In the implementation block
@property (getter=isVideoOverCaptureEnabled,nonatomic,readonly) BOOL videoOverCaptureEnabled;                                                         //@synthesize videoOverCaptureEnabled=_videoOverCaptureEnabled - In the implementation block
@property (getter=isAutoAdjustmentsEnabled,nonatomic,readonly) BOOL autoAdjustmentsEnabled;                                                           //@synthesize autoAdjustmentsEnabled=_autoAdjustmentsEnabled - In the implementation block
@property (assign,nonatomic) BOOL didAcknowledgeCTMDescription;                                                                                       //@synthesize didAcknowledgeCTMDescription=_didAcknowledgeCTMDescription - In the implementation block
@property (assign,nonatomic) long long previewViewAspectMode;                                                                                         //@synthesize previewViewAspectMode=_previewViewAspectMode - In the implementation block
@property (nonatomic,readonly) long long photoEncodingBehavior; 
@property (assign,nonatomic) long long photoModeLastCapturedEffectFilterType;                                                                         //@synthesize photoModeLastCapturedEffectFilterType=_photoModeLastCapturedEffectFilterType - In the implementation block
@property (assign,nonatomic) long long squareModeLastCapturedEffectFilterType;                                                                        //@synthesize squareModeLastCapturedEffectFilterType=_squareModeLastCapturedEffectFilterType - In the implementation block
@property (assign,nonatomic) long long portraitModeLastCapturedEffectFilterType;                                                                      //@synthesize portraitModeLastCapturedEffectFilterType=_portraitModeLastCapturedEffectFilterType - In the implementation block
@property (nonatomic,readonly) BOOL preserveEffectFilter;                                                                                             //@synthesize preserveEffectFilter=_preserveEffectFilter - In the implementation block
@property (nonatomic,readonly) BOOL preserveCaptureMode;                                                                                              //@synthesize preserveCaptureMode=_preserveCaptureMode - In the implementation block
@property (nonatomic,readonly) BOOL preserveLivePhoto;                                                                                                //@synthesize preserveLivePhoto=_preserveLivePhoto - In the implementation block
@property (getter=isLockAsShutterEnabled,nonatomic,readonly) BOOL lockAsShutterEnabled;                                                               //@synthesize lockAsShutterEnabled=_lockAsShutterEnabled - In the implementation block
@property (nonatomic,readonly) BOOL shouldDelayRemotePersistence;                                                                                     //@synthesize shouldDelayRemotePersistence=_shouldDelayRemotePersistence - In the implementation block
@property (nonatomic,readonly) BOOL burstFollowsEncoderSettings;                                                                                      //@synthesize burstFollowsEncoderSettings=_burstFollowsEncoderSettings - In the implementation block
@property (nonatomic,readonly) long long preferredMinimumFreeBytes;                                                                                   //@synthesize preferredMinimumFreeBytes=_preferredMinimumFreeBytes - In the implementation block
@property (nonatomic,readonly) long long overriddenBackCaptureInterval;                                                                               //@synthesize overriddenBackCaptureInterval=_overriddenBackCaptureInterval - In the implementation block
@property (nonatomic,readonly) long long overriddenFrontCaptureInterval;                                                                              //@synthesize overriddenFrontCaptureInterval=_overriddenFrontCaptureInterval - In the implementation block
+(id)preferences;
+(BOOL)_fallBackToCameraDefaultsForBundleIdentifier:(id)arg1 ;
+(id)_defaultCaptureConfiguration;
+(long long)defaultFilterTypeForMode:(long long)arg1 ;
+(long long)defaultLightingTypeForMode:(long long)arg1 ;
-(NSUserDefaults *)_underlyingUserDefaults;
-(long long)videoConfiguration;
-(BOOL)shouldCaptureHDREV0;
-(long long)maxSupportedPhotoQualityPrioritizationForMode:(long long)arg1 ;
-(long long)ppt_readPortraitLightingType;
-(long long)photoEncodingBehavior;
-(long long)videoEncodingBehaviorForConfiguration:(long long)arg1 ;
-(BOOL)isLockAsShutterEnabled;
-(void)_setUnderlyingUserDefaults:(id)arg1 ;
-(id)filterTypesForMode:(long long)arg1 ;
-(long long)_sanitizeLightingType:(long long)arg1 forMode:(long long)arg2 ;
-(BOOL)shouldResetCaptureConfiguration;
-(long long)_sanitizeEffectFilterType:(long long)arg1 forMode:(long long)arg2 ;
-(long long)slomoConfiguration;
-(BOOL)shouldForceMonoAudioRecording;
-(BOOL)shouldUseModernHDRBehavior;
-(void)_setDidResetTorchMode:(BOOL)arg1 ;
-(long long)previewViewAspectMode;
-(CAMCaptureConfiguration *)captureConfiguration;
-(CAMConflictingControlConfiguration *)conflictingControlConfiguration;
-(long long)photoModeLastCapturedEffectFilterType;
-(long long)squareModeLastCapturedEffectFilterType;
-(long long)portraitModeLastCapturedEffectFilterType;
-(void)updateResetTimeoutDate;
-(double)_resetTimeoutOverride;
-(void)_setResetTimeoutDate:(id)arg1 ;
-(BOOL)QRBannersEnabledInSettings;
-(BOOL)forceEnableQRBanners;
-(BOOL)_preferHEVCWhenAvailable;
-(BOOL)_shouldDisableCameraSwitchingDuringVideoRecording;
-(BOOL)isPhotoOverCaptureEnabled;
-(BOOL)isVideoOverCaptureEnabled;
-(BOOL)readPreferencesWithOverrides:(id)arg1 emulationMode:(long long)arg2 callActive:(BOOL)arg3 ;
-(void)writePreferences;
-(BOOL)shouldShowQRBanners;
-(BOOL)shouldDisableCameraSwitchingDuringVideoRecordingForMode:(long long)arg1 ;
-(void)setDidAcknowledgePortraitModeDescription:(BOOL)arg1 ;
-(BOOL)usingMostCompatibleEncoding;
-(BOOL)didConfirmVideo4k60MostCompatible;
-(BOOL)didConfirmSlomo1080p240MostCompatible;
-(BOOL)isOverCaptureEnabledForCTMCaptureType:(long long)arg1 ;
-(void)setDidAcknowledgeCTMDescription:(BOOL)arg1 ;
-(BOOL)didResetTorchMode;
-(void)setCaptureConfiguration:(CAMCaptureConfiguration *)arg1 ;
-(void)setConflictingControlConfiguration:(CAMConflictingControlConfiguration *)arg1 ;
-(BOOL)shouldShowGridView;
-(void)setForceEnableQRBanners:(BOOL)arg1 ;
-(BOOL)didAcknowledgePortraitModeDescription;
-(BOOL)isAutoLowLightVideoEnabled;
-(BOOL)isAutoAdjustmentsEnabled;
-(BOOL)didAcknowledgeCTMDescription;
-(void)setPreviewViewAspectMode:(long long)arg1 ;
-(void)setPhotoModeLastCapturedEffectFilterType:(long long)arg1 ;
-(void)setSquareModeLastCapturedEffectFilterType:(long long)arg1 ;
-(void)setPortraitModeLastCapturedEffectFilterType:(long long)arg1 ;
-(NSDate *)resetTimeoutDate;
-(BOOL)preserveEffectFilter;
-(BOOL)preserveCaptureMode;
-(BOOL)preserveLivePhoto;
-(BOOL)shouldDelayRemotePersistence;
-(BOOL)burstFollowsEncoderSettings;
-(long long)preferredMinimumFreeBytes;
-(long long)overriddenBackCaptureInterval;
-(long long)overriddenFrontCaptureInterval;
@end

