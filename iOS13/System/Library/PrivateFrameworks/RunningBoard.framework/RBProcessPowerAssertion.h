/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RBPowerAssertion.h>

@class RBProcessState, RBProcess;

@interface RBProcessPowerAssertion : RBPowerAssertion {

	RBProcessState* _state;
	RBProcess* _process;

}

@property (nonatomic,readonly) RBProcess * process;              //@synthesize process=_process - In the implementation block
@property (nonatomic,copy) RBProcessState * state;               //@synthesize state=_state - In the implementation block
-(RBProcessState *)state;
-(void)setState:(RBProcessState *)arg1 ;
-(RBProcess *)process;
-(id)initWithProcess:(id)arg1 ;
-(id)_preventIdleSleepIdentifiers;
-(int)_targetPid;
@end

