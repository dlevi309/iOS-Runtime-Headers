/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class CALayer, NSError, NSString, AVMediaDataRequester, NSObject, AVWeakReference, NSMutableArray;

@interface AVSampleBufferDisplayLayerInternal : NSObject {

	CALayer* contentLayer;
	OpaqueFigVideoQueueRef videoQueue;
	BOOL outputObscured;
	long long status;
	NSError* error;
	NSString* videoGravity;
	CGSize presentationSize;
	CGRect bounds;
	BOOL preventsDisplaySleepDuringVideoPlayback;
	BOOL isRequestingMediaData;
	AVMediaDataRequester* mediaDataRequester;
	BOOL aboveHighWaterLevel;
	NSObject*<OS_dispatch_queue> serialQueue;
	AVWeakReference* weakReferenceToSelf;
	AVWeakReference* weakReferenceToSynchronizer;
	BOOL addedToSynchronizer;
	BOOL controlTimebaseSetByUserIsInUse;
	OpaqueCMTimebaseRef controlTimebaseSetByUser;
	OpaqueCMTimebaseRef readOnlyVideoQueueTimebase;
	OpaqueCMTimebaseRef readOnlyRenderingTimebase;
	NSObject*<OS_dispatch_queue> flushCallbackListQueue;
	NSObject*<OS_dispatch_queue> flushCallbackQueue;
	NSMutableArray* flushCallbacks;
	NSObject*<OS_dispatch_queue> queueForProtectingPrerollCompleteCallback;
	/*^block*/id pendingPrerollCompleteCallback;
	int pendingPrerollRequestID;
	NSObject*<OS_dispatch_queue> queueForCallingPrerollCompleteCallback;
	int upcomingPTSExpectation;
	SCD_Struct_AV7 minimumUpcomingPTS;

}
@end

