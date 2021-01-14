/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <MobileTimer/MTSleepModeStateMachineOffState.h>

@class NSDate;

@interface MTSleepModeStateMachineUserRequestedOffState : MTSleepModeStateMachineOffState {

	NSDate* _keepOffUntilDate;

}

@property (nonatomic,retain) NSDate * keepOffUntilDate;              //@synthesize keepOffUntilDate=_keepOffUntilDate - In the implementation block
-(void)updateState:(BOOL)arg1 ;
-(NSDate *)keepOffUntilDate;
-(void)setKeepOffUntilDate:(NSDate *)arg1 ;
-(void)didEnterWithPreviousState:(id)arg1 ;
-(BOOL)isEqualToState:(id)arg1 ;
-(id)initWithKeepOffUntilDate:(id)arg1 stateMachine:(id)arg2 ;
@end

