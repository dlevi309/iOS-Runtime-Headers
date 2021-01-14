/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
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

