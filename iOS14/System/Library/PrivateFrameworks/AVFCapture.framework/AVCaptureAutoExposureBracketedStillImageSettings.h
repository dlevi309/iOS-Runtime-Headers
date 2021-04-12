/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/

#import <AVFCapture/AVCaptureBracketedStillImageSettings.h>

@interface AVCaptureAutoExposureBracketedStillImageSettings : AVCaptureBracketedStillImageSettings {

	float _exposureTargetBias;

}

@property (readonly) float exposureTargetBias;              //@synthesize exposureTargetBias=_exposureTargetBias - In the implementation block
+(void)initialize;
+(id)autoExposureSettingsWithExposureTargetBias:(float)arg1 ;
-(float)exposureTargetBias;
-(id)debugDescription;
-(id)_initAutoExposureSettingsWithExposureTargetBias:(float)arg1 ;
-(id)description;
@end

