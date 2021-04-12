/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


@protocol RBPowerAssertionManaging <NSObject>
@required
-(void)removeProcess:(id)arg1;
-(void)addProcess:(id)arg1;
-(void)didUpdateProcessStates:(id)arg1;
-(void)removeStateForProcessIdentity:(id)arg1;
-(void)applySystemState:(id)arg1;
-(BOOL)_unitTest_hasSystemPowerAssertion;
-(BOOL)_unitTest_hasPowerAssertionForProcess:(id)arg1;
-(id)_unitTest_nameOfPowerAssertionForSystem;
-(id)_unitTest_nameOfPowerAssertionForProcess:(id)arg1;

@end

