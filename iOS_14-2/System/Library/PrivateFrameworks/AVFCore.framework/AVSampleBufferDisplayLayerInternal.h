/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@protocol OS_dispatch_queue;
#import <AVFCore/AVFCore-Structs.h>
@class CALayer, NSError, NSString, AVMediaDataRequester, NSObject, AVWeakReference, AVSampleBufferVideoOutput, NSMutableArray;

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
	BOOL requiresFlushToResumeDecoding;
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
	AVSampleBufferVideoOutput* videoOutput;
	NSObject*<OS_dispatch_queue> flushCallbackListQueue;
	NSObject*<OS_dispatch_queue> flushCallbackQueue;
	NSMutableArray* flushCallbacks;
	NSObject*<OS_dispatch_queue> queueForProtectingPrerollCompleteCallback;
	/*^block*/id pendingPrerollCompleteCallback;
	int pendingPrerollRequestID;
	NSObject*<OS_dispatch_queue> queueForCallingPrerollCompleteCallback;
	int upcomingPTSExpectation;
	SCD_Struct_AV6 minimumUpcomingPTS;
	id didFinishSuspensionNotificationToken;
	NSString* STSLabel;
	CALayer* STSLayer;

}
@end

