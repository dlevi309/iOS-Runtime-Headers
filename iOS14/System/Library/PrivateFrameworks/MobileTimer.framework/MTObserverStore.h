/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@protocol NAScheduler;
#import <MobileTimer/MobileTimer-Structs.h>
@class NSHashTable;

@interface MTObserverStore : NSObject {

	os_unfair_lock_s _observersLock;
	id<NAScheduler> _callbackScheduler;
	NSHashTable* _observers;

}

@property (nonatomic,retain) id<NAScheduler> callbackScheduler;              //@synthesize callbackScheduler=_callbackScheduler - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s observersLock;                 //@synthesize observersLock=_observersLock - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                        //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
-(void)addObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(id)init;
-(id)initWithCallbackScheduler:(id)arg1 ;
-(void)_withLock:(/*^block*/id)arg1 ;
-(void)enumerateObserversWithBlock:(/*^block*/id)arg1 ;
-(os_unfair_lock_s)observersLock;
-(void)setCallbackScheduler:(id<NAScheduler>)arg1 ;
-(unsigned long long)count;
-(void)setObserversLock:(os_unfair_lock_s)arg1 ;
-(id<NAScheduler>)callbackScheduler;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 wasLast:(BOOL*)arg2 ;
-(void)addObserver:(id)arg1 wasFirst:(BOOL*)arg2 ;
-(BOOL)containsObserver:(id)arg1 ;
@end

