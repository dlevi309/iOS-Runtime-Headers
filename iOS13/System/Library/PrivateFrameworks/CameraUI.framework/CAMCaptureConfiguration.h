/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@interface CAMCaptureConfiguration : NSObject {

	BOOL _photoBooth;
	long long _mode;
	long long _device;
	long long _videoConfiguration;
	long long _audioConfiguration;
	long long _flashMode;
	long long _torchMode;
	long long _HDRMode;
	long long _timerDuration;
	long long _irisMode;
	long long _photoModeAspectRatioCrop;
	long long _photoModeEffectFilterType;
	long long _squareModeEffectFilterType;
	long long _portraitModeEffectFilterType;
	long long _portraitModeLightingEffectType;
	double _portraitModeApertureValue;
	double _portraitModeIntensityValue;

}

@property (nonatomic,readonly) long long mode;                                        //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) long long device;                                      //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) long long videoConfiguration;                          //@synthesize videoConfiguration=_videoConfiguration - In the implementation block
@property (nonatomic,readonly) long long audioConfiguration;                          //@synthesize audioConfiguration=_audioConfiguration - In the implementation block
@property (nonatomic,readonly) long long flashMode;                                   //@synthesize flashMode=_flashMode - In the implementation block
@property (nonatomic,readonly) long long torchMode;                                   //@synthesize torchMode=_torchMode - In the implementation block
@property (nonatomic,readonly) long long HDRMode;                                     //@synthesize HDRMode=_HDRMode - In the implementation block
@property (nonatomic,readonly) long long timerDuration;                               //@synthesize timerDuration=_timerDuration - In the implementation block
@property (nonatomic,readonly) long long irisMode;                                    //@synthesize irisMode=_irisMode - In the implementation block
@property (nonatomic,readonly) long long photoModeAspectRatioCrop;                    //@synthesize photoModeAspectRatioCrop=_photoModeAspectRatioCrop - In the implementation block
@property (nonatomic,readonly) long long photoModeEffectFilterType;                   //@synthesize photoModeEffectFilterType=_photoModeEffectFilterType - In the implementation block
@property (nonatomic,readonly) long long squareModeEffectFilterType;                  //@synthesize squareModeEffectFilterType=_squareModeEffectFilterType - In the implementation block
@property (nonatomic,readonly) long long portraitModeEffectFilterType;                //@synthesize portraitModeEffectFilterType=_portraitModeEffectFilterType - In the implementation block
@property (nonatomic,readonly) long long portraitModeLightingEffectType;              //@synthesize portraitModeLightingEffectType=_portraitModeLightingEffectType - In the implementation block
@property (nonatomic,readonly) double portraitModeApertureValue;                      //@synthesize portraitModeApertureValue=_portraitModeApertureValue - In the implementation block
@property (nonatomic,readonly) double portraitModeIntensityValue;                     //@synthesize portraitModeIntensityValue=_portraitModeIntensityValue - In the implementation block
@property (getter=isPhotoBooth,nonatomic,readonly) BOOL photoBooth;                   //@synthesize photoBooth=_photoBooth - In the implementation block
+(long long)audioConfigurationForMode:(long long)arg1 device:(long long)arg2 emulationMode:(long long)arg3 duringCall:(BOOL)arg4 forceMonoAudioRecording:(BOOL)arg5 ;
+(id)captureGraphConfigurationUsingConfiguration:(id)arg1 ;
+(id)configuration:(id)arg1 withDevice:(long long)arg2 ;
+(id)tinyConfigurationForConfiguration:(id)arg1 preserveFilters:(BOOL)arg2 ;
+(long long)sanitizeVideoConfigurationForDesiredConfiguration:(long long)arg1 mode:(long long)arg2 device:(long long)arg3 ;
+(long long)_fallbackVideoConfigurationForUnsupportedConfiguration:(long long)arg1 ;
-(long long)mode;
-(id)initWithConfiguration:(id)arg1 ;
-(long long)device;
-(long long)HDRMode;
-(long long)flashMode;
-(long long)torchMode;
-(id)_previewFilters;
-(long long)audioConfiguration;
-(long long)videoConfiguration;
-(long long)timerDuration;
-(long long)photoModeAspectRatioCrop;
-(long long)photoModeEffectFilterType;
-(long long)squareModeEffectFilterType;
-(long long)portraitModeEffectFilterType;
-(long long)portraitModeLightingEffectType;
-(double)portraitModeApertureValue;
-(double)portraitModeIntensityValue;
-(long long)irisMode;
-(id)initWithCaptureMode:(long long)arg1 captureDevice:(long long)arg2 videoConfiguration:(long long)arg3 audioConfiguration:(long long)arg4 flashMode:(long long)arg5 torchMode:(long long)arg6 HDRMode:(long long)arg7 irisMode:(long long)arg8 timerDuration:(long long)arg9 photoModeAspectRatioCrop:(long long)arg10 photoModeEffectFilterType:(long long)arg11 squareModeEffectFilterType:(long long)arg12 portraitModeEffectFilterType:(long long)arg13 portraitModeLightingEffectType:(long long)arg14 portraitModeApertureValue:(double)arg15 portraitModeIntensityValue:(double)arg16 ;
-(BOOL)isPhotoBooth;
-(id)initForPhotoBoothWithCaptureDevice:(long long)arg1 ;
@end

