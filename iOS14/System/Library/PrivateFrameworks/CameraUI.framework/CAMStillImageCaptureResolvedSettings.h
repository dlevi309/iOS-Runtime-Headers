/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


#import <CameraUI/CameraUI-Structs.h>
@interface CAMStillImageCaptureResolvedSettings : NSObject {

	BOOL _HDREnabled;
	BOOL _portraitEffectEnabled;
	BOOL _lowLightCaptureHasInitialPreviewFeedbackSensitivity;
	BOOL _lowLightCaptureHasConstantPreviewFeedbackSensitivity;
	BOOL _captureBeforeResolvingSettingsEnabled;
	double _lowLightCaptureTime;
	CGColorRef _lowLightPreviewColorEstimate;

}

@property (getter=isHDREnabled,nonatomic,readonly) BOOL HDREnabled;                                                                    //@synthesize HDREnabled=_HDREnabled - In the implementation block
@property (getter=isPortraitEffectEnabled,nonatomic,readonly) BOOL portraitEffectEnabled;                                              //@synthesize portraitEffectEnabled=_portraitEffectEnabled - In the implementation block
@property (nonatomic,readonly) double lowLightCaptureTime;                                                                             //@synthesize lowLightCaptureTime=_lowLightCaptureTime - In the implementation block
@property (nonatomic,readonly) CGColorRef lowLightPreviewColorEstimate;                                                                //@synthesize lowLightPreviewColorEstimate=_lowLightPreviewColorEstimate - In the implementation block
@property (nonatomic,readonly) BOOL lowLightCaptureHasInitialPreviewFeedbackSensitivity;                                               //@synthesize lowLightCaptureHasInitialPreviewFeedbackSensitivity=_lowLightCaptureHasInitialPreviewFeedbackSensitivity - In the implementation block
@property (nonatomic,readonly) BOOL lowLightCaptureHasConstantPreviewFeedbackSensitivity;                                              //@synthesize lowLightCaptureHasConstantPreviewFeedbackSensitivity=_lowLightCaptureHasConstantPreviewFeedbackSensitivity - In the implementation block
@property (getter=isCaptureBeforeResolvingSettingsEnabled,nonatomic,readonly) BOOL captureBeforeResolvingSettingsEnabled;              //@synthesize captureBeforeResolvingSettingsEnabled=_captureBeforeResolvingSettingsEnabled - In the implementation block
-(BOOL)isHDREnabled;
-(double)lowLightCaptureTime;
-(BOOL)lowLightCaptureHasConstantPreviewFeedbackSensitivity;
-(id)initWithHDREnabled:(BOOL)arg1 portraitEffectEnabled:(BOOL)arg2 lowLightCaptureTime:(double)arg3 lowLightPreviewColorEstimate:(CGColorRef)arg4 lowLightCaptureHasInitialPreviewFeedbackSensitivity:(BOOL)arg5 lowLightCaptureHasConstantPreviewFeedbackSensitivity:(BOOL)arg6 captureBeforeResolvingSettingsEnabled:(BOOL)arg7 ;
-(CGColorRef)lowLightPreviewColorEstimate;
-(BOOL)isCaptureBeforeResolvingSettingsEnabled;
-(BOOL)lowLightCaptureHasInitialPreviewFeedbackSensitivity;
-(BOOL)isPortraitEffectEnabled;
-(void)dealloc;
@end

