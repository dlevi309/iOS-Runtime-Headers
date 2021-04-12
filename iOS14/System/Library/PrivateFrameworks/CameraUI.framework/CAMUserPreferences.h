/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@class CAMCaptureConfiguration, CAMConflictingControlConfiguration, NSDate, NSUserDefaults;

@interface CAMUserPreferences : NSObject {

	BOOL _didResetTorchMode;
	BOOL _shouldShowGridView;
	BOOL _QRBannersEnabledInSettings;
	BOOL _forceEnableQRBanners;
	BOOL _responsiveShutterEnabled;
	BOOL _shouldCaptureHDREV0;
	BOOL _shouldUseModernHDRBehavior;
	BOOL _shouldMirrorFrontCameraCaptures;
	BOOL _shouldUseVolumeUpBurst;
	BOOL _shouldUseContentAwareDistortionCorrection;
	BOOL _didAcknowledgePortraitModeDescription;
	BOOL _videoConfigurationControlEnabled;
	BOOL _lowLightVideoEnabled;
	BOOL _shouldForceMonoAudioRecording;
	BOOL _HDR10BitVideoEnabled;
	BOOL _photoOverCaptureEnabled;
	BOOL _videoOverCaptureEnabled;
	BOOL _autoAdjustmentsEnabled;
	BOOL _didAcknowledgeCTMDescription;
	BOOL _overCapturePreviewEnabled;
	BOOL _semanticDevelopmentEnabled;
	BOOL _preserveEffectFilter;
	BOOL _preserveCaptureMode;
	BOOL _preserveLivePhoto;
	BOOL _preserveExposure;
	BOOL _lockAsShutterEnabled;
	BOOL _shouldDelayRemotePersistence;
	BOOL _burstFollowsEncoderSettings;
	BOOL __preferHEVCWhenAvailable;
	BOOL __shouldDisableCameraSwitchingDuringVideoRecording;
	CAMCaptureConfiguration* _captureConfiguration;
	CAMConflictingControlConfiguration* _conflictingControlConfiguration;
	long long _videoConfiguration;
	long long _slomoConfiguration;
	long long _VFRMode;
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
@property (nonatomic,readonly) BOOL responsiveShutterEnabled;                                                                                         //@synthesize responsiveShutterEnabled=_responsiveShutterEnabled - In the implementation block
@property (nonatomic,readonly) BOOL shouldCaptureHDREV0;                                                                                              //@synthesize shouldCaptureHDREV0=_shouldCaptureHDREV0 - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseModernHDRBehavior;                                                                                       //@synthesize shouldUseModernHDRBehavior=_shouldUseModernHDRBehavior - In the implementation block
@property (assign,nonatomic) BOOL shouldMirrorFrontCameraCaptures;                                                                                    //@synthesize shouldMirrorFrontCameraCaptures=_shouldMirrorFrontCameraCaptures - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseVolumeUpBurst;                                                                                           //@synthesize shouldUseVolumeUpBurst=_shouldUseVolumeUpBurst - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseContentAwareDistortionCorrection;                                                                        //@synthesize shouldUseContentAwareDistortionCorrection=_shouldUseContentAwareDistortionCorrection - In the implementation block
@property (assign,nonatomic) BOOL didAcknowledgePortraitModeDescription;                                                                              //@synthesize didAcknowledgePortraitModeDescription=_didAcknowledgePortraitModeDescription - In the implementation block
@property (nonatomic,readonly) BOOL usingMostCompatibleEncoding; 
@property (nonatomic,readonly) BOOL didConfirmVideo4k60MostCompatible; 
@property (nonatomic,readonly) BOOL didConfirmSlomo1080p240MostCompatible; 
@property (nonatomic,readonly) long long videoConfiguration;                                                                                          //@synthesize videoConfiguration=_videoConfiguration - In the implementation block
@property (nonatomic,readonly) long long slomoConfiguration;                                                                                          //@synthesize slomoConfiguration=_slomoConfiguration - In the implementation block
@property (getter=isVideoConfigurationControlEnabled,nonatomic,readonly) BOOL videoConfigurationControlEnabled;                                       //@synthesize videoConfigurationControlEnabled=_videoConfigurationControlEnabled - In the implementation block
@property (nonatomic,readonly) long long VFRMode;                                                                                                     //@synthesize VFRMode=_VFRMode - In the implementation block
@property (getter=isLowLightVideoEnabled,nonatomic,readonly) BOOL lowLightVideoEnabled;                                                               //@synthesize lowLightVideoEnabled=_lowLightVideoEnabled - In the implementation block
@property (nonatomic,readonly) BOOL shouldForceMonoAudioRecording;                                                                                    //@synthesize shouldForceMonoAudioRecording=_shouldForceMonoAudioRecording - In the implementation block
@property (nonatomic,readonly) BOOL HDR10BitVideoEnabled;                                                                                             //@synthesize HDR10BitVideoEnabled=_HDR10BitVideoEnabled - In the implementation block
@property (getter=isPhotoOverCaptureEnabled,nonatomic,readonly) BOOL photoOverCaptureEnabled;                                                         //@synthesize photoOverCaptureEnabled=_photoOverCaptureEnabled - In the implementation block
@property (getter=isVideoOverCaptureEnabled,nonatomic,readonly) BOOL videoOverCaptureEnabled;                                                         //@synthesize videoOverCaptureEnabled=_videoOverCaptureEnabled - In the implementation block
@property (getter=isAutoAdjustmentsEnabled,nonatomic,readonly) BOOL autoAdjustmentsEnabled;                                                           //@synthesize autoAdjustmentsEnabled=_autoAdjustmentsEnabled - In the implementation block
@property (assign,nonatomic) BOOL didAcknowledgeCTMDescription;                                                                                       //@synthesize didAcknowledgeCTMDescription=_didAcknowledgeCTMDescription - In the implementation block
@property (getter=isOverCapturePreviewEnabled,nonatomic,readonly) BOOL overCapturePreviewEnabled;                                                     //@synthesize overCapturePreviewEnabled=_overCapturePreviewEnabled - In the implementation block
@property (assign,nonatomic) long long previewViewAspectMode;                                                                                         //@synthesize previewViewAspectMode=_previewViewAspectMode - In the implementation block
@property (nonatomic,readonly) long long photoEncodingBehavior; 
@property (assign,nonatomic) long long photoModeLastCapturedEffectFilterType;                                                                         //@synthesize photoModeLastCapturedEffectFilterType=_photoModeLastCapturedEffectFilterType - In the implementation block
@property (assign,nonatomic) long long squareModeLastCapturedEffectFilterType;                                                                        //@synthesize squareModeLastCapturedEffectFilterType=_squareModeLastCapturedEffectFilterType - In the implementation block
@property (assign,nonatomic) long long portraitModeLastCapturedEffectFilterType;                                                                      //@synthesize portraitModeLastCapturedEffectFilterType=_portraitModeLastCapturedEffectFilterType - In the implementation block
@property (nonatomic,readonly) BOOL semanticDevelopmentEnabled;                                                                                       //@synthesize semanticDevelopmentEnabled=_semanticDevelopmentEnabled - In the implementation block
@property (nonatomic,readonly) BOOL preserveEffectFilter;                                                                                             //@synthesize preserveEffectFilter=_preserveEffectFilter - In the implementation block
@property (nonatomic,readonly) BOOL preserveCaptureMode;                                                                                              //@synthesize preserveCaptureMode=_preserveCaptureMode - In the implementation block
@property (nonatomic,readonly) BOOL preserveLivePhoto;                                                                                                //@synthesize preserveLivePhoto=_preserveLivePhoto - In the implementation block
@property (nonatomic,readonly) BOOL preserveExposure;                                                                                                 //@synthesize preserveExposure=_preserveExposure - In the implementation block
@property (getter=isLockAsShutterEnabled,nonatomic,readonly) BOOL lockAsShutterEnabled;                                                               //@synthesize lockAsShutterEnabled=_lockAsShutterEnabled - In the implementation block
@property (nonatomic,readonly) BOOL shouldDelayRemotePersistence;                                                                                     //@synthesize shouldDelayRemotePersistence=_shouldDelayRemotePersistence - In the implementation block
@property (nonatomic,readonly) BOOL burstFollowsEncoderSettings;                                                                                      //@synthesize burstFollowsEncoderSettings=_burstFollowsEncoderSettings - In the implementation block
@property (nonatomic,readonly) long long preferredMinimumFreeBytes;                                                                                   //@synthesize preferredMinimumFreeBytes=_preferredMinimumFreeBytes - In the implementation block
@property (nonatomic,readonly) long long overriddenBackCaptureInterval;                                                                               //@synthesize overriddenBackCaptureInterval=_overriddenBackCaptureInterval - In the implementation block
@property (nonatomic,readonly) long long overriddenFrontCaptureInterval;                                                                              //@synthesize overriddenFrontCaptureInterval=_overriddenFrontCaptureInterval - In the implementation block
+(long long)defaultLightingTypeForMode:(long long)arg1 ;
+(id)defaultCaptureConfiguration;
+(id)preferences;
+(void)performResponsiveShutterMigration;
+(void)performLowLightVideoMigration;
+(id)_defaultExposureBiasesByMode;
+(BOOL)_fallBackToCameraDefaultsForBundleIdentifier:(id)arg1 ;
+(long long)defaultFilterTypeForMode:(long long)arg1 ;
+(BOOL)shouldEnableHDR10BitVideoForHEVCEnabled:(BOOL)arg1 capabilities:(id)arg2 ;
-(BOOL)responsiveShutterEnabled;
-(void)setForceEnableQRBanners:(BOOL)arg1 ;
-(BOOL)shouldMirrorFrontCameraCaptures;
-(double)_resetTimeoutOverride;
-(BOOL)shouldResetCaptureConfiguration;
-(BOOL)isAutoFPSVideoEnabledForMode:(long long)arg1 device:(long long)arg2 videoConfiguration:(long long)arg3 encodingBehavior:(long long)arg4 ;
-(BOOL)didAcknowledgePortraitModeDescription;
-(BOOL)isLowLightVideoEnabled;
-(BOOL)preserveExposure;
-(BOOL)isPhotoOverCaptureEnabled;
-(BOOL)didConfirmSlomo1080p240MostCompatible;
-(BOOL)HDR10BitVideoEnabled;
-(BOOL)isVideoOverCaptureEnabled;
-(BOOL)shouldUseModernHDRBehavior;
-(BOOL)burstFollowsEncoderSettings;
-(BOOL)shouldCaptureHDREV0;
-(id)filterTypesForMode:(long long)arg1 ;
-(BOOL)isVideoConfigurationControlEnabled;
-(BOOL)preserveLivePhoto;
-(CAMConflictingControlConfiguration *)conflictingControlConfiguration;
-(void)setShouldMirrorFrontCameraCaptures:(BOOL)arg1 ;
-(long long)photoModeLastCapturedEffectFilterType;
-(void)setDidAcknowledgeCTMDescription:(BOOL)arg1 ;
-(BOOL)shouldDelayRemotePersistence;
-(long long)videoEncodingBehaviorForConfiguration:(long long)arg1 wantsHDR10BitVideo:(BOOL)arg2 ;
-(BOOL)isAutoAdjustmentsEnabled;
-(BOOL)QRBannersEnabledInSettings;
-(long long)videoConfiguration;
-(long long)portraitModeLastCapturedEffectFilterType;
-(void)setConflictingControlConfiguration:(CAMConflictingControlConfiguration *)arg1 ;
-(BOOL)preserveCaptureMode;
-(void)setPhotoModeLastCapturedEffectFilterType:(long long)arg1 ;
-(BOOL)didConfirmVideo4k60MostCompatible;
-(long long)ppt_readPortraitLightingType;
-(long long)overriddenBackCaptureInterval;
-(CAMCaptureConfiguration *)captureConfiguration;
-(long long)_sanitizeEffectFilterType:(long long)arg1 forMode:(long long)arg2 ;
-(BOOL)readPreferencesWithOverrides:(id)arg1 emulationMode:(long long)arg2 callActive:(BOOL)arg3 ;
-(long long)_sanitizeLightingType:(long long)arg1 forMode:(long long)arg2 ;
-(BOOL)_shouldDisableCameraSwitchingDuringVideoRecording;
-(NSUserDefaults *)_underlyingUserDefaults;
-(void)_setDidResetTorchMode:(BOOL)arg1 ;
-(void)setPortraitModeLastCapturedEffectFilterType:(long long)arg1 ;
-(long long)maxSupportedPhotoQualityPrioritizationForMode:(long long)arg1 ;
-(BOOL)shouldUseVolumeUpBurst;
-(void)setDidAcknowledgePortraitModeDescription:(BOOL)arg1 ;
-(BOOL)forceEnableQRBanners;
-(long long)preferredMinimumFreeBytes;
-(void)_setResetTimeoutDate:(id)arg1 ;
-(long long)VFRMode;
-(BOOL)shouldForceMonoAudioRecording;
-(void)_setUnderlyingUserDefaults:(id)arg1 ;
-(BOOL)shouldUseContentAwareDistortionCorrection;
-(BOOL)semanticDevelopmentEnabled;
-(BOOL)usingMostCompatibleEncoding;
-(BOOL)preserveEffectFilter;
-(void)setSquareModeLastCapturedEffectFilterType:(long long)arg1 ;
-(long long)squareModeLastCapturedEffectFilterType;
-(BOOL)shouldShowGridView;
-(BOOL)isOverCapturePreviewEnabled;
-(BOOL)shouldShowQRBanners;
-(long long)photoEncodingBehavior;
-(long long)overriddenFrontCaptureInterval;
-(void)setPreviewViewAspectMode:(long long)arg1 ;
-(BOOL)didAcknowledgeCTMDescription;
-(BOOL)isOverCaptureEnabledForCTMCaptureType:(long long)arg1 ;
-(void)setCaptureConfiguration:(CAMCaptureConfiguration *)arg1 ;
-(NSDate *)resetTimeoutDate;
-(BOOL)shouldDisableCameraSwitchingDuringVideoRecordingForMode:(long long)arg1 ;
-(BOOL)_preferHEVCWhenAvailable;
-(BOOL)didResetTorchMode;
-(void)writePreferences;
-(void)_publishAnalyticsIfNeeded;
-(void)updateResetTimeoutDate;
-(BOOL)isLockAsShutterEnabled;
-(long long)previewViewAspectMode;
-(long long)slomoConfiguration;
-(BOOL)mirrorCameraCapturesForDevicePosition:(long long)arg1 mode:(long long)arg2 ;
@end

