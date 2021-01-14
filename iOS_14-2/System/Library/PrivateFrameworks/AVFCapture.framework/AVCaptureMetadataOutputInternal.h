/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVCaptureDataOutputDelegateCallbackHelper, AVWeakReference, NSArray;

@interface AVCaptureMetadataOutputInternal : NSObject {

	AVCaptureDataOutputDelegateCallbackHelper* delegateCallbackHelper;
	AVWeakReference* weakReference;
	NSArray* metadataObjectTypes;
	CGRect rectOfInterest;
	BOOL faceTrackingMetadataObjectTypesAvailable;
	long long faceTrackingMaxFaces;
	BOOL faceTrackingUsesFaceRecognition;
	BOOL videoPreviewHistogramMetadataObjectTypesAvailable;
	BOOL offlineVideoStabilizationMotionMetadataObjectTypesAvailable;

}
-(id)init;
-(void)dealloc;
@end

