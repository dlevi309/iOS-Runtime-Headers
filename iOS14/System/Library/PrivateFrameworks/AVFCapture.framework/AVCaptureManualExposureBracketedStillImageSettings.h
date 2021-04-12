/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureBracketedStillImageSettings.h>

@interface AVCaptureManualExposureBracketedStillImageSettings : AVCaptureBracketedStillImageSettings {

	SCD_Struct_AV0 _exposureDuration;
	float _ISO;

}

@property (readonly) SCD_Struct_AV0 exposureDuration;              //@synthesize exposureDuration=_exposureDuration - In the implementation block
@property (readonly) float ISO;                                    //@synthesize ISO=_ISO - In the implementation block
+(void)initialize;
+(id)manualExposureSettingsWithExposureDuration:(SCD_Struct_AV0)arg1 ISO:(float)arg2 ;
-(id)debugDescription;
-(SCD_Struct_AV0)exposureDuration;
-(id)_initManualExposureSettingsWithExposureDuration:(SCD_Struct_AV0)arg1 ISO:(float)arg2 ;
-(id)description;
-(float)ISO;
@end

