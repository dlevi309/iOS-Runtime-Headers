/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


#import <AVFCapture/AVFCapture-Structs.h>
@interface AVCaptureSynchronizedSampleBufferDataInternal : NSObject {

	opaqueCMSampleBufferRef sampleBuffer;
	BOOL sampleBufferWasDropped;
	long long droppedReason;
	BOOL hasCorrespondingDepthData;
	BOOL hasCorrespondingVisionData;
	int constituentDeviceCaptureID;

}
@end

