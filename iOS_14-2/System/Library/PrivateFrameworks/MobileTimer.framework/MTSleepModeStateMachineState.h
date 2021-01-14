/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <MobileTimer/MTStateMachineState.h>
#import <libobjc.A.dylib/MTSleepModeStateMachineEventHandler.h>

@class NSString;

@interface MTSleepModeStateMachineState : MTStateMachineState <MTSleepModeStateMachineEventHandler>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateState:(BOOL)arg1 ;
-(id)determineNextState:(BOOL)arg1 ;
-(id)nextSleepModeStartDateAfterDate:(id)arg1 ;
-(id)nextSleepModeEndDate;
-(id)nextSleepModeEndDateAfterDate:(id)arg1 ;
-(id)nextSleepModeStartDate;
-(void)userWokeUp;
-(void)updateModeKeepOffUntilDateIfNecessary;
-(void)sleepModeEnabled:(BOOL)arg1 userRequested:(BOOL)arg2 date:(id)arg3 ;
@end

