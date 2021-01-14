/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@protocol OS_dispatch_queue, _DKSimpleKeyValueStore;
@class NSCountedSet, NSCache, NSObject;

@interface _DKActivityThrottler : NSObject {

	NSCountedSet* _minimumIntervalScheduledActions;
	NSCountedSet* _delayScheduledActions;
	NSCache* _cache;
	NSObject*<OS_dispatch_queue> _storeQueue;
	id<_DKSimpleKeyValueStore> _store;

}
-(id)description;
@end

