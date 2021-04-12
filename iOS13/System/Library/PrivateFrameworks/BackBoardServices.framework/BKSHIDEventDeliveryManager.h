/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/BSDebugDescriptionProviding.h>

@protocol BKSHIDEventDeliveryService, OS_dispatch_queue, BSInvalidatable;
@class NSHashTable, NSMutableDictionary, NSMutableArray, NSObject, BSMutableIntegerMap, NSDictionary, NSArray, NSSet, BKSHIDEventDispatchingTarget, NSString;

@interface BKSHIDEventDeliveryManager : NSObject <BSDebugDescriptionProviding> {

	id<BKSHIDEventDeliveryService> _service;
	BOOL _forTesting;
	os_unfair_lock_s _lock;
	NSHashTable* _lock_assertions;
	long long _lock_discreteDispatchingSeed;
	NSMutableDictionary* _lock_discreteDispatchingRules;
	long long _lock_keyCommandsDispatchingSeed;
	NSMutableDictionary* _lock_keyCommandsDispatchingRules;
	long long _lock_deferringSeed;
	NSMutableArray* _lock_deferringRules;
	long long _lock_keyCommandsRegistrationSeed;
	NSMutableDictionary* _lock_keyCommandsRegistrations;
	NSObject*<OS_dispatch_queue> _implicitFlushQueue;
	CFBooleanRef _lock_needsFlush;
	long long _lock_preventFlushingSeed;
	BSMutableIntegerMap* _lock_preventFlushingReasons;
	id<BSInvalidatable> _lock_implicitPreventFlushingAssertion;
	NSDictionary* _lock_lastSentDiscreteDispatchingRules;
	NSDictionary* _lock_lastSentKeyCommandsDispatchingRules;
	NSArray* _lock_lastSentDeferringRules;
	NSDictionary* _lock_lastSentKeyCommandsRegistrations;
	NSSet* _lock_lastSentSetOfKeyCommandsRegistrations;
	BKSHIDEventDispatchingTarget* _lock_focusTargetOverride;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)_initWithService:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)debugDescriptionWithMultilinePrefix:(id)arg1 ;
-(id)deferEventsMatchingPredicate:(id)arg1 toTarget:(id)arg2 withReason:(id)arg3 ;
-(id)transactionAssertionWithReason:(id)arg1 ;
-(id)registerKeyCommands:(id)arg1 ;
-(id)_initForTestingWithService:(id)arg1 ;
-(id)dispatchDiscreteEventsForReason:(id)arg1 withRules:(id)arg2 ;
-(id)dispatchKeyCommandsForReason:(id)arg1 withRule:(id)arg2 ;
-(void)_setFocusTargetOverride:(id)arg1 ;
-(void)_syncServiceFlushState;
-(id)_lock_transactionAssertionWithReason:(id)arg1 ;
-(void)_lock_implicitFlush;
-(void)_lock_flushIfNeeded;
-(id)_lock_stateDescription;
@end

