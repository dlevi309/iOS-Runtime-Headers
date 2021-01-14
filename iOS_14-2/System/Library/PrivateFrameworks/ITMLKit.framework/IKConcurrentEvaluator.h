/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSMutableArray, NSMutableDictionary, NSObject;

@interface IKConcurrentEvaluator : NSObject {

	NSMutableArray* _orderedKeys;
	NSMutableDictionary* _fetchers;
	NSMutableDictionary* _getters;
	long long _activeFetchCount;
	long long _numberOfSchedulingLocksAcquired;
	NSObject*<OS_dispatch_semaphore> _schedulingLock;
	NSObject*<OS_dispatch_queue> _queue;
	long long _concurrencyCount;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) long long concurrencyCount;                      //@synthesize concurrencyCount=_concurrencyCount - In the implementation block
+(id)idleEvaluator;
-(id)initWithQueue:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithQueue:(id)arg1 concurrencyCount:(long long)arg2 ;
-(void)_insertFetcher:(/*^block*/id)arg1 getter:(/*^block*/id)arg2 forKey:(id)arg3 ;
-(void)_scheduleFetchRelayed:(BOOL)arg1 ;
-(/*^block*/id)_getterForKey:(id)arg1 ;
-(/*^block*/id)_removeFetcherForKey:(id)arg1 ;
-(long long)concurrencyCount;
-(void)addEvaluationBlock:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(void)lockSchedulingForEvaluation:(/*^block*/id)arg1 ;
@end

