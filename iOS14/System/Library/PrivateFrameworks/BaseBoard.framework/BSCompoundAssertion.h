/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/BSCompoundAssertionState.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSMutableOrderedSet, NSString, NSSet, NSOrderedSet;

@interface BSCompoundAssertion : NSObject <BSCompoundAssertionState, BSInvalidatable> {

	os_unfair_lock_s _syncLock;
	BOOL _syncLock_invalid;
	/*^block*/id _syncLock_block;
	os_unfair_lock_s _dataLock;
	NSMutableOrderedSet* _dataLock_acquisitions;
	NSString* _dataLock_identifierPrefix;

}

@property (readonly) NSSet * reasons; 
@property (readonly) NSOrderedSet * orderedReasons; 
@property (getter=isActive,readonly) BOOL active; 
@property (readonly) NSSet * context; 
@property (readonly) NSOrderedSet * orderedContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(id)assertionWithIdentifier:(id)arg1 ;
+(id)assertionWithIdentifier:(id)arg1 stateDidChangeHandler:(/*^block*/id)arg2 ;
-(id)acquireForReason:(id)arg1 withContext:(id)arg2 ;
-(id)init;
-(BOOL)isActive;
-(NSSet *)context;
-(NSString *)description;
-(NSOrderedSet *)orderedReasons;
-(NSSet *)reasons;
-(void)invalidate;
-(id)acquireForReason:(id)arg1 ;
-(NSOrderedSet *)orderedContext;
-(void)dealloc;
@end

