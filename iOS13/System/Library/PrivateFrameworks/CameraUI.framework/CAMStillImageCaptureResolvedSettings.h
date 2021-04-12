/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@interface CAMStillImageCaptureResolvedSettings : NSObject {

	BOOL _HDREnabled;
	BOOL _portraitEffectEnabled;
	double _lowLightCaptureTime;

}

@property (getter=isHDREnabled,nonatomic,readonly) BOOL HDREnabled;                                    //@synthesize HDREnabled=_HDREnabled - In the implementation block
@property (getter=isPortraitEffectEnabled,nonatomic,readonly) BOOL portraitEffectEnabled;              //@synthesize portraitEffectEnabled=_portraitEffectEnabled - In the implementation block
@property (nonatomic,readonly) double lowLightCaptureTime;                                             //@synthesize lowLightCaptureTime=_lowLightCaptureTime - In the implementation block
-(BOOL)isHDREnabled;
-(id)initWithHDREnabled:(BOOL)arg1 portraitEffectEnabled:(BOOL)arg2 lowLightCaptureTime:(double)arg3 ;
-(BOOL)isPortraitEffectEnabled;
-(double)lowLightCaptureTime;
@end

