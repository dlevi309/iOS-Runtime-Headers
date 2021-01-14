/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/


@protocol NAScheduler;
#import <Sleep/Sleep-Structs.h>
@class NSMapTable;

@interface HKSPObserverSet : NSObject {

	os_unfair_lock_s _observersLock;
	id<NAScheduler> _callbackScheduler;
	NSMapTable* _observerRecords;

}

@property (nonatomic,readonly) id<NAScheduler> callbackScheduler;              //@synthesize callbackScheduler=_callbackScheduler - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s observersLock;                 //@synthesize observersLock=_observersLock - In the implementation block
@property (nonatomic,readonly) NSMapTable * observerRecords;                   //@synthesize observerRecords=_observerRecords - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
-(void)removeAllObservers;
-(void)addObserver:(id)arg1 ;
-(id)init;
-(id)initWithCallbackScheduler:(id)arg1 ;
-(void)_withLock:(/*^block*/id)arg1 ;
-(void)enumerateObserversWithBlock:(/*^block*/id)arg1 ;
-(os_unfair_lock_s)observersLock;
-(unsigned long long)count;
-(id)enumerateObserversWithFutureBlock:(/*^block*/id)arg1 ;
-(NSMapTable *)observerRecords;
-(id<NAScheduler>)callbackScheduler;
-(void)addObserver:(id)arg1 callbackScheduler:(id)arg2 wasFirst:(BOOL*)arg3 ;
-(id)description;
-(void)addObserver:(id)arg1 callbackScheduler:(id)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 wasLast:(BOOL*)arg2 ;
-(void)addObserver:(id)arg1 wasFirst:(BOOL*)arg2 ;
-(BOOL)containsObserver:(id)arg1 ;
@end

