/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RBPowerAssertion.h>

@class RBSystemState;

@interface RBSystemPowerAssertion : RBPowerAssertion {

	RBSystemState* _state;

}

@property (nonatomic,copy) RBSystemState * state;              //@synthesize state=_state - In the implementation block
-(id)init;
-(RBSystemState *)state;
-(void)setState:(RBSystemState *)arg1 ;
-(id)_preventIdleSleepIdentifiers;
-(int)_targetPid;
@end

