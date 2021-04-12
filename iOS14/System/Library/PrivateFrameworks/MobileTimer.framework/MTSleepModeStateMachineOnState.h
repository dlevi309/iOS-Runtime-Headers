/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <MobileTimer/MTSleepModeStateMachineState.h>

@class NSDate;

@interface MTSleepModeStateMachineOnState : MTSleepModeStateMachineState {

	NSDate* _sleepModeEndDate;

}

@property (nonatomic,readonly) NSDate * sleepModeEndDate;              //@synthesize sleepModeEndDate=_sleepModeEndDate - In the implementation block
-(NSDate *)sleepModeEndDate;
-(void)didEnterWithPreviousState:(id)arg1 ;
-(BOOL)isEqualToState:(id)arg1 ;
-(id)initWithSleepModeEndDate:(id)arg1 stateMachine:(id)arg2 ;
@end

