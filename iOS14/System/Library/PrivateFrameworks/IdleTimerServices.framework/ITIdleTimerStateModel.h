/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)resendIdleTimerAssertions;
-(id)init;
-(BOOL)isIdleTimerServiceAvailable;
-(void)_addStateCaptureHandler;
-(BOOL)handleIdleEvent:(unsigned long long)arg1 usingConfigurationWithIdentifier:(id)arg2 ;
-(id)newIdleTimerAssertionWithConfiguration:(id)arg1 forReason:(id)arg2 error:(id*)arg3 ;
-(id)_access_newIdleTimerAssertionWithConfiguration:(id)arg1 forReason:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
@end

