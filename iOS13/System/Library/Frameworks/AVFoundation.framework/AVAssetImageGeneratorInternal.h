/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, AVAsset, NSString, NSMutableArray, NSObject, AVVideoComposition, AVCustomVideoCompositorSession;

@interface AVAssetImageGeneratorInternal : NSObject {

	AVWeakReference* weakReference;
	OpaqueFigAssetImageGeneratorRef generator;
	AVAsset* asset;
	BOOL appliesPreferredTrackTransform;
	CGSize maximumSize;
	NSString* apertureMode;
	SCD_Struct_AV7 requestedTimeToleranceBefore;
	SCD_Struct_AV7 requestedTimeToleranceAfter;
	NSMutableArray* requests;
	NSObject*<OS_dispatch_queue> requestsQueue;
	int nextRequestID;
	AVVideoComposition* videoComposition;
	AVCustomVideoCompositorSession* customVideoCompositorSession;
	NSObject*<OS_dispatch_queue> imageRequestQueue;
	int cancelledRequestIDThreshold;
	NSObject*<OS_dispatch_queue> generateImagesAsyncQueue;

}
@end

