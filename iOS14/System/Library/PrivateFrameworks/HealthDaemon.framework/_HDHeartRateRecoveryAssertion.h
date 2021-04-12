/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDAssertion.h>

@protocol HDWorkoutSessionStateController;
@interface _HDHeartRateRecoveryAssertion : HDAssertion {

	id<HDWorkoutSessionStateController> _sessionStateController;

}

@property (nonatomic,__weak,readonly) id<HDWorkoutSessionStateController> sessionStateController;              //@synthesize sessionStateController=_sessionStateController - In the implementation block
-(id<HDWorkoutSessionStateController>)sessionStateController;
-(id)initWithOwnerIdentifier:(id)arg1 sessionStateController:(id)arg2 ;
@end

