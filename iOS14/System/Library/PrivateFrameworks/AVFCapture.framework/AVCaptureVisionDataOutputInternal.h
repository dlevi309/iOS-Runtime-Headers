/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVCaptureDataOutputDelegateCallbackHelper, AVWeakReference;

@interface AVCaptureVisionDataOutputInternal : NSObject {

	AVCaptureDataOutputDelegateCallbackHelper* delegateCallbackHelper;
	AVWeakReference* weakReference;
	SCD_Struct_AV0 minFrameDuration;
	SCD_Struct_AV0 minBurstFrameDuration;
	SCD_Struct_AV0 maxBurstDuration;
	unsigned long long gaussianPyramidOctavesCount;
	float gaussianPyramidBaseOctaveDownscalingFactor;
	unsigned long long maxKeypointsCount;
	BOOL featureBinningEnabled;
	BOOL featureOrientationAssignmentEnabled;
	float keypointDetectionThreshold;

}
-(id)init;
-(void)dealloc;
@end

