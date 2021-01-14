/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


@protocol RBPowerAssertionManaging <NSObject>
@required
-(void)removeStateForProcessIdentity:(id)arg1;
-(id)_unitTest_nameOfPowerAssertionForProcess:(id)arg1;
-(BOOL)_unitTest_hasSystemPowerAssertion;
-(void)applySystemState:(id)arg1;
-(void)didUpdateProcessStates:(id)arg1;
-(void)addProcess:(id)arg1;
-(id)_unitTest_nameOfPowerAssertionForSystem;
-(void)removeProcess:(id)arg1;
-(BOOL)_unitTest_hasPowerAssertionForProcess:(id)arg1;

@end

