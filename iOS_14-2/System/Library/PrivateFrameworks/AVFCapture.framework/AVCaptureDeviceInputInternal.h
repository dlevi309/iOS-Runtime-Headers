/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


@protocol AVCallbackCancellation;
#import <AVFCapture/AVFCapture-Structs.h>
@class AVCaptureDevice, NSArray, AVWeakReference;

@interface AVCaptureDeviceInputInternal : NSObject {

	AVCaptureDevice* device;
	NSArray* ports;
	NSArray* multiCamPorts;
	BOOL unifiedAutoExposureDefaultsEnabled;
	BOOL builtInMicrophoneStereoAudioCaptureEnabled;
	BOOL visionDataDeliveryEnabled;
	BOOL cameraCalibrationDataDeliveryEnabled;
	float simulatedAperture;
	SCD_Struct_AV0 videoMinFrameDurationOverride;
	float maxGainOverride;
	BOOL ready;
	float portraitLightingEffectStrength;
	AVWeakReference* weakReference;
	id<AVCallbackCancellation> deviceOpenCallbackInvoker;

}
-(void)dealloc;
@end

