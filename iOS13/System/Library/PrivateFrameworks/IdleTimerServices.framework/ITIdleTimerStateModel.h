/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IdleTimerServices.framework/IdleTimerServices
*/

#import <IdleTimerServices/IdleTimerServices-Structs.h>
#import <libobjc.A.dylib/ITIdleTimerStateRequestDelegate.h>

@protocol ITIdleTimerStateRequestHandling, BSInvalidatable;
@class NSMutableDictionary, NSString;

@interface ITIdleTimerStateModel : NSObject <ITIdleTimerStateRequestDelegate> {

	os_unfair_lock_s _accessLock;
	NSMutableDictionary* _access_idleTimerAssertionsByConfigIdentifier;
	id<ITIdleTimerStateRequestHandling> _requestHandler;
	id<BSInvalidatable> _stateCaptureAssertion;

}

@property (getter=isIdleTimerServiceAvailable,readonly) BOOL idleTimerServiceAvailable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)isIdleTimerServiceAvailable;
-(BOOL)handleIdleEvent:(unsigned long long)arg1 usingConfigurationWithIdentifier:(id)arg2 ;
-(void)_addStateCaptureHandler;
-(void)resendIdleTimerAssertions;
-(id)newIdleTimerAssertionWithConfiguration:(id)arg1 forReason:(id)arg2 ;
-(id)_access_newIdleTimerAssertionWithConfiguration:(id)arg1 forReason:(id)arg2 ;
@end

