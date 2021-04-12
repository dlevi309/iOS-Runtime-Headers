/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <MobileTimer/MTBedtimeDNDStateMachineOffState.h>

@class NSDate;

@interface MTBedtimeDNDStateMachineUserRequestedOffState : MTBedtimeDNDStateMachineOffState {

	NSDate* _keepOffUntilDate;

}

@property (nonatomic,retain) NSDate * keepOffUntilDate;              //@synthesize keepOffUntilDate=_keepOffUntilDate - In the implementation block
-(void)updateState:(BOOL)arg1 ;
-(void)didEnterWithPreviousState:(id)arg1 ;
-(NSDate *)keepOffUntilDate;
-(BOOL)isEqualToState:(id)arg1 ;
-(id)initWithKeepOffUntilDate:(id)arg1 stateMachine:(id)arg2 ;
-(void)setKeepOffUntilDate:(NSDate *)arg1 ;
@end

