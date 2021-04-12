/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol OS_dispatch_queue;
#import <HealthDaemon/HealthDaemon-Structs.h>
@class NSObject, NSMutableDictionary;

@interface HDAssertionManager : NSObject {

	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSMutableDictionary* _assertionRecordsByIdentifier;
	NSMutableDictionary* _observerSetsByAssertionIdentifier;
	BOOL _invalidated;
	NSObject*<OS_dispatch_queue> _assertionExpirationQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> assertionExpirationQueue;              //@synthesize assertionExpirationQueue=_assertionExpirationQueue - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 forAssertionIdentifier:(id)arg2 queue:(id)arg3 ;
-(BOOL)takeAssertion:(id)arg1 ;
-(id)activeAssertionsForIdentifier:(id)arg1 ;
-(void)_releaseAssertion:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)assertionExpirationQueue;
-(void)_lock_enumerateActiveAssertionsWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_postNotification:(id)arg1 forAssertion:(id)arg2 ;
-(BOOL)hasActiveAssertionForIdentifier:(id)arg1 ;
-(id)ownerIdentifiersForAssertionIdentifier:(id)arg1 ;
-(void)removeObserver:(id)arg1 forAssertionIdentifier:(id)arg2 ;
@end

