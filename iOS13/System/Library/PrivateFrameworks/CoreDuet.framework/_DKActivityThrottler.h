/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (nonatomic,retain) id<_DKSimpleKeyValueStore> store;              //@synthesize store=_store - In the implementation block
-(id)description;
-(id)initWithStore:(id)arg1 ;
-(id<_DKSimpleKeyValueStore>)store;
-(id)dateForKey:(id)arg1 ;
-(void)setDate:(id)arg1 forKey:(id)arg2 ;
-(void)setStore:(id<_DKSimpleKeyValueStore>)arg1 ;
-(void)_performNoMoreOftenInSecondsThan:(double)arg1 name:(id)arg2 activityBlock:(/*^block*/id)arg3 throttleBlock:(/*^block*/id)arg4 ;
-(void)_performOrScheduleWithTimeInterval:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(/*^block*/id)arg4 callDepth:(unsigned long long)arg5 ;
-(void)_performWithDelayInSecondsOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(/*^block*/id)arg4 ;
-(void)clearHistoryForName:(id)arg1 ;
-(id)keyForName:(id)arg1 ;
-(BOOL)_minimumIntervalScheduledActionsContainsActionName:(id)arg1 ;
-(void)_minimumIntervalScheduledActionsAddActionName:(id)arg1 ;
-(void)_minimumIntervalScheduledActionsRemoveActionName:(id)arg1 ;
-(void)clearDateForKey:(id)arg1 ;
@end

