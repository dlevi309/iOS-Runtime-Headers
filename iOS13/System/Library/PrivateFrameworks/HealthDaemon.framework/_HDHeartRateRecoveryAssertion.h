/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDAssertion.h>

@protocol HDWorkoutSessionStateController;
@interface _HDHeartRateRecoveryAssertion : HDAssertion {

	id<HDWorkoutSessionStateController> _sessionStateController;

}

@property (nonatomic,__weak,readonly) id<HDWorkoutSessionStateController> sessionStateController;              //@synthesize sessionStateController=_sessionStateController - In the implementation block
-(id)initWithOwnerIdentifier:(id)arg1 sessionStateController:(id)arg2 ;
-(id<HDWorkoutSessionStateController>)sessionStateController;
@end

