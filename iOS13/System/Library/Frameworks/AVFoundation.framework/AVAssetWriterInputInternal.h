/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol OS_dispatch_queue;
@class AVWeakReference, AVAssetWriterInputHelper, NSObject, AVKeyPathDependencyManager, AVAssetWriterInputPassDescriptionResponder;

@interface AVAssetWriterInputInternal : NSObject {

	AVWeakReference* weakReference;
	AVAssetWriterInputHelper* helper;
	NSObject*<OS_dispatch_queue> helperQueue;
	AVWeakReference* weakReferenceToAttachedAdaptor;
	AVWeakReference* weakReferenceToAssetWriter;
	AVKeyPathDependencyManager* keyPathDependencyManager;
	long long numberOfAppendFailures;
	BOOL markAsFinishedCalled;
	NSObject*<OS_dispatch_queue> appendFailureReadWriteQueue;
	AVAssetWriterInputPassDescriptionResponder* passDescriptionResponder;

}
@end

