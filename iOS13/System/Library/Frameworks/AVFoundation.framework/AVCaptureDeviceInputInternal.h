/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol AVCallbackCancellation;
#import <AVFoundation/AVFoundation-Structs.h>
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
	SCD_Struct_AV7 videoMinFrameDurationOverride;
	float maxGainOverride;
	BOOL ready;
	float portraitLightingEffectStrength;
	AVWeakReference* weakReference;
	id<AVCallbackCancellation> deviceOpenCallbackInvoker;

}
-(void)dealloc;
@end

