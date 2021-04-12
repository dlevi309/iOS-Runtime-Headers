/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <MobileTimer/MTBedtimeDNDStateMachineState.h>

@class NSDate;

@interface MTBedtimeDNDStateMachineOnState : MTBedtimeDNDStateMachineState {

	NSDate* _bedtimeDNDEndDate;

}

@property (nonatomic,readonly) NSDate * bedtimeDNDEndDate;              //@synthesize bedtimeDNDEndDate=_bedtimeDNDEndDate - In the implementation block
-(void)didEnterWithPreviousState:(id)arg1 ;
-(BOOL)isEqualToState:(id)arg1 ;
-(id)initWithBedtimeDNDEndDate:(id)arg1 stateMachine:(id)arg2 ;
-(NSDate *)bedtimeDNDEndDate;
@end

