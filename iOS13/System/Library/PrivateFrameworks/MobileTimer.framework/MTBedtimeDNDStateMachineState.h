/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <MobileTimer/MTStateMachineState.h>
#import <libobjc.A.dylib/MTBedtimeDNDStateMachineEventHandler.h>

@class NSString;

@interface MTBedtimeDNDStateMachineState : MTStateMachineState <MTBedtimeDNDStateMachineEventHandler>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateState:(BOOL)arg1 ;
-(void)userWokeUp;
-(void)updateModeKeepOffUntilDateIfNecessary;
-(void)bedtimeDNDEnabled:(BOOL)arg1 userRequested:(BOOL)arg2 date:(id)arg3 ;
-(id)determineNextState:(BOOL)arg1 ;
-(id)nextBedtimeDNDStartDateAfterDate:(id)arg1 ;
-(id)nextBedtimeDNDEndDate;
-(id)nextBedtimeDNDEndDateAfterDate:(id)arg1 ;
-(id)nextBedtimeDNDStartDate;
@end

