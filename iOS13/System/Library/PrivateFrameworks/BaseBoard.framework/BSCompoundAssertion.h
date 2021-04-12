/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/BSCompoundAssertionState.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSMutableSet, NSString, NSSet;

@interface BSCompoundAssertion : NSObject <BSCompoundAssertionState, BSInvalidatable> {

	os_unfair_lock_s _syncLock;
	BOOL _syncLock_invalid;
	/*^block*/id _syncLock_block;
	os_unfair_lock_s _dataLock;
	NSMutableSet* _dataLock_acquisitions;
	NSString* _dataLock_identifierPrefix;

}

@property (readonly) NSSet * reasons; 
@property (getter=isActive,readonly) BOOL active; 
@property (readonly) NSSet * context; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(id)assertionWithIdentifier:(id)arg1 ;
+(id)assertionWithIdentifier:(id)arg1 stateDidChangeHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(BOOL)isActive;
-(NSSet *)context;
-(NSSet *)reasons;
-(void)_acquisitionDidInvalidate:(id)arg1 ;
-(id)_initWithIdentifier:(id)arg1 ;
-(id)_dataLock_context;
-(id)acquireForReason:(id)arg1 withContext:(id)arg2 ;
-(id)_syncLock_acquireForReason:(id)arg1 withContext:(id)arg2 ;
-(id)_dataLock_copyState;
-(void)_syncLock_acquisitionDidInvalidate:(id)arg1 ;
-(id)acquireForReason:(id)arg1 ;
@end

