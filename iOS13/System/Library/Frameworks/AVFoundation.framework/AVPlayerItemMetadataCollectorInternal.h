/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol OS_dispatch_queue;
@class AVWeakReferencingDelegateStorage, NSObject, NSArray, NSDate, AVWeakReference;

@interface AVPlayerItemMetadataCollectorInternal : NSObject {

	AVWeakReferencingDelegateStorage* delegateStorage;
	NSObject*<OS_dispatch_queue> ivarAccessQueue;
	NSArray* identifiers;
	NSArray* classifyingLabels;
	NSDate* mostRecentlyModifiedMetadataGroupTimestamp;
	AVWeakReference* weakReferenceToPlayerItem;

}
@end

