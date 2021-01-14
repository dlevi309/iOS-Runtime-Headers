/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BKSSystemApplicationDelegate.h>

@class FBSystemShellInitializationContext, RBSAssertion, NSMutableSet, NSMutableArray, NSString;

@interface FBSystemShell : NSObject <BSDescriptionProviding, BKSSystemApplicationDelegate> {

	FBSystemShellInitializationContext* _initializationContext;
	unsigned long long _state;
	id _observerToken;
	RBSAssertion* _runningAssertion;
	os_unfair_lock_s _lock;
	RBSAssertion* _lock_preventSleepAssertion;
	NSMutableSet* _lock_preventIdleSleepReasons;
	NSMutableArray* _lock_blocksToRunWhenReady;

}

@property (nonatomic,readonly) unsigned long long _state;                                               //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) FBSystemShellInitializationContext * initializationContext;              //@synthesize initializationContext=_initializationContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)systemApplicationIsAliveForWatchdog:(id)arg1 ;
+(id)_createSingletonWithOptions:(id)arg1 ;
-(id)_initWithOptions:(id)arg1 ;
-(id)succinctDescription;
-(unsigned long long)_state;
-(void)_setState:(unsigned long long)arg1 ;
-(void)_setSystemIdleSleepDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)sendActionsToBackBoard:(id)arg1 ;
-(NSString *)description;
-(FBSystemShellInitializationContext *)initializationContext;
-(void)_initializationComplete;
-(void)readyForInteraction;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)_addBlockToExecuteWhenReady:(/*^block*/id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)_bksSystemApplication;
@end

