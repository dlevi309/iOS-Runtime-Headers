/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <HealthDaemon/HealthDaemon-Structs.h>
@class NSObject, NSMutableDictionary;

@interface HDAssertionManager : NSObject {

	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSMutableDictionary* _assertionRecordsByIdentifier;
	NSMutableDictionary* _observerSetsByAssertionIdentifier;
	BOOL _invalidated;
	BOOL _consumeBudgets;
	NSObject*<OS_dispatch_source> _budgetConsumptionTimer;
	NSObject*<OS_dispatch_queue> _assertionExpirationQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> assertionExpirationQueue;              //@synthesize assertionExpirationQueue=_assertionExpirationQueue - In the implementation block
-(NSObject*<OS_dispatch_queue>)assertionExpirationQueue;
-(void)_lock_consumeBudgetsThenResetTimerWithIntermediateBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)resumeBudgetConsumption;
-(void)_lock_consumeBudgetsThroughTime:(double)arg1 ;
-(BOOL)hasActiveAssertionForIdentifier:(id)arg1 ;
-(void)removeObserver:(id)arg1 forAssertionIdentifier:(id)arg2 ;
-(void)_lock_resumeBudgetConsumption;
-(void)_budgetConsumptionTimerDidFire;
-(void)removeObserver:(id)arg1 ;
-(void)_lock_setBudgetConsumptionTimerWithStartTime:(double)arg1 ;
-(id)activeAssertionsForIdentifier:(id)arg1 ;
-(id)ownerIdentifiersForAssertionIdentifier:(id)arg1 ;
-(void)_postNotification:(id)arg1 forAssertion:(id)arg2 ;
-(void)invalidate;
-(BOOL)takeAssertion:(id)arg1 ;
-(void)suspendBudgetConsumption;
-(void)_lock_suspendBudgetConsumption;
-(void)addObserver:(id)arg1 forAssertionIdentifier:(id)arg2 queue:(id)arg3 ;
-(void)_lock_enumerateActiveAssertionsWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)allAssertionsForIdentifier:(id)arg1 ;
-(void)_lock_releaseAssertion:(id)arg1 ;
-(void)_releaseAssertion:(id)arg1 ;
-(void)dealloc;
@end

