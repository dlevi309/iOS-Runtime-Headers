/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol OS_dispatch_queue, AVAssetWriterFinishWritingDelegate;
@class AVWeakReference, AVAssetWriterHelper, NSObject, AVKeyPathDependencyManager;

@interface AVAssetWriterInternal : NSObject {

	AVWeakReference* weakReference;
	AVAssetWriterHelper* helper;
	NSObject*<OS_dispatch_queue> helperReadWriteQueue;
	AVKeyPathDependencyManager* keyPathDependencyManager;
	id<AVAssetWriterFinishWritingDelegate> finishWritingDelegate;

}
@end

