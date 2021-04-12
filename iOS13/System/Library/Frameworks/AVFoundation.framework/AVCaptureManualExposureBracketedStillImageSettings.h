/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureBracketedStillImageSettings.h>

@interface AVCaptureManualExposureBracketedStillImageSettings : AVCaptureBracketedStillImageSettings {

	SCD_Struct_AV7 _exposureDuration;
	float _ISO;

}

@property (readonly) SCD_Struct_AV7 exposureDuration;              //@synthesize exposureDuration=_exposureDuration - In the implementation block
@property (readonly) float ISO;                                    //@synthesize ISO=_ISO - In the implementation block
+(id)manualExposureSettingsWithExposureDuration:(SCD_Struct_AV7)arg1 ISO:(float)arg2 ;
-(id)description;
-(id)debugDescription;
-(SCD_Struct_AV7)exposureDuration;
-(float)ISO;
-(id)_initManualExposureSettingsWithExposureDuration:(SCD_Struct_AV7)arg1 ISO:(float)arg2 ;
@end

