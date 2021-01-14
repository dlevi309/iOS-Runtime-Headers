/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IdleTimerServices.framework/IdleTimerServices
*/


@protocol ITIdleTimerStateRequestHandling;
#import <IdleTimerServices/IdleTimerServices-Structs.h>
@class ITIdleTimerStateModel;

@interface ITIdleTimerState : NSObject {

	os_unfair_lock_s _accessLock;
	ITIdleTimerStateModel* _model;
	id<ITIdleTimerStateRequestHandling> _requestHandler;

}
+(id)sharedInstance;
+(BOOL)isIdleTimerServiceAvailable;
-(id)newAssertionToDisableIdleTimerForReason:(id)arg1 ;
-(BOOL)isIdleTimerServiceAvailable;
-(id)_initWithModel:(id)arg1 ;
-(id)newIdleTimerAssertionWithConfiguration:(id)arg1 forReason:(id)arg2 error:(id*)arg3 ;
-(id)newIdleTimerAssertionWithConfiguration:(id)arg1 forReason:(id)arg2 ;
-(id)newAssertionToDisableIdleTimerForReason:(id)arg1 error:(id*)arg2 ;
-(id)_init;
@end

