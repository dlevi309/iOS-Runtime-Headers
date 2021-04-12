/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)_init;
-(id)newAssertionToDisableIdleTimerForReason:(id)arg1 ;
-(BOOL)isIdleTimerServiceAvailable;
-(id)_initWithModel:(id)arg1 ;
-(id)newIdleTimerAssertionWithConfiguration:(id)arg1 forReason:(id)arg2 ;
@end

