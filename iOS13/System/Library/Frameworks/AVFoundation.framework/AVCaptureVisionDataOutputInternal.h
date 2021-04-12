/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureDataOutputDelegateCallbackHelper, AVWeakReference;

@interface AVCaptureVisionDataOutputInternal : NSObject {

	AVCaptureDataOutputDelegateCallbackHelper* delegateCallbackHelper;
	AVWeakReference* weakReference;
	SCD_Struct_AV7 minFrameDuration;
	SCD_Struct_AV7 minBurstFrameDuration;
	SCD_Struct_AV7 maxBurstDuration;
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

